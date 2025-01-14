#include <iostream>

int main(){
    int SECONDS_IN_HOUR { 3600 };
    int SECONDS_IN_MINUTE { 60 };

    int user_input {};
    std::cout << "Number of seconds: ";
    std::cin >> user_input;

    std::cout << "Hours: " << user_input / SECONDS_IN_HOUR << '\n';
    user_input %= SECONDS_IN_HOUR;

    std::cout << "Minutes: " << user_input / SECONDS_IN_MINUTE << '\n';
    user_input %= SECONDS_IN_MINUTE;

    std::cout << "Seconds: " << user_input << '\n';

    std::cout << '\n';
    system("pause");    
    return 0;
}
