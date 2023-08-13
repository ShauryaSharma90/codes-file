#include <iostream>
using namespace std;

/* The at() function is used to access individual characters of a string at a specified index. It provides bounds checking to ensure that the provided index is within the valid range of indices for the string.The at() function is used to access individual characters of a 
string at a specified index. It provides bounds checking to ensure that the provided index is within the valid range of indices for the string.*/

void atDemo(string t , int n){
    cout << t.at(n) << "\n"; //In this func. element are used by their index like - you entered "Shaurya" so to display "S" your will write str.at(0);
}
int main(){
    string text;
    cout << "Enter a String" << "\n";
    cin >> text;
    int n;
    cout << "Which character of the string you want to be dispayed" << "\n";
    cin >> n;
    atDemo(text,n);
    return 0;
}
