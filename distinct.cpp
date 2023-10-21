#include <iostream>
using namespace std;
int distinct(int arr[], int sizeArr)
{   
    int k =1 , crr[k];
    for (int i = 0; i < sizeArr; i++)
    {
        int tem = arr[i], flag = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (tem == arr[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            crr[k] = arr[i];
            k++;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {1, 4, 4, 5, 5, 7, 6, 6};
    int sizeArr = sizeof(arr) / arr[0];
    // for(int i=0 ; i<sizeArr ; i++) {
    //     cin >> arr[i];
    // }
    distinct(arr, sizeArr);
}
