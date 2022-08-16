#include <iostream>

using namespace std;

long float interest(int day, long float rate, long long int deposit) {
    return (rate / 100) * ((float)day / 365) * deposit;
}

int main()
{
    int day;
    long float rate;
    long long int deposit;
    string a;

    while (true){
        a = "";
        cout << "Enter the number of days in interest: ";
        cin >> day;
        cout << "Enter the yearly interest rate: ";
        cin >> rate;
        cout << "Enter the deposited money: ";
        cin >> deposit;
        long float payment = interest(day, rate, deposit);
        cout << "Amount of interest: " << payment;
        cout << "\nTotal money: " << deposit + payment << endl;
        cin >> a;
        if (a != "") {
            continue;
        }
        else {
            break;
        }
    }
    return 0;
}