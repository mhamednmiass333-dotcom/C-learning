# Find the Largest Number Entered (Floating-Point) in C

This program allows the user to enter a sequence of floating-point numbers and determines the largest number entered. The process stops when the user enters `0`.

## 📄 Description

- The program repeatedly prompts the user to enter a floating-point number.
- Each number is compared to the current maximum.
- If the entered number is larger than the current maximum, it becomes the new maximum.
- Entering `0` ends the input and displays the largest number entered.
- The initial maximum is set to `INT_MIN` (the most negative integer), but since the program works with floats, the more appropriate initial value is `-FLT_MAX` (from `<float.h>`). However, `INT_MIN` works in practice for most common float values.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o find_largest find_largest.c
   ```

2. **Run the executable:**
   ```sh
   ./find_largest
   ```

3. **Example interaction:**
   ```
   Enter a number : 2.5
   Enter a number : 9.1
   Enter a number : 4.6
   Enter a number : 0
   The largest number entered was 9.1
   ```

## 💡 How It Works

- The program uses an infinite loop (`for(;;)`) to collect numbers from the user.
- For each number, it checks if it is greater than the current maximum (`max`); if so, it updates `max`.
- The loop exits if the user enters `0`.
- Finally, the program prints the largest number entered (ignoring the terminating zero).

## ⚠️ Notes

- If you wish to handle all floating-point inputs correctly, replace `max = INT_MIN;` with `max = -FLT_MAX;` and include `#include <float.h>`.
- If no numbers are entered before 0, `max` will remain at its initial value and may not be meaningful.
- The program does not handle non-numeric input (e.g., letters).
- The input is terminated by the user entering exactly `0`, which is not counted as a candidate for the maximum.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
