double interest_rate(double balance) {
    double negative_rate{ 3.213 };
    double low_rate{ 0.5 };
    double mid_rate{ 1.621 };
    double high_rate{ 2.475 };
    int account_value_not{ 0 };
    int account_value_low{ 1000 };
    int account_value_mid{ 5000 };

    if (balance < account_value_not) {
        return negative_rate;
    }
    if (balance < account_value_low) {
        return low_rate;
    }
    if (balance < account_value_mid) {
        return mid_rate;
    }
    return high_rate;
}

double yearly_interest(double balance) {
    return balance * interest_rate(balance) * 0.01;
}

double annual_balance_update(double balance) {
    return balance + yearly_interest(balance);
}

int years_until_desired_balance(double balance, double target_balance) {
    int years = 0;
    while (balance < target_balance) {
        balance = annual_balance_update(balance);
        years++;
    }
    return years;
}