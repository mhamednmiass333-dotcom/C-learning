# Find the Earliest Date Entered in C

This program prompts the user to enter multiple dates and determines which one is the earliest. The process stops when the user enters `0/0/0`.

## 📄 Description

- The program asks the user to enter dates in the format `mm/dd/yy`.
- It keeps track of the earliest date entered using a simple integer comparison calculation.
- The input loop terminates when `0/0/0` is entered.
- The earliest date is then displayed.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o earliest_date earliest_date.c
   ```

2. **Run the executable:**
   ```sh
   ./earliest_date
   ```

3. **Example interaction:**
   ```
   Enter a date (mm/dd/yy) : 3/15/24
   Enter a date (mm/dd/yy) : 4/10/21
   Enter a date (mm/dd/yy) : 12/5/23
   Enter a date (mm/dd/yy) : 0/0/0
    4/10/21 is the earliest day
   ```

## 💡 How It Works

- The program reads dates in the format `mm/dd/yy`.
- For each date, an integer `current` is computed to represent the date's order:
  - `current = month * 30 + year * 365 * 30 + day;`
  - This is not an exact date calculation, but is sufficient for strict comparison if years, months, and days are all positive integers.
- If the computed `current` is less than the minimum found so far, the program updates its record of the earliest date.
- When `0/0/0` is entered, the loop ends and the earliest date is printed.

## ⚠️ Notes

- The calculation for comparing dates is crude and assumes each month has 30 days, which is not strictly accurate, but works for simple ordering.
- Input is not validated for correct date values (e.g., month ≤ 12, day ≤ 31, year two digits).
- If no valid date is entered before `0/0/0`, the output will be uninitialized.
- There are leading spaces in the output if numbers are single-digit (`%2d`).
- The `scanf` format expects spaces around the `/` characters (e.g., `3 /15 /24`). For user convenience, the format string can be improved.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
