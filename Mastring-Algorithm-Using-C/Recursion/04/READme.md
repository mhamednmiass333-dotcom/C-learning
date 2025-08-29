# Recursive Squares Printer in C

This project demonstrates how to print the squares of numbers from 1 up to a user-provided number using recursion in C.

## 📄 Description

- The program prompts the user to enter a number.
- It uses a recursive function `print_squares(int num)` to print numbers from 1 up to `num`, along with their squares.
- The function makes use of a `static` variable to keep track of the current number across recursive calls.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o print_squares print_squares.c
   ```

2. **Run the executable:**
   ```sh
   ./print_squares
   ```

3. **Example interaction:**
   ```
   Enter a number  5
   Squares from 1 to 5 are 
            1         1
            2         4
            3         9
            4        16
            5        25
   ```

## 💡 How It Works

- The `print_squares` function uses a static integer `square` initialized to 1.
- On each recursive call, it prints the current value of `square` and its square.
- Then it increments `square` and calls itself with `num - 1`.
- The recursion stops when `num <= 0`.

**Note:**  
Using a `static` variable in recursion works for this simple demonstration, but is generally not recommended for more complex or reusable code, as it retains state across function calls and can lead to unexpected results if the function is called multiple times in a program.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
