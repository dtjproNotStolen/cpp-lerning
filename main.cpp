#include <iostream>

using str = std::string;    

int main() {

    str name;       //variable asigment

    std::cout << "Whats your name:";    //input
    std::cin >> name;   /*if i need input wight spaces
    std::getline(std::cin, name);
    */

    std::cout << "Hello " << name << '\n';  //final output


    return 0; //sorry for gramar and words im writing this on 11pm
}