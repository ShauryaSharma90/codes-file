/*Swap is a function present in cpp which is used to swap the values of two variable,containers.
It is present in <algorithm>*/
#include <iostream>
using namespace std;
void swaping(string a , string b){
    swap(a,b);
    cout << " a= " << a << " , b= " << b << "\n";
}
int main(){
    string a,b;
    cout << "Enter 2 string:\n";
    cin >> a >> b;
    cout << "Before swaping strng a= " << a << " , b= " << b << "\n";
    cout << "After swaping string";
    swaping(a,b);
    return 0;
}
