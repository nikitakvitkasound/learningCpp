#include <cmath>

const int BILLABLE_HOURS{ 8 };
const int BILLABLE_DAYS{ 22 };

double daily_rate(double hourly_rate) {
    return hourly_rate * BILLABLE_HOURS;
}

double apply_discount(double before_discount, double discount) {
    discount = (before_discount * discount) * 0.01;
    return before_discount - discount;
}

int monthly_rate(double hourly_rate, double discount) {
    double monthly_rate = daily_rate(hourly_rate) * BILLABLE_DAYS;
    discount = monthly_rate * discount * 0.01;
    return static_cast<int>(std::ceil(monthly_rate - discount));
}

int days_in_budget(int budget, double hourly_rate, double discount) {
    int one_day_budget = monthly_rate(hourly_rate, discount) / BILLABLE_DAYS;
    return std::round(budget / one_day_budget);
}