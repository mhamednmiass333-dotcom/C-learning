# ACME Checkbook-Balancing Program in C

This program simulates a simple checkbook-balancing tool, allowing the user to clear the balance, credit funds, debit funds, check the current balance, or exit the program using a menu-driven interface.

## 📄 Description

- The program is menu-driven, accepting commands from the user to:
  - **Clear** the balance (set it to 0).
  - **Credit** (add money) to the balance.
  - **Debit** (subtract money) from the balance.
  - **Show** the current balance.
  - **Exit** the program.
- The main logic is implemented using an infinite `for` loop and a `switch` statement to process commands.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o checkbook checkbook.c
   ```

2. **Run the executable:**
   ```sh
   ./checkbook
   ```

3. **Example interaction:**
   ```
   *** ACME checkbook-balancing program ***
   Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit
   Enter command : 1
   Enter amount of credit : 100
   Enter command : 2
   Enter amount of debit : 30
   Enter command : 3
   Current balance : 70
   Enter command : 4
   ```

## 💡 How It Works

- Uses a `for(;;)` loop for continuous input until the user selects exit (`4`).
- `switch(command)` is used to process user commands.
- For **credit**, the entered value is added to `balance`.
- For **debit**, the entered value is subtracted from `balance`.
- **Clear** sets `balance` to `0`.
- **Balance** prints the current balance.
- For any **invalid command**, it prints "Invalide command".

## ⚠️ Notes

- Variable `debit` is initialized to `0` but its value is always overwritten when a debit is performed.
- The program does not prevent the balance from going negative.
- The output for "Invalid command" is spelled as "Invalide command" in the code.
- The code does not validate for non-numeric input.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
