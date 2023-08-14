/*to_string function is used to convert numeric values (integers, floating-point numbers) into their corresponding 
string representations. This function is particularly useful when you need to combineor display numeric values as 
part of a larger string or when you want to manipulate or format numbers as strings.
*/
// Example:

#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: \n";
    cin >> age;
    cout << "Displaying your age after converting it into string: \n";
    cout << "You are " << to_string(age) << " years old\n";
    return 0;
}
