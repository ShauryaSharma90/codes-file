/* Imagine you have words, like "5" and "10," that look like numbers, but they're still words. Sometimes you want to
 use them as actual numbers, like when you want to add or subtract them. To do that, you need a way to turn these
 word-numbers into real numbers that the computer can understand. This is where the stoi() in C++ comes in!*/
 
 /*stoi function in C++ is a way to transform a string that represents an integer (a word that looks like a number) 
 into an actual integer data type that can be used for mathematical calculations and other operations.*/

//Full Name: Standard String to Integer

 #include <iostream>
 using namespace std;

 int main(){
    string a = "5";
    cout << (double)stoi(a)/2 << "\n";
    return 0;
}
