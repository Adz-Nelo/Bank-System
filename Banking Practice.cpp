#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

//function declaration
void showBalance(double balance);
double depositBalance(double balance);
double withdrawBalance(double balance);
std:: string exitProgram();

int main() {

    //declaring variables
    double balance = 0.00;
    int option;

    do {
        std:: cout << "\n=======Banking 🏦 System=======" << std:: endl;
        std:: cout << "1.) Balance " << std:: endl;
        std:: cout << "2.) Deposit " << std:: endl;
        std:: cout << "3.) Withdraw " << std:: endl;
        std:: cout << "4.) Exit " << std:: endl;
        std:: cout << "===============================\n" << std:: endl;
        
        //input method
        std:: cout << "Choose an option: ";
        std:: cin >> option;

        if(option == 1) {
            showBalance(balance);
        }

        else if(option == 2) {
            balance = depositBalance(balance);
            showBalance(balance);            
        }

        else if(option == 3) {
            balance = withdrawBalance(balance);
            showBalance(balance);
        }

        else if(option == 4) {
            exitProgram();
        }

        else {
            std:: cout << "\nI don't know what you are talking about please enter only with the given options" << std:: endl;
        }
    } while(option != 4);

    return 0;
}

void showBalance(double balance) {
    std:: cout << "\nBalance: ₱" << std:: setprecision(2) << std:: fixed << balance << std:: endl;
}
double depositBalance(double balance) {
    //declaring local variable
    double deposit;
    
    //input method
    std:: cout << "\nEnter amount to deposit: ";
    std:: cin >> deposit;

    if(deposit < 0) {
        std:: cout << "\nAmount should not be negative 🚫" << std:: endl;
    }

    else if(deposit > 0) {
        balance = balance + deposit;
        std:: cout << "\nAmount deposit success! ✅" << std:: endl;
    }

    else {
        std:: cout << "I don't know what are you talking about" << std:: endl;
    }

    return balance;
}
double withdrawBalance(double balance) {
    //declaring variable
    double withdraw;

    //input method
    std:: cout << "\nEnter amount to withdraw: ";
    std:: cin >> withdraw;

    if(withdraw < balance) {
        balance = balance - withdraw;
        std:: cout << "\nAmount withdraw success! 💵" << std:: endl;
        showBalance(balance);
    }

    else if(withdraw > balance) {
        std:: cout << "\nOpps! you have reached your limit! ❌" << std:: endl;
    }

    else if(withdraw < 0) {
        std:: cout << "\nAmount should not be negative! ❌" << std:: endl;
    }

    else {
        std:: cout << "\nAmount should be numerical value 😤" << std:: endl;
    }

    return balance;
}
std:: string exitProgram() {
    std:: cout << "\nThank you! come again next time 😃\n" << std:: endl;
    exit(0);
}