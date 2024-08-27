#include <iostream>

// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    double negative_rate {3.213};
    double low_rate {0.5};
    double mid_rate {1.621};
    double high_rate {2.475};
    if(balance < 0){
        return negative_rate;
    }
    else if(balance < 1000){
        return low_rate;
    }
    else if(balance < 5000){
        return mid_rate;
    }
    else{
        return high_rate;
    }
}

double yearly_interest(double balance) {
    return balance * interest_rate(balance) * 0.01;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    return balance + yearly_interest(balance);
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    int years = 0;
    while(balance < target_balance){
        balance = annual_balance_update(balance);
        years += 1;
        std::cout << years << '\n';
    }
    return years;
}

int main(){
    std::cout << annual_balance_update(100.5);
    std::cout << years_until_desired_balance(100.0, 125.80);
    return 0;
}
