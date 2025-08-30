# Print Even Perfect Squares up to a Limit in C

This program prints all perfect squares of even numbers up to a given limit. The user inputs a number, and the program prints all even perfect squares (i.e., squares of even integers) such that the square is less than or equal to the input.

## 📄 Description

- The user is prompted to enter a number (`num`).
- The program uses a `for` loop:  
  - It starts with `i = 2` and increases by 2 each time (so `i` is always even).
  - On each iteration, it prints `i*i` if `i*i` is less than or equal to `num`.
- The loop stops when `i*i > num`.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o even_squares even_squares.c
   ```

2. **Run the executable:**
   ```sh
   ./even_squares
   ```

3. **Example interaction:**
   ```
   Enter number : 50
   4
   16
   36
   ```

## 💡 How It Works

- The loop variable `i` only takes even values (2, 4, 6, ...).
- For each value of `i`, the program computes and prints `i*i` if it is within the specified limit.

## ⚠️ Notes

- Only even perfect squares (squares of even numbers) are printed.
- If the input is less than 4, nothing is printed, since 2\*2 = 4 is the smallest even perfect square.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
