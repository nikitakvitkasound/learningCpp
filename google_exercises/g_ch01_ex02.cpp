#include <iostream>

int main(){
    int input_var { };

    do
    {
        std::cout << "Enter numeric value (-1 = quit): ";
        
        if(!(std::cin >> input_var)){
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            std::cout << "ERROR: only number values!!\n";
            continue;
        }
        
        if(input_var != -1){
            std::cout << ">> You entered: " << input_var << '\n';
        }

    }while(input_var != -1);

    std::cout << ">> All done!\n";

    std::cout << '\n';
    system("pause");
    return 0;
}
