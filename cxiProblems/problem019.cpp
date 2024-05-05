// CXI Problems :: 19 :: C++ Program to find the Largest Number Among Three Numbers (Input multiple numbers).
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void GetInputAndValidate(const std::string& phrase, int& input);

int main(){
    const int INT_CNT = 8;
    int input_num;
    bool keep_asking_input = true;
    char answer = 'Y';

    std::cout << "Hello, I can find the Largest Number amoung given numbers!\n";
    std::vector<int> nums;

    while(keep_asking_input){
        GetInputAndValidate("Add an integer to list of numbers: ", input_num);
        nums.push_back(input_num);

        if(nums.size() % INT_CNT == 0){
            std::cout << ">> Do you want to proceed with input of integers (Y/N): ";
            std::cin >> answer;
            answer = static_cast<char>(std::toupper(answer));
            if(answer == 'Y'){
                std::cout << "Okay, keep going. . . \n";
            }
            else if(answer == 'N'){
                std::cout << "Okay, let's find out what number is largest (*proccessing*). . . ";
                keep_asking_input = false;
            }
            else{
                std::cout << "I don't know what you meant but I think I will keep going. . . \n";
            }
        }
    }

    std::cout << "and max number is '" << *std::max_element(nums.begin(), nums.end()) << "'.\n\n";


    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

void GetInputAndValidate(const std::string& phrase, int& input){
    do{
        std::cout << phrase;
        std::cin >> input;
        if(std::cin.fail()){
            std::cout << "[ERROR]: Only integers are allowed!\n\n";
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        else{
            break;
        }
    }while(true);
}
