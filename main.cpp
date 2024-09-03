#include <iostream>
#include <string>

int arrayIntSerch(int array[], int serchedNum, int lenght);  


int main() {

    int nums[] = {1,2,3,4,5,6,7,8,9,10};            //decleration of variables
    int lenght = sizeof(nums) / sizeof(nums[0]);
    int idkNum;

    std::cin >> idkNum;

    int idkNumPlace;

    idkNumPlace = arrayIntSerch(nums, idkNum, lenght);
    std::cout << idkNumPlace << '\n';

    return 0;
}

int arrayIntSerch(int array[], int serchedNum, int lenght) {            // btw you can switch type of serch by switching first and second data type to another type
    for (int i = 0; i < lenght; i++){
        if (array[i] == serchedNum) {
            return i;
        }
        
    }
    return -1;
    
}