# Sum of a Series of Integers in C

This project demonstrates how to sum a series of integers entered by the user, terminating input when 0 is entered.

## 📄 Description

- The program prompts the user to enter a series of integers.
- Input continues until the user enters 0, which acts as the termination signal.
- The program keeps a running sum of all entered integers (excluding the terminating 0).
- The final sum is printed at the end.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o sum_series sum_series.c
   ```

2. **Run the executable:**
   ```sh
   ./sum_series
   ```

3. **Example interaction:**
   ```
   This program sums a series of integers.
   Enter integers(0 to terminate) : 5 10 -3 0
   The sum is : 12
   ```

## 💡 How It Works

- The program initializes `sum` to 0.
- It reads the first integer from the user.
- While the entered integer is not 0, it adds the value to `sum` and reads the next integer.
- Once 0 is entered, it exits the loop and prints the total sum.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
