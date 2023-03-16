#include <iostream>
using namespace std;

int main()
{
    int i, j, n, m;
    cout << "enter the number of rows: ";
    cin >> n;

    cout << "enter the number of columns: ";
    cin >> m;

    int arr[100][100];

    // enter elements into matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // display the matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
