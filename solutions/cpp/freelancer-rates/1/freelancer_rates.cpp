#include <cmath>

double daily_rate(double hourly_rate) {
    return hourly_rate * 8;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    return before_discount - ((before_discount * discount)/100);
}


int monthly_rate(double hourly_rate, double discount) {
    double rate = daily_rate(hourly_rate) * 22;
    return std::ceil(apply_discount(rate, discount));
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    return std::floor((budget / apply_discount(daily_rate(hourly_rate), discount)));
}
