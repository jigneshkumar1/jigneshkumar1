import datetime
# import datetime  for use current date&time
td = datetime.datetime.now()
#display bank role menu
def display_menu():
    menu = """
                                 WELCOME TO BANK MANAGEMENT SYSTEM
                                 
                                 Select your role

                                    1) Banker
                                    2) Customer
                                    3) Exit
    """
    print(menu)
    return int(input("Choose your role: "))

#display banker operation menu 
def banker_operations_menu():
    operations_menu = """
     Welcome to Banker's App
                        
                           Operations Menu

                           1) Add Customer
                           2) View Customer
                           3) Search Customer
                           4) View All Customers
                           5) Total Amounts in Bank
                           6) Exit
    """
    print(operations_menu)
    return int(input("Enter operation you want to perform: "))

# add a customer
def add_customer(customer_info):
    acount_number = int(input("Enter account number: "))
    customer_name = input("Enter customer name: ")
    opening_balance = int(input("Enter opening balance: "))
    # Add customer in dictionary
    customer_info[acount_number] = {
        "name": customer_name,
        "balance": opening_balance,
        "opening date": td.strftime("%c")
    }
    print(f"Customer {customer_name} added successfully.")
    return customer_info

# view customer
def view_customer(customer_info):
    print(customer_info)
    
# search customer by account number
def search_customer(customer_info):
    search_account = int(input("Enter account number to find customer: "))
    if search_account in customer_info:
        print(customer_info[search_account])
    else:
        print("Customer not found.")

# view all customers
def view_all_customers(customer_info):
    print(customer_info)

#total amount in the bank
def total_amount_in_bank(customer_info):
    total_amount = sum(details['balance'] for details in customer_info.values())
    print(f"Total Amount in Bank: {total_amount}")

#  customer operations
def customer_operations(customer_info):
    customer_menu = """
                    Operation Menu

                    1) Withdraw Amount
                    2) Deposit Amount
                    3) View Balance
    """
    print(customer_menu)
    status = True
    while status:
        choose_customer_menu = int(input("Enter operation you want to perform: "))
        if choose_customer_menu == 1:
            account_number = int(input("Enter account number: "))
            if account_number in customer_info:
                withdraw_amount = int(input("Enter amount to withdraw: "))
                if withdraw_amount <= customer_info[account_number]['balance']:
                    customer_info[account_number]['balance'] -= withdraw_amount
                    print(f"Withdrawal successful! New balance: {customer_info[account_number]['balance']}")
                else:
                    print("Insufficient balance!")
            else:
                print("Account not found")
        elif choose_customer_menu == 2:
            account_number = int(input("Enter account number: "))
            if account_number in customer_info:
                deposit_amount = int(input("Enter amount to deposit: "))
                customer_info[account_number]['balance'] += deposit_amount
                print(f"Deposit successful! New balance: {customer_info[account_number]['balance']}")
            else:
                print("Account not found")
        elif choose_customer_menu == 3:
            account_number = int(input("Enter account number: "))
            if account_number in customer_info:
                print(f"Your balance is: {customer_info[account_number]['balance']}")
            else:
                print("Account not found")
        else:
            print("Invalid choice!")
             #if user wants to continue with customer operations
        continue_choice = input("Do you want to perform more operations? Press 'y' for yes and 'n' for no: ").lower()
        if continue_choice == 'n':
            status = False
# Main function 
def main():
    customer_info = {}  # Store customer details
    status = True

    while status:
        role_choice = display_menu()
        
        if role_choice == 1:  # Banker role
            banker_status = True
            while banker_status:
                operation_choice = banker_operations_menu()

                if operation_choice == 1:  # Add Customer
                    customer_info = add_customer(customer_info)
                elif operation_choice == 2:  # View Customer
                    view_customer(customer_info)
                elif operation_choice == 3:  # Search Customer
                    search_customer(customer_info)
                elif operation_choice == 4:  # View All Customers
                    view_all_customers(customer_info)
                elif operation_choice == 5:  # Total Amounts in Bank
                    total_amount_in_bank(customer_info)
                elif operation_choice == 6:  # Exit
                    banker_status = False
                else:
                    print("Invalid operation")

                # Ask if banker wants to continue
                continue_choice = input("Do you want to perform more operations? Press 'y' for yes and 'n' for no: ").lower()
                if continue_choice == 'n':
                    banker_status = False

        elif role_choice == 2:  # Customer role
            customer_operations(customer_info)
        elif role_choice == 3:  # Exit
            print("Thank You 👍")
            status = False
        else:
            print("Invalid role selection")

if __name__ == "__main__":
    main()


