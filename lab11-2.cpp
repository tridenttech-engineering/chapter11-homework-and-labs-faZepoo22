
//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getPayment(double principal, double rate, int months) {
    return rate == 0 ? principal / months : principal * rate / (1 - pow(1 + rate, -months));
}

int main() {
    double price, rebate, creditRate, dealerRate;
    int years;
    cout << "Car price: "; cin >> price;
    cout << "Rebate: "; cin >> rebate;
    cout << "Credit union rate (%): "; cin >> creditRate;
    cout << "Dealer rate (%): "; cin >> dealerRate;
    cout << "Term (years): "; cin >> years;

    int months = years * 12;
    double credit = getPayment(price - rebate, creditRate / 1200, months);
    double dealer = getPayment(price, dealerRate / 1200, months);

    cout << fixed << setprecision(2);
    cout << "\nCredit union payment: $" << credit << endl;
    cout << "Dealer payment: $" << dealer << endl;
    
    return 0;
}
