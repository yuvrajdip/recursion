#include <iostream>
#include <cstdio>
using namespace std;

//* multiple recursion calls
//* when multiple recursion call is called then the recursion calls or functions are called serially
//* here fib(n-1) and all of fib(n-1)'s subfunctions will be called first, after finishing all fib(n-1)
//* then fib(n-2) will be called

//* fibonacci series using recursion
int fib(int n)
{
    if (n < 0)
        return 0;
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    // 1 based index
    // 1 2 3 4 5 6
    // 0 1 1 2 3 5

    int n;
    cin >> n;

    if (n < 1)
    {
        printf("Invalid Input.\nValue of N should be greater than 0\n");
    }
    else
    {
        cout << fib(n - 1) << endl;
    }
    return 0;
}