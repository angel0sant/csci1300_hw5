#include <iostream>
#include <string>

using namespace std;

int totalGold(int donations[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += donations[i];
    }
    return sum;
}

int main() {
    int numDonations;
    
    cout << "Enter the number of gold donations: ";
    cin >> numDonations;

    int donations[100]; 

    for (int i = 0; i < numDonations; i++) {
        cout << "Enter gold donation " << (i + 1) << ": ";
        cin >> donations[i];
    }

    int total = totalGold(donations, numDonations);
    int vaultGoal = 42500;

    cout << "--- Vault Funding ---" << endl;
    cout << "Total gold donated: " << total << endl;
    cout << "Vault goal: " << vaultGoal << endl;

    if (total >= vaultGoal) {
        cout << "The Vault is fully funded! Surplus: " << (total - vaultGoal) << " gold" << endl;
    } else {
        cout << "The Vault still needs " << (vaultGoal - total) << " more gold." << endl;
    }

    return 0;
}