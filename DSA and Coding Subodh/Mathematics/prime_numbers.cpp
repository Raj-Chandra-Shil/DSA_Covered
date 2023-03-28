#include <bits/stdc++.h>
using namespace std;

/// Prime number: a number that has exactly two factors
/// those factors are 1 and the number itself

/// time complexity: O(sqrt(x))
bool isPrime(int n)
{
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main() 
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    (isPrime(number) == true) ? cout << "Prime!!\n" : cout << "Not prime\n";

    return 0;
}