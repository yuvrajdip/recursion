#include <iostream>
using namespace std;

int checkingPalindrome(int arr[], int l, int r, int res)
{
    //* checking palindrome using recursion
    if (l > r)
    {
        return 1;
    }
    else if (arr[l] != arr[r])
    {
        return 0;
    }

    return res * checkingPalindrome(arr, l + 1, r - 1, res);
}

void chkpalindrome(int n)
{
    //*****     checking if a number is palindrome  *******/

    //* reversing that number
    //* let say 2442
    //* after reversing it is also 2442
    //* so we would check basically each digit of reversed number with the given number

    int n2 = n;

    int rev = 0, i = 1;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
        i *= 10;
    }

    int flag = 1;

    while (n2 > 0 || rev > 0)
    {
        if (n2 % 10 != rev % 10)
        {

            cout << "Not Palindrome\n";
            flag = 0;
            break;
        }
        rev /= 10;
        n2 /= 10;
    }

    if (flag == 1)
    {
        cout << "Palindrome\n";
    }
}

int main()
{

    //* checking array or string palindrome using recursion

    int arr[] = {5, 0, 6, 0, 5};

    // int arr[] = {1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << checkingPalindrome(arr, 0, n - 1, 1) << endl;

    // chkpalindrome(12021);

    return 0;
}