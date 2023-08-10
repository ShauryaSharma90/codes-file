#include <iostream>
using namespace std;

/* the insert is a member function used for different types of container(a variable that stores multiple elements)
like-string, vector, array, etc. It is used to insert any thing at a given position. Let try different ways to use 
it. 
*/
// Inserting a substring of another string
void pattern_4(string n, string t){
    n.insert(5,t,1,7);
    cout << n << "\n";
}
// Inserting a whole string variable
void pattern_3(string n, string t){
    n.insert(5,t);
    cout << n << "\n";
}
// Inserting characters
void pattern_2(string n){
    n.insert(5,3,'*');
    cout << n << "\n";
}
// Inserting a string at a specific position
void pattern_1(string n){
    n.insert(6,"beautiful ");
    cout << n << "\n";
}
int main(){
    string n= "Hello World";
    string t= " Amazing";
     // pattern_1(n);
    //  pattern_2(n);
    //  pattern_3(n,t);
     pattern_4(n,t);
    
    return 0;
}
