#include <iostream>
using namespace std;

void test_func(int *a[], int row, int col)
{
    // cout << "4" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j]<<" ";
            // cout << " & ";
        }
        cout<<"\n";
    }
    // cout << "\n5" << endl;
}
int main()
{
    // cout << "1" << endl;
    cout<<"Enter no. of rows : ";
    int row;
    cin>>row;
    cout<<"Enter no. of cols : ";
    int col;
    cin>>col;
    int *array[row]; // these elements will store the address of the first element of multidimensional array
    // cout << "2" << endl;
    for (int i = 0; i < row; i++)
    {
        array[i] = new int[col]; // creating each line of multidimenional array
    }
    cout<<"Enter Elements: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>array[i][j];
        }
        
    }
    
    // cout << "3" << endl;
    test_func(array,row,col);
    // cout << "6" << endl;
}
