// program fkr findjng prime number

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    //initializing variables
    int num;
    string divisors = "";
    
    //gathering inputs

    cout << "Enter a positive whole number in the range 2 through 1000: " << endl;
    cin >> num;

    // check if in range
    
    if (num < 2 || num > 1000) 
    {
        cout << "Error! " << num << " is outside the range 2 through 1000." << endl;
        return 0;
    }

    // check for first prime numbers
    
    if (num == 2 || num == 3 || num == 5 || num == 7 || num == 11 ||
        num == 13 || num == 17 || num == 19 || num == 23 || num == 29 || num == 31) 
    {
        cout << num << " is prime." << endl;
        return 0;
    }

    // check divisibility and concatinate
    
    if (num % 2 == 0) 
    {
        divisors += "2\n";
    }
    if (num % 3 == 0) 
    {
        divisors += "3\n";
    }
    if (num % 5 == 0) 
    {
        divisors += "5\n";
    }
    if (num % 7 == 0) 
    {
        divisors += "7\n";
    }
    if (num % 11 == 0) 
    {
        divisors += "11\n";
    }
    if (num % 13 == 0) 
    {
        divisors += "13\n";
    }
    if (num % 17 == 0) 
    {
        divisors += "17\n";
    }
    if (num % 19 == 0) 
    {
        divisors += "19\n";
    }
    if (num % 23 == 0) 
    {
        divisors += "23\n";
    }
    if (num % 29 == 0) 
    {
        divisors += "29\n";
    }
    if (num % 31 == 0) 
    {
        divisors += "31\n";
    }

    // if else statment if prime
    
    if (divisors == "") 
    {
        cout << num << " is prime.\n";
    } 
    else 
    {
        cout << num << " is divisible by:\n" << divisors;
    }
    return 0;
}
