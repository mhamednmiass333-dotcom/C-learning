# Reverse a Number in C

This program takes an integer input from the user and prints its reversal (the digits in reverse order).

## 📄 Description

- The program prompts the user to enter an integer.
- It then reverses the digits of the number using arithmetic operations (no string manipulation).
- The reversed number is printed as output.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o reverse_number reverse_number.c
   ```

2. **Run the executable:**
   ```sh
   ./reverse_number
   ```

3. **Example interaction:**
   ```
   Enter the number : 12345
   The reversal : 54321
   ```

## 💡 How It Works

- The program uses a `do-while` loop to extract the last digit from the number using the modulo operator (`% 10`).
- This digit is appended to the `reverse` variable, which is multiplied by 10 each time to shift its digits to the left.
- The input number is divided by 10 each iteration, removing the last digit.
- The process continues until the number becomes zero.

## ⚠️ Notes

- The program does not handle negative numbers specifically; negative signs will be lost in the reversal.
- If you enter a number ending with zeros (e.g., 1200), the reversal will not have leading zeros (e.g., 21).

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
