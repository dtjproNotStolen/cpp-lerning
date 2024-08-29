#include <iostream>

using str = std::string;    

int main() {

    str name;       //variable asigment

    std::cout << "Whats your name:";    //input
    std::cin >> name;

    std::cout << "Hello " << name << '\n';  //final output


    return 0;
}