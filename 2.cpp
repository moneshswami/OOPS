#include <iostream>
#include <cstring>
using namespace std;

class bank {
    int acno;
    char nm[100];
    char acctype[100];
    float bal;

public:
    bank(int acc_no, char *name, char *acc_type, float balance) {
        acno = acc_no;
        strcpy(nm, name);
        strcpy(acctype, acc_type);
        bal = balance;
    }

    void deposit();   // Function prototypes
    void withdraw();
    void display();
};

void bank::deposit() {
    int damt1;
    cout << "\n Enter Deposit Amount = ";
    cin >> damt1;
    bal += damt1;
}

void bank::withdraw() {
    int wamt1;
    cout << "\n Enter Withdraw Amount = ";
    cin >> wamt1;
    if (wamt1 > bal)
        cout << "\n Cannot Withdraw Amount";
    else
        bal -= wamt1;
}

void bank::display() {
    cout << "\n ----------------------";
    cout << "\n Account No. : " << acno;
    cout << "\n Name : " << nm;
    cout << "\n Account Type : " << acctype;
    cout << "\n Balance : " << bal;
}

int main() {
    int acc_no;
    char name[100], acc_type[100];
    float balance;

    cout << "\n Enter Details: \n";
    cout << "-----------------------\n";

    cout << "\n Account No. ";
    cin >> acc_no;

    cout << "\n Name : ";
    cin >> name;

    cout << "\n Account Type : ";
    cin >> acc_type;

    cout << "\n Balance : ";
    cin >> balance;

    bank b1(acc_no, name, acc_type, balance); // Object is created
    b1.deposit(); //
    b1.withdraw(); // Calling member functions
    b1.display(); //

    return 0;
}
