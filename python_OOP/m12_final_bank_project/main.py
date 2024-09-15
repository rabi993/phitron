from bank import Bank
from user import User
from admin import Admin

def user_menu(user, account):
    while True:
        print("\nUser Menu:")
        print("1. Deposit")
        print("2. Withdraw")
        print("3. Check Balance")
        print("4. Transfer Money")
        print("5. Take Loan")
        print("6. Repay Loan")
        print("7. Check Transaction History")
        print("8. Exit")

        try:
            choice = input("Enter your choice: ")

            if choice == "1":
                amount = float(input("Enter amount to deposit: "))
                result = account.deposit(amount)
                print(result)

            elif choice == "2":
                amount = float(input("Enter amount to withdraw: "))
                result = account.withdraw(amount)
                print(result)

            elif choice == "3":
                print(f"Available balance: {account.balance}")

            elif choice == "4":
                target_account_number = int(input("Enter target account number: "))
                amount = float(input("Enter amount to transfer: "))
                target_account = user.bank.get_account(target_account_number)
                if target_account:
                    result = user.bank.transfer_money(account, target_account, amount)
                    print(result)
                else:
                    print("Account does not exist")

            elif choice == "5":
                loan_amount = float(input("Enter loan amount: "))
                result = account.take_loan(loan_amount, user.bank)
                print(result)

            elif choice == "6":
                print(f"Outstanding loan amount: {account.loan_amount}")
                amount = float(input("Enter amount to repay: "))
                result = account.repay_loan(amount, user.bank)
                print(result)

            elif choice == "7":
                history = account.get_transaction_history()
                if history:
                    print("\nTransaction History:")
                    for record in history:
                        print(record)
                else:
                    print("No transactions found")

            elif choice == "8":
                break

            else:
                print("Invalid choice, please try again.")
        
        except ValueError:
            print("Invalid input. Please enter a number.")
        except KeyboardInterrupt:
            print("\nProgram interrupted. Exiting...")
            break
        except Exception as e:
            print(f"An unexpected error occurred: {e}")


def admin_menu(admin):
    while True:
        print("\nAdmin Menu:")
        print("1. Create Account")
        print("2. Delete Account")
        print("3. View All Accounts")
        print("4. Check Total Bank Balance")
        print("5. Check Total Loan Amount")
        print("6. Toggle Loan Feature")
        print("7. Enable/Disable Account Transactions")
        print("8. Enable/Disable Account Loan Feature")
        print("9. View User Transaction History")
        print("10. Exit")

        try:
            choice = input("Enter your choice: ")

            if choice == "1":
                name = input("Enter name: ")
                email = input("Enter email: ")
                password = input("Enter password: ")
                address = input("Enter address: ")
                account_type = input("Enter account type (Savings/Current): ")
                print(admin.create_account(name, email, password, address, account_type))

            elif choice == "2":
                account_number = int(input("Enter account number to delete: "))
                print(admin.delete_account(account_number))

            elif choice == "3":
                accounts = admin.get_all_accounts()
                for account_number, account in accounts.items():
                    print(f"Account Number: {account_number}, Name: {account.name}, Account Type: {account.account_type}, Balance: {account.balance}")

            elif choice == "4":
                print(f"Total bank balance: {admin.check_total_balance()}")

            elif choice == "5":
                print(f"Total loan amount: {admin.check_total_loan_amount()}")

            elif choice == "6":
                status = input("Enable loan feature? (yes/no): ").lower() == 'yes'
                print(admin.toggle_loan_feature(status))

            elif choice == "7":
                try:
                    account_number = int(input("Enter account number: "))
                    action = input("Enable or disable transactions? (enable/disable): ").lower()
                    if action == "enable":
                        print(admin.enable_account_transactions(account_number))
                    elif action == "disable":
                        print(admin.disable_account_transactions(account_number))
                    else:
                        print("Invalid choice.")
                except ValueError:
                    print("Invalid input. Please enter a valid account number.")

            elif choice == "8":
                try:
                    account_number = int(input("Enter account number: "))
                    action = input("Enable or disable loan feature? (enable/disable): ").lower()
                    if action == "enable":
                        print(admin.enable_account_loan(account_number))
                    elif action == "disable":
                        print(admin.disable_account_loan(account_number))
                    else:
                        print("Invalid choice.")
                except ValueError:
                    print("Invalid input. Please enter a valid account number.")

            elif choice == "9":
                try:
                    account_number = int(input("Enter account number to view transaction history: "))
                    print(admin.show_user_transaction_history(account_number))
                except ValueError:
                    print("Invalid input. Please enter a valid account number.")

            elif choice == "10":
                break

            else:
                print("Invalid choice, please try again.")
        
        except KeyboardInterrupt:
            print("\nProgram interrupted. Exiting...")
            break
        except Exception as e:
            print(f"An unexpected error occurred: {e}")



if __name__ == "__main__":
    bank = Bank()
    user = User(bank)
    admin = Admin(bank)

    while True:
        print("\nMain Menu:")
        print("1. User Sign Up")
        print("2. User Login")
        print("3. Admin Login")
        print("4. Exit")

        main_choice = input("Enter your choice: ")

        if main_choice == "1":
            name = input("Enter your name: ")
            email = input("Enter your email: ")
            password = input("Enter your password: ")
            address = input("Enter your address: ")
            account_type = input("Enter account type (Savings/Current): ")
            print(user.create_account(name, email, password, address, account_type))

        elif main_choice == "2":
            name = input("Enter your name: ")
            password = input("Enter your password: ")
            account_number = int(input("Enter your account number: "))
            account = user.login(name, password, account_number)
            if isinstance(account, str):
                print(account)
            else:
                user_menu(user, account)
        elif main_choice == "3":
            admin_name = input("Enter admin name: ")
            admin_password = input("Enter admin password: ")
            if admin.login(admin_name, admin_password):
                admin_menu(admin)
            else:
                print("Invalid admin credentials!")

        elif main_choice == "4":
            print("Exiting system...")
            break

        else:
            print("Invalid choice, please try again.")

       
