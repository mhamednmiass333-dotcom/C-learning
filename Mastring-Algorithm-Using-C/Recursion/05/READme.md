# Recursive Integer Division in C

This project demonstrates how to perform integer division (finding the quotient) of two numbers using recursion in C, without using the division operator.

## 📄 Description

- The program prompts the user to enter a divisor and a divident (should be "dividend" in English, but matches your variable naming).
- It uses a recursive function `div(int divisor, int divident)` to repeatedly subtract the divisor from the dividend, counting how many times this can be done before the dividend becomes less than the divisor.
- The result is the integer quotient of the division.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o recursive_division recursive_division.c
   ```

2. **Run the executable:**
   ```sh
   ./recursive_division
   ```

3. **Example interaction:**
   ```
   Enter the divisor : 3
   Enter the divident : 10
   10/3 = 3
   ```

## 💡 How It Works

- The `div` function uses a static variable `divi` to count the number of subtractions (i.e., the quotient).
- On each call, if `divident` is greater than or equal to `divisor`, it increments `divi` and recurses with `divident - divisor`.
- When `divident` becomes less than `divisor`, it returns the accumulated count.

**Note:**  
- Using a static variable in recursion means the function is not reentrant or suitable for use with different pairs of values in the same run. For more reusable code, consider passing the count as a parameter or returning `1 + div(divisor, divident - divisor)` for each successful subtraction.
- The function does not handle negative numbers or division by zero.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
