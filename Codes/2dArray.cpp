#include <iostream>
using namespace std;

const int ROW = 3;
const int COL = 4;

// always pass number of columns (COL) in this case so that compiler knows how many columns are there are to calculate memory positions correctly.
bool isPresent(int arr[][COL], int target, int ROW, int COL)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (target == arr[ROW][COL])
            {
                return 1;
            }
        }
    }
    return false;
}

int main()
{
    // int arr[ROW][COL];
    // int arr [ROW][COL] = {1,2,3,4,5,6,7,8,9,0,1,2};  // // ROW wise nai print huncha
    int arr[ROW][COL] = {{1, 11, 111, 1111},
                         {2, 22, 222, 2222},
                         {3, 33, 333, 3333}};
    // takes ROW wise input
    /*
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> arr[i][j];
        }
    }
    */
    cout << endl;

    // takes COL wise input
    /*
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            cin >> arr[j][i];
        }
    }
    */
    cout << endl;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    int target;
    cout << "Enter a number to search" << endl;
    cin >> target;

    if (isPresent(arr, target, ROW, COL))
    {
        cout << "Element " << target << " is present" << endl;
    }
    else
    {
        cout << "Element " << target << " is NOT present" << endl;
    }
}
