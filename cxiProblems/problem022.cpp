// CXI Problems :: 22 :: BMI Calculator
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and chacking for corner cases)
// *** Until 'new' problem occurs.

#include <iostream>

int main(){
    const float UNDERWEIGHT = 18.5f;
    const float NORMALWEIGHT = 24.9f;
    const float OVERWEIGHT = 29.9f;
    float weight;
    float height;
    float bmi;

    std::cout << "Hello! I can do Mody MAss Index for you.\n";
    std::cout << "Input your weight: ";
    std::cin >> weight;

    std::cout << "Input your height: ";
    std::cin >> height;
    height = height / 100; // convert from cm to m

    bmi = weight / (height * height);
    std::cout << "Your BMI is '" << bmi << "'\n";
    if(bmi < UNDERWEIGHT){
        std::cout << "And you are underweight person.\n\n";
    }
    else if(bmi < NORMALWEIGHT){
        std::cout << "And you have normal weight.\n\n";
    }
    else if (bmi < OVERWEIGHT){
        std::cout << "And you are overweight person.\n\n";
    }
    else{
        std::cout << "You are obese. Drop coockies!\n\n";
    }


    system("pause");
    return 0;
}
