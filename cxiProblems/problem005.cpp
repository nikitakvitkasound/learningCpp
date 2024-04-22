// CXI Problems :: 5 :: C++ Program to Add/Subtract/Multiply/Divide two Floating Point Numbers.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <algorithm>
#include <array>
#include <iostream>
#include <string>

constexpr std::array<char, 5> OPERATIONS = {'A', 'S', 'M', 'D', 'Q'};

static void Intro();
static void ErrorMessage();
static void GetInputAndValidate(std::string phrase, double& a);
static void GetInputAndValidate(std::string phrase, char& ch);
static bool isOperationLegal(char& ch);

int main(){
    double user_input_a;
    double user_input_b;
    char user_input_op = 'A';

    Intro();
    do{
        GetInputAndValidate(">>>Input Number #1: ", user_input_a);
        GetInputAndValidate(">>>Input Number #2: ", user_input_b);
        GetInputAndValidate(">>>Input Operation: ", user_input_op);
        switch(user_input_op){
            case OPERATIONS[0]:
                std::cout << "Result of Addition: " << user_input_a + user_input_b << "\n\n";
                break;
            case OPERATIONS[1]:
                std::cout << "Result of Subtraction: " << user_input_a - user_input_b << "\n\n";
                break;
            case OPERATIONS[2]:
                std::cout << "Result of Multiplication: " << user_input_a * user_input_b << "\n\n";
                break;
            case OPERATIONS[3]:
                std::cout << "Result of Division: " << user_input_a / user_input_b << "\n\n";
                break;
            case OPERATIONS[4]:
                std::cout << "Thank you, bye!\n";
                break;
            default:
                std::cout << "Something went wrong . . . \n";
        }

    } while (user_input_op != 'Q');

    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

static void Intro(){
    std::cout << "Hello there! I'm simple calculator\n";
    std::cout << "Input two decimal numbers (positive or negative)\n";
    std::cout << "Operation: A for add, S 'subtract', M 'multiply', D 'divide' or Q 'quit'. And I will do the rest!!\n";
}

static void ErrorMessage(){
    std::cout << "[ERROR]: Invalide Input. Try again!\n";
}

static void GetInputAndValidate(std::string phrase, double& a){
    do{
        std::cout << phrase;
        std::cin >> a;

        if (std::cin.fail()){
            ErrorMessage();
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        else{
            break;
        }
    }while (true);
}

static void GetInputAndValidate(std::string phrase, char& ch){
    do{
        std::cout << phrase;
        std::cin >> ch;

        if (std::cin.fail()){
            ErrorMessage();
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        else if (!(isOperationLegal(ch))){
            ErrorMessage();
            continue;
        }
        else{
            break;
        }
    }while (true);
}

static bool isOperationLegal(char& ch){
    ch = static_cast<char>(toupper(ch));
    
    auto iter = std::find(OPERATIONS.begin(), OPERATIONS.end(), ch);
    if (iter != OPERATIONS.end()){
        return true;
    }
    else{
        return false;
    }
}
