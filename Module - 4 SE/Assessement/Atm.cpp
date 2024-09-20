#include <iostream>
#include <ctime>

using namespace std;

class ATM {
private:
    int pin;
    double accountBalance;

public:
   
    ATM() : pin(12345), accountBalance(20000.0) {}

   
    void displayWelcomeScreen() {
        time_t now = time(0);
        tm* localtm = localtime(&now);
        cout << "Welcome to the ATM Banking Application" << endl;
        cout << "Current Date and Time: " << asctime(localtm) << endl;
    }

    // display the menu
    void displayMenu() {
        cout << "ATM Menu:" << endl;
        cout << "1. Enter PIN" << endl;
        cout << "2. Help" << endl;
        cout << "3. Exit" << endl;
    }

    //  PIN
    bool validatePIN(int enteredPIN) {
        return (enteredPIN == pin);
    }

   
    void displayHelp() {
        cout << "Help Screen:" << endl;
        cout << "1. Enter PIN to access your account." << endl;
        cout << "2. After entering a valid PIN, you can choose to deposit, withdraw, or check balance." << endl;
        cout << "3. Follow the prompts to perform the desired operations." << endl;
    }

    // Function to handle deposit
    void deposit() {
        double depositAmount;
        cout << "Enter amount to deposit: ";
        cin >> depositAmount;
        accountBalance += depositAmount;
        cout << "Deposit successful!" << endl;
        cout << "Current Balance: Rs. " << accountBalance << endl;
    }

    // Function to handle withdrawal
    void withdraw() {
        double withdrawalAmount;
        cout << "Enter amount to withdraw: ";
        cin >> withdrawalAmount;
        if (withdrawalAmount > accountBalance) {
            cout << "Insufficient balance for withdrawal." << endl;
        } else {
            accountBalance -= withdrawalAmount;
            cout << "Withdrawal successful!" << endl;
            cout << "Current Balance: Rs. " << accountBalance << endl;
        }
    }

    // Function to check balance
    void checkBalance() {
        cout << "Current Balance: Rs. " << accountBalance << endl;
    }

    // Function to handle the ATM operations
    void operateATM() {
        int choice;
        int enteredPIN;

        while (true) {
            displayMenu();
            cout << "Select an option: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter your PIN: ";
                    cin >> enteredPIN;
                    if (validatePIN(enteredPIN)) {
                        while (true) {
                            cout << "\nATM Operations Menu:" << endl;
                            cout << "1. Deposit" << endl;
                            cout << "2. Withdraw" << endl;
                            cout << "3. Check Balance" << endl;
                            cout << "4. Exit" << endl;
                            cout << "Select an option: ";
                            cin >> choice;

                            switch (choice) {
                                case 1:
                                    deposit();
                                    break;
                                case 2:
                                    withdraw();
                                    break;
                                case 3:
                                    checkBalance();
                                    break;
                                case 4:
                                    cout << "Exiting... Thank you for using the ATM." << endl;
                                    return; 
                                default:
                                    cout << "Invalid choice, please try again." << endl;
                            }
                        }
                    } else {
                        cout << "Incorrect PIN. Exiting the ATM." << endl;
                        return;
                    }
                    break;
                case 2:
                    displayHelp();
                    break;
                case 3:
                    cout << "Exiting... Thank you for using the ATM." << endl;
                    return; 
                default:
                    cout << "Invalid choice, please try again." << endl;
            }
        }
    }
};

int main() {
    ATM atm;
    atm.displayWelcomeScreen();
    atm.operateATM();
    return 0;
}

