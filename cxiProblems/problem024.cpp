// CXI Problems :: 24 :: Switch
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and chacking for corner cases)
// *** Until 'new' problem occurs.

#include <iostream>

int main(){
    int day;
    std::cout << "Type number between 1-7 and you will see day of the week. I know I'm genius\n";
    std::cout << "Your number is ";
    std::cin >> day;

    switch(day){
        case 1: std::cout << "Monday!\n\n";
                break;
        case 2: std::cout << "Tuesday!\n\n";
                break;
        case 3: std::cout << "Wednesday!\n\n";
                break;
        case 4: std::cout << "Thursday!\n\n";
                break;
        case 5: std::cout << "Friday!\n\n";
                break;
        case 6: std::cout << "Saturday!\n\n";
                break;
        case 7: std::cout << "Sunday!\n\n";
                break;
        default:std::cout << "Only numbers between 1 and 7. I'm not that smart!\n\n";
    }


    system("pause");
    return 0;
}
