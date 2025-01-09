#include <iostream>

double GetInput();
void CalcMethod1(double week_sales);
void CalcMethod2(double week_sales);
void CalcMethod3(double week_sales);

int main(){
    double week_sale {GetInput()};

    CalcMethod1(week_sale);
    CalcMethod2(week_sale);
    CalcMethod3(week_sale);


    std::cout << '\n';
    system("pause");
    return 0;
}


// - - - - Declaration - - - - //
double GetInput(){
    double input {};
    do{
        std::cout << "Enter weekly sales (positive integers only): ";
        if(!(std::cin >> input) || input < 0){
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            std::cout << "[ERROR]: only positive integers!!\n";
            continue;
        }
        return input;
    }while(true);
}

void CalcMethod1(double week_sales){
    const double SALARY { 600 };
    std::cout << "[FIRST METHOD 1]: You sold $" << week_sales << " of shoes, but you have $" << SALARY << " salary.\n"; 
}

void CalcMethod2(double week_sales){
    const double WORK_HOURS { 6.0 };
    const double SALARY_HOUR_RATE { 7.0 };
    const double COMMISION { 0.1 };  // 10%

    double salary { (WORK_HOURS * SALARY_HOUR_RATE) + (week_sales * COMMISION) };
    std::cout << "[FIRST METHOD 2]: You sold $" << week_sales << " of shoes, but you have $" << salary << " salary.\n";
}

void CalcMethod3(double week_sales){
    const double COMMISION { 0.2 };  // 20%
    const double PER_SHOE { 20.0 };
    const double SHOE_PRICE { 225.0 };

    double salary { ((week_sales / SHOE_PRICE) * PER_SHOE) + (week_sales * COMMISION) };
    std::cout << "[FIRST METHOD 3]: You sold $" << week_sales << " of shoes, but you have $" << salary << " salary.\n";
}
