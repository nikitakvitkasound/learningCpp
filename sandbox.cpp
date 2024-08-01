#include <iostream>
#include <string>
#include <cmath>

double daily_rate(double hourly_rate) {
    int billable_hours {8};
    return hourly_rate * billable_hours;
}

int monthly_rate(double hourly_rate, double discount) {
    int billable_days {22};
    double monthly_rate = daily_rate(hourly_rate) * billable_days;
    discount = monthly_rate * discount * 0.01;
    return static_cast<int>(std::ceil(monthly_rate - discount));
}

int main(){

    double hr {77.0};
    double disc {10.5};

    std::cout << monthly_rate(hr, disc) << '\n';

    system("pause");
    return 0;
}
