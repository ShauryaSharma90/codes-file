#include <iostream>
using namespace std;

// You are given three numbers a,b,c and you have tell that the any pair of among them will give negative number 
// or not if give them print yes and if not print no
// without using logical operator.

void negative(int arr[]){
    int c=0 , d=0;
    for(int i=0 ; i<3 ; i++){
        if(arr[i]==0){
            d++;
        }
    }
    for(int i=0 ; i<3 ; i++){
        if( arr[i]-(arr[i])==0 && arr[i]!=0 && d<2 && d>0){ //in last cond. d should be not equal to no. of elements in arr[]-1
            c++;
        }
    }
    if(c>0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[3];
        for(int i=0 ; i<3 ; i++){
            cin >> arr[i];
        }
        negative(arr);
    }
    return 0;
}
