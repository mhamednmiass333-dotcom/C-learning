# Recursive Count Up in C

This project demonstrates a simple recursive function in C that prints numbers from 1 up to a user-provided number, following the completion of the recursion ("Done!").

## 📄 Description

- The program prompts the user to enter a number.
- It uses a recursive function `print(int n)` to count up from 1 to `n`.
- When the recursion reaches 0, it prints "Done!", then as the stack unwinds, it prints the numbers in ascending order.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o countup countup.c
   ```

2. **Run the executable:**
   ```sh
   ./countup
   ```

3. **Follow the prompt:**
   ```
   Enter number : 5
   Done! 
   1 2 3 4 5 
   ```

## 💡 How It Works

- The `print` function checks if `n == 0`. If so, it prints "Done!" and returns, marking the base case.
- Otherwise, it recursively calls itself with `n - 1`, unwinding the stack and printing each value of `n` after the recursive call returns.
- This results in numbers being printed in ascending order, after "Done!".

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
