#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        int next = i - 1;
        while (next)
        {
            cout << "*";
            next--;
        }
        cout << endl;
        i++;
    }
    return 0;
}