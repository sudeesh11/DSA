#include <iostream>
using namespace std;

int fibo(int n)
{
    int a = 0, b = 1, m;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int n;
    cout << "Enter the term up to which you want to display ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << fibo(i) << "\t";
    }
    return 0;
}