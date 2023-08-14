/*Usually if you take a user input in a string using cin function then you can only get the which written without 
the space by the user like - Shaurya , Anadi , Aman , Arshil , jkg$rh?erh_bvbgf ,and so on but if you want to take
user input and want to store more than one word with including spaces then you have to use getline().*/

/*the getline function is used to read input from an input stream, such as cin, and store it in a string.
 This function is particularly useful for reading entire lines of text, including spaces, from the input stream.*/
// Example :
#include <iostream>
using namespace std;

void pattern_1(string &t){
    getline(cin,t);       //Getting normally input by getline function 
    cout << "YOU ENTERED: " << t; 
}
void pattern_2(string &t , char &cond){
    cout << "Define the char at which you want to stop taking input: \n";
    cin >> cond;
    cout << "Enter what do you want:\n";
    getline(cin,t,cond);   //By using cond var. you are saying that when you find cond. in string stop taking input. 
    cout << "YOU ENTERED: " << t; 
}
int main(){
    string t;
    char cond;
    // pattern_1(t);
    pattern_2(t,cond);
    return 0;
}
