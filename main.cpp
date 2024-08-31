#include <iostream>
#include <string>

using str = std::string;
double calcTotal(double prices[], int size);

int main() {

    double prices[] = {4.99, 1.49 ,3.49, 6.49};
    int size = sizeof(prices)/sizeof prices[0];
    double total = calcTotal(prices, );

    std::cout << total << '\n';

    return 0;
}

double calcTotal(double prices[], int size) { //lol
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
}