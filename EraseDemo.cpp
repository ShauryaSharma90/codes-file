#include <iostream>
using namespace std;
// It allows you to remove characters or a range of characters from a string. The erase() function can be useful for
//  modifying strings by removing unwanted parts or characters.
void pattern_2(string text){
    // Removing a range of characters using erase()
    text.erase(5);
    cout << text << "\n";
}
void pattern_1(string text){
    // Removing a single character at a specific position
    // this way can be used to delete more than one char. syntax- string.erase(position,num. of char.);
    text.erase(5,1);
    cout << text << "\n";
}
int main(){
    string text = "Hello, world";
    // pattern_1(text);
    pattern_2(text);
    return 0;
    
}
