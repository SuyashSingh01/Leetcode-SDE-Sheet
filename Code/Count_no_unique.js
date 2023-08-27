/**
 * Counts the number of positive integers with unique digits up to n digits.
 *
 * @param {number} n - The maximum number of digits.
 * @returns {number} The count of numbers with unique digits.
 */
const countNumbersWithUniqueDigits = function (n) {
    // Base cases: 0 has 1 unique digit, 1-9 have 10 unique digits
    if (n == 0) return 1;
    if (n == 1) return 10;
    // For n > 1, we can calculate the count of numbers with unique digits using the formula:
    // count(n) = 9 * 9 * 8 * ... * (11 - n) + count(n - 1)
    let k = 9;
    for (let i = 0; i < n - 1; i++) {
      k *= (9 - i);
    }
    return k + countNumbersWithUniqueDigits(n - 1);
  };
  