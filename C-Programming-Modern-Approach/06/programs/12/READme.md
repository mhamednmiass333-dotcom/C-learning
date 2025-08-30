# Print Sequence: 4, 9, 16, 25, ... (Perfect Squares) in C

This program prints a sequence of numbers starting from 4, where each subsequent number is the next perfect square (i.e., 4, 9, 16, 25, ...), up to a user-specified limit.

## 📄 Description

- The user is prompted to enter an upper limit (`num`).
- The program starts with `i = 4` (which is 2²) and repeatedly adds the next odd number to get the next perfect square.
- The sequence uses the property that the difference between consecutive perfect squares increases by 2 each time (i.e., 2n + 1).
- The loop continues until the next perfect square would exceed the user-provided limit.

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
   Enter number : 30
   4
   9
   16
   25
   ```

## 💡 How It Works

- Starts with `i = 4` (2²) and `odd = 5` (the difference to get from 2² to 3²).
- For each iteration:
  - Prints the current value of `i`.
  - Increments `i` by `odd`, and then increases `odd` by 2.
  - Repeats `i += odd; odd += 2;` to always land on the next perfect square.
- Stops when the next value of `i` would be greater than the input limit.

## ⚠️ Notes

- The program only prints perfect squares greater than 1 (starting with 4, i.e., 2²).
- If the input number is less than 4, nothing is printed.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
