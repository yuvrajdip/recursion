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

//* checking a string or array with 2 parameter just
bool isPalindrome(int i, string &s)
{
    int n = s.size();
    if (i > s.size() / 2)
        return true;
    if (s[i] != s[n - i - 1])
        return false;

    return isPalindrome(i + 1, s);
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

//* reversing an array using recursion
void f1(int arr[], int total_size, int current_index)
{
    int n = total_size;
    int i = current_index;

    if (i >= n / 2)
        return;

    //* swapping
    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;

    f1(arr, n, i + 1);
}

int main()
{

    //*****  checking array palindrome using recursion

    int arr[] = {5, 0, 6, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (checkingPalindrome(arr, 0, n - 1, 1) == 1)
    {
        cout << "Is Palindrome\n";
    }
    else
    {
        cout << "Not Palindrome\n";
    }

    //******  checking if a number is palindrome or not

    chkpalindrome(12021);

    //*******  checking if a string is Palindrome or not
    string s = "MADAM";

    if (isPalindrome(0, s) == true)
    {
        cout << "Palindromic String";
    }
    else
    {
        cout << "Non Palindromic string";
    }
    cout << endl;

    //******  reversing array using recursion

    int arr2[] = {2, 3, 1, 5};
    int n1 = sizeof(arr2) / sizeof(arr2[0]);

    //*  before traversing
    for (int i = 0; i < n1; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    f1(arr2, n1, 0); //* reversing the array

    //* after reversing
    for (int i = 0; i < n1; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;

    return 0;
}