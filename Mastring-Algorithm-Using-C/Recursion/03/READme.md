# Recursive Sum to N in C

This project demonstrates how to calculate the sum of all numbers from 0 up to a user-provided number `n` using recursion in C.

## 📄 Description

- The program prompts the user to enter a number.
- It uses a recursive function `sum_to(int num)` to calculate the sum from 0 up to the given number.
- The function employs a `static` variable to accumulate the sum across recursive calls.
- The final result is displayed after the recursion completes.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o sum_to_n sum_to_n.c
   ```

2. **Run the executable:**
   ```sh
   ./sum_to_n
   ```

3. **Follow the prompt:**
   ```
   Enter number : 5
   sum of numbers from 0 to 5 is 15
   ```

## 💡 How It Works

- The function `sum_to(int num)` adds `num` to a static variable `sum` and recursively calls itself with `num - 1`.
- When `num` is less than or equal to 0, the recursion stops and returns the accumulated sum.
- Using a static variable preserves the value of `sum` across all recursive calls.

**Note:**  
Using a `static` variable for this purpose works, but is not recommended for general recursive patterns because it is not reentrant or thread-safe. A more typical approach is to return `num + sum_to(num - 1)` and remove the static variable.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
