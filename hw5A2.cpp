#include <iostream>
#include <string>

using namespace std;

int daysToFund(int startBalance, int dailyDeposit) {
    int balance = startBalance;
    int days = 0;
    int goal = 42500;
    
    while (balance < goal) {
        days++;
        balance += dailyDeposit;
        cout << "Day " << days << ": deposited " << dailyDeposit 
             << ", balance now " << balance << endl;
    }
    
    return days;
}

int main() {
    int startBalance;
    int dailyDeposit;

    cout << "Enter the starting Vault balance: ";
    cin >> startBalance;
    
    cout << "Enter the daily deposit amount: ";
    cin >> dailyDeposit;

    cout << "--- Vault Savings Plan ---" << endl;

    int daysNeeded = daysToFund(startBalance, dailyDeposit);

    cout << "The Vault was funded in " << daysNeeded << " days!" << endl;

    return 0;
}