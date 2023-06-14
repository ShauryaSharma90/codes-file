#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int c=0;
        while(a<=b){
            if(a%10==2 || a%10==3 || a%10==9)
            c++;
            a++;
        }
        cout << c << "\n";
    }
	return 0;
}
