// CXI Problems :: 27 :: Write a program to calculate taxes, with the following conditions. (Originally it's problem 24 but I missed it and broke the order)
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and chacking for corner cases)
// *** Until 'new' problem occurs.

#include <iostream>

int main(){
    const float SALARY_RANGE_MIN = 1500.0f;
    const float SALARY_RANGE_MED = 3000.0f;
    const float SALARY_RANGE_HIGH = 5000.0f;
    const float TAX_MIN = 10.0f;
    const float TAX_MED = 20.0f;
    const float TAX_HIGH = 30.0f;
    const float PERCENT_COEFF = 0.01f;

    std::cout << "Hi! Let's calculate your salary after taxes. . .\n";
    
    std::cout << "What's is your current monthly salary BEFORE taxes?\n >> ";
    float salary_current;
    std::cin >> salary_current;

    if(salary_current < SALARY_RANGE_MIN){
        std::cout << "Based on current income your tax percentage is " << 0 << "%. And your monthly salary is $" << salary_current << "\n\n"; 
    }
    else if(SALARY_RANGE_MIN <= salary_current && salary_current <+ SALARY_RANGE_MED){
        float tax = salary_current * TAX_MIN * PERCENT_COEFF;
        salary_current -= tax;
        std::cout << "Based on current income your tax percentage is " << TAX_MIN << "%. And your monthly salary is $" << salary_current << "\n\n";
    }
    else if(SALARY_RANGE_MED <= salary_current && salary_current <= SALARY_RANGE_HIGH){
        float tax = salary_current * TAX_MED * PERCENT_COEFF;
        salary_current -= tax;
        std::cout << "Based on current income your tax percentage is " << TAX_MED << "%. And your monthly salary is $" << salary_current << "\n\n";
    }
    else{
        float tax = salary_current * TAX_HIGH * PERCENT_COEFF;
        salary_current -= tax;
        std::cout << "Based on current income your tax percentage is " << TAX_HIGH << "%. And your monthly salary is $" << salary_current << "\n\n";
    }


    system("pause");
    return 0;
}
