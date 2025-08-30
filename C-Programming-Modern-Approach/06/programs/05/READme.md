# Table of Squares Using Odd Numbers in C

This program prints a table of numbers and their squares using a mathematical property:  
**The difference between consecutive squares is always an odd number.**

## 📄 Description

- The user is prompted to enter the number of entries for the table.
- The program prints numbers from 1 to the entered number, along with their squares.
- Instead of calculating the square using multiplication, it uses the fact that:  
  - \( n^2 = (n-1)^2 + 2n - 1 \)  
  - This means each square is the previous square plus the next odd number.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o table_of_squares_odd table_of_squares_odd.c
   ```

2. **Run the executable:**
   ```sh
   ./table_of_squares_odd
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

- Starts with `square = 1` (1²) and `odd = 3`.
- For each iteration:
  - Prints the current index and the current square.
  - Adds the next odd number to the square (`square += odd`).
  - Increments the odd number by 2 (`odd += 2`).
- This avoids using multiplication and demonstrates a mathematical property of squares.

## ⚠️ Notes

- The prompt says "enteries" (should be "entries"), but the code works as written.
- This method is efficient for generating squares in sequence.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
