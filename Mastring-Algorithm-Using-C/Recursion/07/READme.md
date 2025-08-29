# Recursive GCD (Greatest Common Divisor) in C

This project demonstrates how to compute the Greatest Common Divisor (GCD) of two numbers using recursion in C, implementing the Euclidean algorithm.

## 📄 Description

- The program prompts the user to enter two numbers.
- If the first number is less than the second, their values are swapped to ensure the larger number is the first argument.
- The recursive function `GCD(int a, int b)` computes the GCD by repeatedly applying the Euclidean algorithm:  
  - If `b` is 0, the GCD is `a`.
  - Otherwise, recursively call `GCD(b, a % b)`.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o gcd gcd.c
   ```

2. **Run the executable:**
   ```sh
   ./gcd
   ```

3. **Example interaction:**
   ```
   Enter the 2 numbers : 24 36
   The GCD is 12
   ```

## 💡 How It Works

- **Base case:** If the second number (`b`) is 0, the GCD is the first number (`a`).
- **Recursive case:** Call the function again with the second number and the remainder of the first number divided by the second (`GCD(b, a % b)`).

This is a classic and efficient method to find the GCD, known as the Euclidean algorithm.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
