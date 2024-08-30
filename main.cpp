#include <iostream>
#include <cstdlib>


using str = std::string; 
int main() {
    srand(time(0));

    double zeros = 0;
    double ones = 0;
    double twos = 0;
    int x;
    char input;
    bool doQuit = false;

    do
    {
        x = rand() %3;
        // add logic
        

        std::cin >> input;

        std::cin.clear();
        fflush(stdin);

        std::cout << input;

        if (input == 'q' || input == 'Q')
        {
            std::cout <<"\nquit\n"
        }
        


    } while (!doQuit);
    




    return 0;
}