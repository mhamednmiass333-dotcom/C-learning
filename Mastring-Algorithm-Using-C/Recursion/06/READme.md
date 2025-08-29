# Recursive Number Reversal in C

This project demonstrates how to print the digits of a number in reverse order using recursion in C.

## 📄 Description

- The program prompts the user to enter a number.
- It uses a recursive function `reverse(int num)` to print each digit of the number in reverse order, one at a time.
- The function extracts and prints the last digit of the number, then recursively calls itself with the number divided by 10 (removing the last digit).
- The recursion stops when `num` is less than or equal to 0.

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
   Enter a number : 1234
   4321
   ```

## 💡 How It Works

- The `reverse` function prints the last digit of the current number (`num % 10`).
- It then calls itself with the number divided by 10 (`num / 10`), effectively removing the last digit.
- The recursion continues until `num` is less than or equal to 0, at which point the function returns and the process stops.

**Note:**  
This implementation prints the reversed digits directly to the output. It does not construct a new reversed integer in memory, but simply prints each digit as the recursion unwinds.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
