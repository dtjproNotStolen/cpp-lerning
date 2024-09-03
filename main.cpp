#include <iostream>
#include <string>
#include <cstdlib>


using str = std::string; 
int main() {
    srand(time(0));


    int x;
    str input;
    bool doQuit = false;
    double wins = 0;
    int score = 0;
    double loses = 0;
    int draws = 0;
    int roundsPlayed = 0;
    double winRate = 0;

    std::cout << "****************rock paper scisors game*****************\n";

    
    while (!doQuit) {
        x = rand() %3;




        std::getline(std::cin, input);

        if (input == "exit")
        {
            doQuit = true;
            std::cout <<"exiting\n";
        } else if (input == "help") {

            


            std::cout << "rock - plays rock \n";
            std::cout << "paper - exits the program \n";
            std::cout << "scissors - exits the program \n";
            std::cout << "info - shows the score \n";
            std::cout << "help - shows the list of comands \n";
            std::cout << "exit - exits the program \n";
        } else if (input == "info") {

            if (wins + loses != 0){
                winRate = wins/(wins+loses)*100;
            }
            

            std::cout << "win:" << wins << '\n';
            std::cout << "loses:" << loses << '\n';
            std::cout << "draws:" << draws << '\n';
            std::cout << "rounds played:" << roundsPlayed <<'\n';
            std::cout << "win rate:" << winRate << "%\n";
        } else if (input == "rock") {
            if (x == 0){
                draws++;
                std::cout << "draw\n";
            }else if (x == 1)
            {
                score--;
                loses++;
                std::cout << "lost\n";
            } else if (x == 2)
            {
                score++;
                wins++;
                std::cout << "won\n";
            } else {
                std::cout << "something went wrong";
            } 
        } else if (input == "paper") {
            if (x == 0){
                wins++;
                score++;
                std::cout << "won\n";
            }else if (x == 1)
            {
                draws++;
                std::cout << "draw\n";
            } else if (x == 2)
            {
                score--;
                loses++;
                std::cout << "lost\n";
            } else {
                std::cout << "something went wrong";
            }
        } else if (input == "scissors") {
            if (x == 0){
                loses++;
                score--;
                std::cout << "lose\n";
            }else if (x == 1)
            {
                score++;
                wins++;
                std::cout << "won\n";
            } else if (x == 2)
            {
                draws++;
                std::cout << "tie\n";
            } else {
                std::cout << "something went wrong";
            }
        } else {
            std::cout << "type \"help\" for help\n";
        }

        if (input == "rock" || input == "paper" || input == "scissors") {
        roundsPlayed++;
        }
        
    }
    
    return 0;

}