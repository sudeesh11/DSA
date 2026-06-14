#include <iostream>
using namespace std;

void hanoi(int n, char from, char aux, char to)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << from << " to " << to << endl;
    }

    else
    {
        hanoi(n - 1, from, to, aux);
        cout << "Move disk " << n << " form " << from << " to " << to << endl;
        hanoi(n - 1, aux, from, to);
    }
}

int main()
{
    char A, B, C;
    int n;
    cout << "Enter number of disks ";
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
