/*1. toupper() Function:
The toupper() function is used to convert a single character from lowercase to uppercase. It takes a character as an
 argument and returns the uppercase version of that character, if it's a lowercase letter. If the character is not a
  lowercase letter, it returns the character unchanged.*/

/*2. tolower() Function:
The tolower() function is used to convert a single character from uppercase to lowercase. It takes a character as an
 argument and returns the lowercase version of that character, if it's an uppercase letter. If the character is not 
 an uppercase letter, it returns the character unchanged.*/

/*To convert an entire string from uppercase to lowercase (or vice versa), you can iterate through each character of 
the string and apply the toupper() or tolower() function as needed.*/

#include <iostream>
using namespace std;
void tolowerDemo(string t){
    string temp="";
    for(int i=0; i<t.length() ; i++){
        temp+=tolower(t[i]);
    }
    cout << "Your string after changing :" << temp << "\n";
}
void toupperDemo(string t){
    string temp="";
    for(int i=0; i<t.length() ; i++){
        temp+=toupper(t[i]);
    }
    cout << "Your string after changing :" << temp << "\n";
}
int main(){
    string t;
    cout << "Enter the string :\n";
    cin >> t;
    int n;
    cout << "If your string is in lowercase enter 1 else enter 2:\n";
    cin >> n;
    if(n==1){
        toupperDemo(t);
    }
    else{
        tolowerDemo(t);
    }
    return 2;
}
