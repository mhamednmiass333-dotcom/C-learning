# Greatest Common Divisor (GCD) Using Iteration in C

This program computes the Greatest Common Divisor (GCD) of two integers using the iterative form of the Euclidean algorithm.

## 📄 Description

- The user is prompted to enter two integers.
- If the first number is less than the second, their values are swapped so the larger number comes first.
- The program then repeatedly applies the Euclidean algorithm using a `while` loop:
  - Replace the larger number with the smaller.
  - Replace the smaller number with the remainder of dividing the larger by the smaller.
- When the remainder becomes zero, the current value of the larger number is the GCD.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o gcd_iterative gcd_iterative.c
   ```

2. **Run the executable:**
   ```sh
   ./gcd_iterative
   ```

3. **Example interaction:**
   ```
   Enter two integers : 24 36
   Greatest common divisor : 12
   ```

## 💡 How It Works

- Before applying the algorithm, the code swaps the numbers if needed to ensure `num1 >= num2`.
- The `while(num2)` loop continues until `num2` becomes zero.
- At each iteration, the current values are updated:  
  - `num1` takes the value of `num2`.
  - `num2` becomes the remainder of the previous `num1` divided by `num2`.
- The GCD is printed once the loop ends.

## ⚠️ Notes

- The program assumes both numbers are positive integers.
- This is an efficient and classic algorithm for finding the GCD.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
