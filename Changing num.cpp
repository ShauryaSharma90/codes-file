#include<iostream>
using namespace std;

void upp(int &a){
    a++;
    cout<<"num in fun is "<<a<<endl;
}

int main(){
    int a =19;
    cout<<"num is "<<a<<endl;
    upp(a);
    cout<<"now new num is "<<a<<endl;
    return 0;
}
