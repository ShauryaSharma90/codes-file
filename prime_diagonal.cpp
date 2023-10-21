
#include <iostream>
using namespace std;
void diagonal(int *a[] , int size) {
    for(int i = 0 ; i < size ; i++) {
        for(int j = 0 ; j < size ; j++) {
            if( i == j || i+j == size-1) {
                cout << a[i][j] << " ";
            }
        }
    }
}
int main() {
    int size;
    int *arr[size];
    cout << "Enter the size of array :";
    cin >> size;
    for(int i=0 ; i<size ; i++) {
        arr[i] = new int[size];
    }
    cout << "Enter the elements of the array :";
    for(int i = 0 ; i < size ; i++) {
        for(int j = 0 ; j < size ; j++) {
            cin >> arr[i][j];
        }
    }
    diagonal(arr , size);
    return 0;
}
