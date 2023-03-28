#include <bits/stdc++.h>
using namespace std;



void printDivisorSorted(int n)
{
    vector<int> storeDivisors;

    // for(int i = 1; i * i <= n; i++)
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(!(n % i))
        {
            if((n / i) != i) 
            {
                storeDivisors.push_back(i);
                storeDivisors.push_back(n/i);
            }

            else
                storeDivisors.push_back(i);
    
        }
    }

    // sort the array that contains all elements
    // in unsorted order
    // @time-complexity: 
    sort(begin(storeDivisors), end(storeDivisors));
    
    for(auto &i : storeDivisors)
        cout << i << " ";

    cout << endl;
}


void printDivisorOptimizedSorted(int n)
{
    /// @brief all the factors of a number can be found in sqrt(number)
    vector<int> storeDivisors;
    
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0) 
        {
            if(n / i == i)
                cout << i << " ";
            else
            {
                cout << i << " ";
                storeDivisors.push_back(n / i);
            }
        }
    }

    for(int i = storeDivisors.size() - 1; i >= 0; i--)
    {
        cout << storeDivisors[i] << " ";
    }

    cout << endl;
}

int main()
{
    // printDivisorSorted(100);
    printDivisorOptimizedSorted(100);

    return 0;
}