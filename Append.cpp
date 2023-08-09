#include <iostream>
using namespace std;

// Appending characters using iterators:
string pattern_4(string& n  , string& t){
    n.append(t.begin(),t.end());// begin point on the 1st char. of the string & 
    return n;                   // end points to the position just after the last char.of the string
    
}
// Appending characters:
string pattern_3(string& n){
    n.append(4,'$');// Add "$$$$" to the end of the string
    return n;
}
// Appending substrings:
string pattern_2(string& n , string& t){
    n.append(t,0,12); // Add " is handsome" from temp string
    return n;
}
// Appending strings:
string pattern_1(string& n, string& sn){
    n.append(sn);// Add SurName string to the end of the string
    return n;
}
int main(){
    string name = "Shaurya";
    string SurName = "Sharma";
    string temp  =" is handsome ";
    // cout << pattern_1(name,SurName) << "\n";
    // cout << pattern_2(name,temp) << "\n";
    // cout << pattern_3(name) << "\n";
    // cout << pattern_4(name , temp) << "\n";
    return 0;
}
