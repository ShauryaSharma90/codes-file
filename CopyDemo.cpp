#include <iostream>
using namespace std;

int main(){
    string str1 = "Shaurya";
    char str2[] = "abcbdef";
    str1.copy(str2,8);
    cout << str2 << "\n";
    cout << str1 << "\n";
    // source.copy(destination,length,opt.pos)
    return 0;
}
