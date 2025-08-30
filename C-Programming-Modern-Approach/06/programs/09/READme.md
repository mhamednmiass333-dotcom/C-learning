# Fraction Reduction to Lowest Terms in C

This program takes a fraction as input and reduces it to its lowest terms using the Euclidean algorithm to compute the Greatest Common Divisor (GCD).

## 📄 Description

- The user is prompted to enter a fraction in the format `numerator/denominator` (e.g., `8/24`).
- The program calculates the GCD of the numerator and denominator.
- Both the numerator and denominator are divided by their GCD to reduce the fraction to its lowest terms.
- The result is printed in the form `numerator/denominator`.

## 📝 Usage

1. **Compile the program:**
   ```sh
   gcc -o reduce_fraction reduce_fraction.c
   ```

2. **Run the executable:**
   ```sh
   ./reduce_fraction
   ```

3. **Example interaction:**
   ```
   Enter a fraction : 8/24
   In lowest terms : 1/3
   ```

## 💡 How It Works

- The program reads two integers separated by `/` as the numerator and denominator.
- Copies of these values are made to compute the GCD using the Euclidean algorithm (iterative).
- The original numerator and denominator are divided by the GCD to get the reduced form.

## ⚠️ Notes

- The program assumes the input is always two integers separated by a `/`.
- It does not handle negative numbers, zero denominators, or invalid input formats.
- If the numerator and denominator are both negative, the result will be positive.

## 🏷️ License

This code is for educational purposes.  
Feel free to use, modify, and share.

---
