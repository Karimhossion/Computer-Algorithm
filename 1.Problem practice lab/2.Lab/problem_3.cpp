/*3. To read a matrix of size m*n from the keyboard and display the
same on the screen using function.*/
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m;
    cin >> n;
    int mat[m][n];
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> mat[i][j];
        }
    }
    cout << "Matrix => " << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << mat[i][j];
            cout<<" ";
        }
        cout << endl;
    }
    return 0;
}