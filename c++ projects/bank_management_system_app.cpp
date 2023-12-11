// creating bank management nsystem using OOP concepts


#include <iostream>
#include <string>

class BankAccount
{
private:                      // define BankAccount as a private class of variable names-- name and balance
  std::string name;
  double balance;

public:                      // public methods are deposit, withdraw and display
  BankAccount(std::string accountName, double initialBalance)
      : name(accountName), balance(initialBalance) {}

  void deposit(double amount)
  {
      if (amount > 0)
      {
          balance += amount;
      }
  }

  void withdraw(double amount)
  {
      if (amount <= balance)
      {
          balance -= amount;
      }
      else
      {
          std::cout << "Insufficient funds." << std::endl;
      }
  }

  void display()
  {
      std::cout << "Account: " << name << "\nBalance: $" << balance << std::endl;
  }
};

int main()                     //main function to create a bank account with an initial deposit
{
  std::string name;
  double initialDeposit;

  std::cout << "Enter your name: ";
  getline(std::cin, name);
  std::cout << "Enter initial deposit: ";
  std::cin >> initialDeposit;

  BankAccount account(name, initialDeposit);

  int choice;
  double amount;

  do
  {
      std::cout << "\n1. Deposit" << std::endl;
      std::cout << "2. Withdraw" << std::endl;
      std::cout << "3. Display Account" << std::endl;
      std::cout << "4. Exit" << std::endl;
      std::cout << "Enter choice: ";
      std::cin >> choice;

      switch (choice)           // choices of bank operations like deposit, withdrawal and display
      {
      case 1:
          std::cout << "Enter deposit amount: ";
          std::cin >> amount;
          account.deposit(amount);
          break;
      case 2:
          std::cout << "Enter withdrawal amount: ";
          std::cin >> amount;
          account.withdraw(amount);
          break;
      case 3:
          account.display();
          break;
      case 4:
          break;
      default:
          std::cout << "Invalid choice." << std::endl;
      }
  } while (choice != 4);

  return 0;
}