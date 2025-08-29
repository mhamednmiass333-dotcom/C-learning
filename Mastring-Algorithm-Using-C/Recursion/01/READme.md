# Recursive Countdown in C

This project demonstrates a simple recursive function in C that prints a countdown from a user-provided number down to 1, and then prints "Done!" when finished.

## 📄 Description

- The program prompts the user to enter a number.
- It uses a recursive function `print(int n)` to print each number, decrementing by 1 on each call.
- When the countdown reaches 0 or less, it prints "Done!" and stops.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o countdown countdown.c
   ```

2. **Run the executable:**
   ```sh
   ./countdown
   ```

3. **Follow the prompt:**
   ```
   Enter number : 5
   5 4 3 2 1 Done!
   ```

## 💡 How It Works

- The `print` function checks if `n <= 0`. If so, it prints "Done!" and returns.
- Otherwise, it prints the current value of `n`, then recursively calls itself with `n - 1`.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
