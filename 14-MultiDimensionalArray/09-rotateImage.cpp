#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the no. of columns/rows : ";
    cin >> n;
    int arr[n][n];
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // print
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //  transpose in the same matrix
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // revrse each row
    for (int k = 0; k <= n - 1; k++)
    {
        int i = 0;
        int j = n - 1;
        while (i <= j)
        { // swapping k.i and k,j
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
    }
    // printing
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}