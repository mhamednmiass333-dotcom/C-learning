# Recursive Digit Counter in C

This project demonstrates how to count the number of digits in an integer using recursion in C.

## 📄 Description

- The program prompts the user to enter an integer.
- It uses a recursive function `count_digit(int num)` to determine how many digits the input number contains.
- The function handles negative numbers by converting them to positive before counting.
- The result is printed to the user.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o count_digits count_digits.c
   ```

2. **Run the executable:**
   ```sh
   ./count_digits
   ```

3. **Example interaction:**
   ```
   Enter number : -2058
   Number of digit(s) : 4
   ```

## 💡 How It Works

- The `count_digit` function first checks if the number is negative; if so, it recurses with its positive value.
- If the number is a single digit (`num / 10 == 0`), it returns 1 (the base case).
- Otherwise, it returns 1 plus the result of a recursive call with `num / 10`, effectively counting one digit per recursion.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
