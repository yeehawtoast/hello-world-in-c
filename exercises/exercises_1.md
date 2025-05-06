
## Section 3 – Variables, Expressions, and Flow Control

**1. Variable Manipulation**

* Declare three variables: an `int`, a `float`, and a `char`. Assign them values, print them, and update them using arithmetic operations.

**2. Operator Exploration**

* Write a program that takes two integers and:

  * Prints their sum, difference, product, and quotient.
  * Uses the ternary operator to print the larger value.
  * Uses pre-increment and post-increment to show the difference in behavior.

**3. Control Flow – Calculator**

* Write a program that simulates a calculator using a `switch` statement. Accept two numbers and an operator (`+`, `-`, `*`, `/`) and output the result.

**4. FizzBuzz Challenge**

* Print numbers from 1 to 100.

  * For multiples of 3, print "Fizz"
  * For multiples of 5, print "Buzz"
  * For multiples of both, print "FizzBuzz"

---

## Section 4 – Functions

**5. Basic Math Functions**

* Implement and test the following functions:

  * `int add(int a, int b)`
  * `int max(int a, int b)`
  * `int factorial(int n)` (use a `for` loop)

**6. Function Practice with Flow Control**

* Write a function `int is_prime(int n)` that returns 1 if `n` is prime and 0 otherwise.

**7. Functions + Loops**

* Write a program that asks the user for a number and prints all primes up to that number using your `is_prime` function.

---

## Section 5 – Pointers

**8. Swap Two Values**

* Write a function `void swap(int* a, int* b)` that swaps the values of two integers using pointers.

**9. Simulate Input via Pointer**

* Write a function `void get_input(int* a)` that assigns a value to an integer via a pointer. Call this function from `main`.

**10. Pointer Tracing**

* Manually trace (with comments or debug output) what happens in this code:

```c
int a = 5;
int* p = &a;
*p = *p + 1;
printf("%d\n", a);
```

**11. NULL Safety**

* Write a function `void safe_print(int* p)` that checks if `p` is `NULL` and either prints its value or prints "null pointer".

---

## Section 6 – Arrays and Multidimensional Arrays

**12. Array Summation**

* Write a function that takes an array and its size and returns the sum of its elements.

**13. Reverse Array**

* Write a function `void reverse_array(int* arr, int size)` that reverses an array in-place using pointers.

**14. Matrix Addition**

* Write a program that defines two 3x3 matrices and outputs their sum.

**15. Passing Arrays to Functions**

* Write a function `void print_array(int arr[], int size)` and use it in multiple contexts: printing forward, reversed, and only even values.

**16. Pointer vs Array Access**

* Demonstrate accessing an array element both with `arr[i]` and `*(arr + i)`, and show that the results are the same.

---

## **Mini-Challenges**

These are a bit more open-ended:

**17. Temperature Converter**

* Create a program with functions to convert:

  * Celsius to Fahrenheit
  * Fahrenheit to Celsius
  * Use a `switch` to let the user choose.

**18. Simple Guessing Game**

* Generate a random number from 1–100.
* Let the user guess repeatedly and give hints until they guess right.

**19. Command Line Calculator**

* Pass arguments to `main(int argc, char* argv[])` to build a calculator:

  * Example: `./calc 4 + 5`

**20. Basic Statistics**

* Write functions to compute mean, min, and max from an array of numbers.