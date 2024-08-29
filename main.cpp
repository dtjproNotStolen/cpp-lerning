#include <iostream>
#include <cmath>

using str = std::string;

int main() {

    double a;
    double b;
    double c;

    std::cout << "Hypotenuse calculator v2\n";

    std::cout << "enter side A:";
    std::cin >> a;

    std::cout << "\nenter side B:";
    std::cin >> b;

    c = sqrt((pow(a, 2) + pow(b, 2)));
    std::cout <<'\n' <<c<<'\n';

    return 0;
}