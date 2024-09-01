#include <iostream>
#include <string>

int arrayIntSerch(int array, int serchedNum, int lenght);

using str = std::string; 

int main() {

    int nums[] = {1,2,3,4,5,6,7,8,9,10};

    return 0;
}

int arrayIntSerch(int array, int serchedNum, int lenght) {
    for (int i = 0; i < lenght; i++)
    {
        if (array[i] == serchedNum) {
            return i;
        }
        
    }
    
}