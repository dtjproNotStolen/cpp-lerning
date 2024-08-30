#include <iostream>

using str = std::string;

int main() {

    char input;
    double number1;
    double number2;
    double resoult;

    std::cout << "*******************************************\n";
    std::cout << "************condsole calculator************\n";
    std::cout << "*******************************************\n";


    std::cout << "Enter an type of operation (+, -, /, *) :";
    std::cin >> input;

    std::cout << "\nEnter the first number:";
    std::cin >> number1;

    std::cout << "\nEnter the second number:";
    std::cin >> number2;

    

    switch (input){
    case ('+'):
        std::cout << "\nThe resoult is:";       //sorry im too lazy to make it better and if it works it works
        std::cout << number1 + number2 <<'\n';
        break;
    case ('-'):
        std::cout << "\nThe resoult is:";
        std::cout << number1 - number2 <<'\n';
        break;
    case ('/'):
        std::cout << "\nThe resoult is:";
        std::cout << number1 / number2 <<'\n';
        break;
    case ('*'):
        std::cout << "\nThe resoult is:";
        std::cout << number1 * number2<<'\n';
    default:
        std::cout << "\nPlease enter an operator\n";
        break;
    }


    return 0;
}