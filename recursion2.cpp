//* problems on recursion
/*
 * Print Name 5 times
 */

#include <iostream>
using namespace std;

//* problem 1
//* Print Name 5 times
void printName(int count, string name)
{
    if (count < 0)
    {
        return;
    }

    cout << name << endl;

    printName(count - 1, name);
}

//* Problem 2
//* print linearly from 1 to N
void print1ToN(int count, int N)
{

    if (count > N)
    {
        return;
    }
    cout << count << endl;

    print1ToN(count + 1, N);
}

//* Problem 3
//* Print from N to 1
void printNto1(int N)
{
    if (N == 0)
        return;

    cout << N << endl;
    printNto1(N - 1);
}

//* Problem 4
//* print linearly from 1 to N ( but by backtracking )
void print1ToNbyBacktracking(int N)
{

    if (N == 0)
        return;

    print1ToNbyBacktracking(N - 1);
    cout << N << endl;
}

//* Problem 5
//* print N to 1 by backtracking
void print_N_to_1_by_backtracking(int i, int N)
{
    if (i > N)
        return;

    print_N_to_1_by_backtracking(i + 1, N);
    cout << i << endl;
}

int main()
{
    int N;
    cin >> N;

    //* problem 1
    // string name;
    // printName(N, name);

    //* problem 2
    // print1ToN(1, N);

    //* problem 3
    // printNto1(N);

    //* problem 4
    // print1ToNbyBacktracking(N);

    //* problem 5
    print_N_to_1_by_backtracking(1, N);

    return 0;
}