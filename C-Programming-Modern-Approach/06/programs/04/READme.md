# Table of Squares Using a For Loop in C

This program prints a table displaying numbers from 1 up to a user-specified value, alongside their squares, using a `for` loop.

## 📄 Description

- The program prompts the user to enter the number of entries for the table.
- It uses a `for` loop to iterate from 1 to the entered number.
- For each value of `i`, it prints both the value and its square in a tabular format.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o table_of_squares table_of_squares.c
   ```

2. **Run the executable:**
   ```sh
   ./table_of_squares
   ```

3. **Example interaction:**
   ```
   This program prints a table of squares.
   Enter number of enteries in table : 5
   1		1
   2		4
   3		9
   4		16
   5		25
   ```

## 💡 How It Works

- The program reads the user's input for the number of entries.
- The `for` loop starts at 1 and increments until it reaches the entered number.
- On each iteration, it prints the current number and its square.

## ⚠️ Notes

- The program expects a positive integer from the user as input.
- The word "enteries" should be "entries" in the prompt for correct English spelling, but the code will work as written.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
