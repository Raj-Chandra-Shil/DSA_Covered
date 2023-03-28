#include <bits/stdc++.h>
using namespace std;

/// GCD or HCF of two numbers 
/// extract all factors of both numbers
/// the biggest number is the result

int GCD(int n1, int n2)
{
    int iteratorStop = min(n1, n2);
    int result = 0;

    // for(int i = 1; i <= iteratorStop; i++)
    /// the line mention below provides better complexity 
    for(int i = iteratorStop; i >= 1; i--)
    {
        if(!(n1 % i) && !(n2 % i))
        {
            result = max(result, i);
        }
    }

    return result;
}

int GCD_euclidean(int n1, int n2)
{
    int result = 0;
    int max_n = max(n1, n2), min_n = min(n1, n2);

    while(!n1 && !n2)
    {
        if(max(max_n, min_n) == max_n)  max_n = max_n- min_n; 
        else swap(max_n, min_n), max_n = max_n - min_n; 
    }

    return result = min_n;
}

int GCD_library_builtin(int n1, int n2)
{
    return __gcd(n1, n2);
}

int main()
{
    cout << "Enter two values: ";
    int n1, n2;
    cin >> n1 >> n2;
    // cout << GCD(n1, n2) << endl;
    cout << GCD_euclidean(n1, n2) << endl;

    return 0;
}