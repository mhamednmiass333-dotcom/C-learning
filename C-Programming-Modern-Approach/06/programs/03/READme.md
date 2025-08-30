# Digit Counter (Iterative) in C

This program demonstrates how to count the number of digits in a nonnegative integer using a loop in C.

## 📄 Description

- The program prompts the user to enter a nonnegative integer.
- It then counts how many digits are in the number by repeatedly dividing the number by 10 until it becomes 0.
- The result (number of digits) is displayed to the user.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o digit_counter digit_counter.c
   ```

2. **Run the executable:**
   ```sh
   ./digit_counter
   ```

3. **Example interaction:**
   ```
   Enter a nonnegative number : 20301
   The number has 5 digit(s)
   ```

## 💡 How It Works

- The program initializes a counter (`count`) to 0.
- It uses a `do-while` loop to increment the counter and divide the number by 10 each iteration.
- The loop continues until the number becomes 0.
- This method works for any nonnegative integer.

## ⚠️ Notes

- The program does not handle negative numbers or non-integer input (it expects the user to enter a nonnegative integer).
- For 0, the output will be "The number has 1 digit(s)", which is mathematically correct.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
