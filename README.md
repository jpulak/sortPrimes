# sortPrimes
General Description:
Write a program that asks the user to enter a positive whole number in the range 2 through 1000 and determines whether the entered number is prime.

Use the following methodology to determine whether a number is prime or not. The first eleven prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, and 31. If any of these are the number, it is a prime. Other numbers one thousand or less that are not divisible by one of these numbers are prime.

When the number entered by the user is prime, display a message saying num is prime, where num is the entered number.

When the number entered by the user is not a prime, display a list of all the values from the list of eleven primes given above that are factors of the entered number.

Should the user enter a number outside the range specified in the prompt, display an error message telling the user the number is outside the range 2 through 1000.

Use an int to store the number entered.

Do not forget to display a newline after your result.

You must solve the problem using the algorithm specified. You are not to use loops, library functions, arrays, or any other programming constructs outside of those covered in chapters 1-4 of the Gaddis text.

Failure to follow the requirements for lab lessons can result in deductions to your points, even if you pass the validation tests. Logic errors, where you are not actually implementing the correct behavior, can result in reductions even if the test cases happen to return valid answers. This will be true for this and all future lab lessons.

Display Details
Sample Output 1:
```

Enter a positive whole number in the range 2 through 1000: 947

947 is prime.
```
Sample Output 2:
```
Enter a positive whole number in the range 2 through 1000: 858

858 is divisible by:
2
3
11
13
```

Sample Output 3:
```
Enter a positive whole number in the range 2 through 1000: 0

Error! 0 is outside the range 2 through 1000.```
Your output must match the output above.
