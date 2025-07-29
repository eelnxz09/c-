#include <iostream>
using namespace std;

class Account {
public:
    int accNo;
    float balance;

    void getData() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void giveInterest() {
        if (balance >= 5000) {
            balance = balance + (balance * 0.10);  // Add 10% interest
        }
    }

    void displayData() {
        if (balance >= 5000) {
            cout << "Account No: " << accNo << ", Updated Balance: " << balance << endl;
        }
    }
};

int main() {
    Account accounts[10];

   
    for (int i = 0; i < 10; i++) {
        cout << "\nEnter details for Account " << i + 1 << ":\n";
        accounts[i].getData();
    }

    cout << "\nAccounts with balance >= 5000 after 10% interest:\n";
    for (int i = 0; i < 10; i++) {
        accounts[i].giveInterest();
        accounts[i].displayData();
    }

    return 0;
}
