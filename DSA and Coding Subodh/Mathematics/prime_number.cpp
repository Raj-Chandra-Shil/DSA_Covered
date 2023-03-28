#include <bits/stdc++.h>
using namespace std;


/**
    @dev a prime is that is only divisible by itself and one
*/
bool isPrime(int x)
{
    for(int i = 2; i <= (x / 2); i++)
    {
        if(!(x % i)) return false;
    }

    return true;
}

int main()
{
    cout << "Enter number: ";
    int number;
    cin >> number;

    if(isPrime(number))
    {
        cout << number << " is a prime number";
    }
    else
    {
        cout << number << " is not a prime number" << endl;
    }

    return 0;
}