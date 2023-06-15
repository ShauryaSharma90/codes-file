#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int arr[a],c=0;
        for(int i=0;i<a;i++){
            cin  >> arr[i];
            if(arr[i]>b)
            c++;
        }
        cout << c << "\n";
    }
	return 0;
}
