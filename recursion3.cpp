#include <iostream>
using namespace std;

//* two types of recursion calls

//* 1. parameterized recursion
//* 2. functional recursion

// parameterized recursive functional call means passing the intermediate results of each fuction (the function itself) to another function using parameters
// sum of first N numbers 1-N using parameterized recursion
void sumOfN(int i, int sum) // i basically means iteration numbers
{
    if (i == 0)
    {
        cout << sum << endl;
        return;
    }

    sumOfN(i - 1, sum + i);
}

//* functional recursion
// functional recursion call means passing the intermediate results of each function to another function(the function itself) using return value

int f1(int n)
{
    if (n < 1)
    {
        return 0;
    }

    return n + f1(n - 1);
}

int main()
{
    //* find sum from 1 to N
    int n;
    cin >> n;

    sumOfN(n, 0);

    cout << f1(4) << endl;
    return 0;
}