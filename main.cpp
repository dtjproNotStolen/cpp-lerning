#include <iostream>
#include <string>
#include <cstdlib>


using str = std::string; 
int main() {
    srand(time(0));

    double zeros = 0;
    double ones = 0;
    double twos = 0;
    int x;
    str input;
    bool doQuit = false;

            std::cout << "****************rock paper scisors game*****************\n";

    
    while (!doQuit) {
        x = rand() %3;
        // add game       

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
        } else {
            std::cout << "type \"help\" for the list of commands\n";
        }
        
        
    }
    

    return 0;
}