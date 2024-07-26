/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class BankAccount {
    static int OverallBalance;
    
    int IndividualBalance;

public:
    BankAccount(int InitialBalance) {
        OverallBalance = OverallBalance + InitialBalance;
        IndividualBalance = InitialBalance;
    }

    static double getOverallBalance() {
        return OverallBalance;
    }

    double getIndividualBalance() {
        return IndividualBalance;
    }
};

int BankAccount::OverallBalance = 0;

int main() {
   
   BankAccount account1(100);
   BankAccount account2(200);
   cout << BankAccount::getOverallBalance() << endl;
   cout << account1.getIndividualBalance() << endl;
   cout << account2.getIndividualBalance() << endl;

    return 0;
}