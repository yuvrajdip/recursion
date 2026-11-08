#include <iostream>
using namespace std;

void factors(int num)
{

    //* factors of a number

    cout << "Factors of " << num << "'s are : " << endl;

    for (int i = 1; i * i <= num; i += 1)
    {
        if (num % i == 0)
        {
            cout << i << " X " << num / i << endl;
        }
    }
}

// 1 * 16 2 * 8 4 * 4

int main()
{
    int num;
    cin >> num;

    factors(num);
    return 0;
}