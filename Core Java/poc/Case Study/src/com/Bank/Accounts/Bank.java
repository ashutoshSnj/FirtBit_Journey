package com.Bank.Accounts;

import java.util.Scanner;

public class Bank {
	
	
     Account[] accounts = new Account[50];
     int accountCount = 0;
     Scanner scanner = new Scanner(System.in);

    public void menu() throws wrongno {
        while (true) {
            System.out.println("--- Bank Menu ---");
            System.out.println("1. Over the counter activities");
            System.out.println("2. Account lifecycle");
            System.out.println("3. Interest Calculation");
            System.out.println("4. End of day report for daily transactions");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    overTheCounterActivities();
                    break;
                case 2:
                    accountLifecycle();
                    break;
                case 3:
                    interestCalculation();
                    break;
                case 4:
                    endOfDayReport();
                    break;
                case 5:
                 throw new wrongno("no out of bound");
                
            }
        }
    }

    // Over the counter activities: create, update, delete, search
    public  void overTheCounterActivities() {
        System.out.println("1. Create Account");
        System.out.println("2. Delete Account");
        System.out.println("3. Search Account");
        System.out.println("Enter your choice: ");
        int choice = scanner.nextInt();
        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deleteAccount();
                break;
            case 3:
                searchAccount();
                break;
            default:
                System.out.println("Invalid choice.");
        }
    }

    public void createAccount() {
  System.out.println("Enter Account Type ");
  System.out.println("1. Savings, 2. Salary, 3. Current, 4. Loan");
        int accountType = scanner.nextInt();

        System.out.print("Enter Account Number: ");
        int accountNumber = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        System.out.print("Enter Account Holder Name: ");
        String accountHolderName = scanner.nextLine();

        System.out.print("Enter Initial Balance: ");
        double balance = scanner.nextDouble();

       Account account = null;
        switch (accountType) {
            case 1:
account = new Saving_Account(accountNumber, accountHolderName, balance);
                break;
            case 2:
account = new Salary_Accounts(accountNumber, accountHolderName, balance);
                break;
            case 3:
                System.out.print("Enter Overdraft Limit: ");
                double overdraftLimit = scanner.nextDouble();
account = new Current_Account(accountNumber, accountHolderName, balance, overdraftLimit);
                break;
            case 4:
                System.out.print("Enter Loan Amount: ");
                double loanAmount = scanner.nextDouble();
                account = new Loan_Account(accountNumber, accountHolderName,balance,loanAmount);
                break;
            default:
                System.out.println("Invalid account type.");
                return;
        }

        if (account != null) {
            accounts[accountCount++] = account;
            System.out.println("Account created successfully.");
        }
    }

    public void deleteAccount() {
        System.out.print("Enter Account Number to delete: ");
        int accountNumber = scanner.nextInt();
        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAccount_no() == accountNumber) {
                accounts[i] = accounts[accountCount - 1];
                accounts[accountCount - 1] = null;
                accountCount--;
                System.out.println("Account deleted successfully.");
                return;
            }
        }
        System.out.println("Account not found.");
    }

    public void searchAccount() {
        System.out.print("Enter Account Number to search: ");
        int accountNumber = scanner.nextInt();
        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAccount_no() == accountNumber) {
                accounts[i].display_details();
                return;
            }
        }
        System.out.println("Account not found.");
    }

   // Account lifecycle: transactions history (this part is assumed to be simple for now)
   // Account lifecycle: transactions history, transaction management (deposit/withdrawal), and balance tracking
   public void accountLifecycle() {
    System.out.println("1. View Transaction History");
    System.out.println("2. Add Transaction (Deposit/Withdraw)");
    System.out.println("3. View Balance");
    System.out.print("Enter your choice: ");
    int choice = scanner.nextInt();

    switch (choice) {
        case 1:
            viewTransactionHistory();
            break;
        case 2:
            addTransaction();
            break;
        case 3:
            viewBalance();
            break;
        default:
            System.out.println("Invalid choice.");
    }
}

// View transaction history (This assumes transactions are stored or logged in a simple manner)
   public void viewTransactionHistory() {
    System.out.print("Enter Account Number to view transaction history: ");
    int accountNumber = scanner.nextInt();

    Account account = findAccount(accountNumber);
    if (account != null) {
        System.out.println("Transaction history for Account: " + accountNumber);
        // Simulate a simple transaction history display (this can be replaced with actual transaction records)
        System.out.println("No transactions logged yet.");
    } else {
        System.out.println("Account not found.");
    }
}

// Add a transaction (Deposit or Withdraw)
   public void addTransaction() {
    System.out.print("Enter Account Number for transaction: ");
    int accountNumber = scanner.nextInt();
    Account account = findAccount(accountNumber);

    if (account != null) {
        System.out.println("Choose Transaction Type:");
        System.out.println("1. Deposit");
        System.out.println("2. Withdraw");
        System.out.print("Enter your choice: ");
        int transactionType = scanner.nextInt();

        System.out.print("Enter Transaction Amount: ");
        double amount = scanner.nextDouble();

        if (transactionType == 1) {
            account.diposit(amount);  // Deposit
        } else if (transactionType == 2) {
            account.withdrow(amount);  // Withdraw
        } else {
            System.out.println("Invalid transaction type.");
        }
    } else {
        System.out.println("Account not found.");
    }
}

// View account balance
   public void viewBalance() {
    System.out.print("Enter Account Number to view balance: ");
    int accountNumber = scanner.nextInt();

    Account account = findAccount(accountNumber);
    if (account != null) {
        account.Display_balance();  // Display the balance
    } else {
        System.out.println("Account not found.");
    }
}
    // Interest calculation
    public void interestCalculation() {
        System.out.print("Enter Account Number: ");
        int accountNumber = scanner.nextInt();

        Account account = findAccount(accountNumber);
        if (account != null) {
            account.calculateInterest();
        } else {
            System.out.println("Account not found.");
        }
    }

    // End of day report (simulated simple transaction report)-
    public void endOfDayReport() {
        System.out.println("End of Day Report: Transactions Summary");
        for (int i = 0; i < accountCount; i++) {
            accounts[i].display_details();
        }
    }

    public Account findAccount(int accountNumber) {
        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAccount_no() == accountNumber) {
                return accounts[i];
            }
        }
        return null;
    }
}
