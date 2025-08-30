# Print a Simple Monthly Calendar in C

This program prints a simple text calendar for a month, given the number of days in the month and the starting weekday.

## 📄 Description

- The user is prompted to enter:
    - The total number of days in the month.
    - The starting day of the week (1=Sunday, 7=Saturday).
- The program prints a calendar for the month, aligning the days with the correct starting weekday.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o print_calendar print_calendar.c
   ```

2. **Run the executable:**
   ```sh
   ./print_calendar
   ```

3. **Example interaction:**
   ```
   Enter number of days in month : 31
   Enter starting day of the week (1=Sum, 7=Sat) : 5
         1  2  3  4  5  6  7
    8  9 10 11 12 13 14
   15 16 17 18 19 20 21
   22 23 24 25 26 27 28
   29 30 31
   ```

## 💡 How It Works

- Prints spaces for the days before the starting day so that the first day aligns with the correct weekday.
- Prints each day, formatting each date with a width of three characters for proper alignment.
- Prints a newline at the end of each week.

## ⚠️ Notes

- Days of the week are labeled by number (1=Sunday, 2=Monday, ..., 7=Saturday).
- There are no checks for invalid input (e.g., days > 31 or start_day not in 1..7).
- The calendar does **not** print day names (Sun, Mon, ...), only numbers.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
