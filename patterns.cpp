#include <iostream>
using namespace std;
void pattern_12(int a){
    // A
    // B C 
    // D E F 
    // G H I J 
    char letter = 'A';
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            cout << letter << " ";
            letter++;
        }
        cout << "\n";
    }
}
void pattern_11(int a){
    }
void pattern_10(int a){
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            if((i-j)%2==0){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << "\n";
    }
}
void pattern_9(int a){
    // 1 2 3 4
    // 5 6 7
    // 8 9
    // 10
    int b=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i;j++){
            cout << b << " ";
            b++;
        }
        cout << "\n";
    }
}
void pattern_8(int a){
// 1
// 2 3
// 4 5 6
// 7 8 9 10
int b=1;
for(int i=0;i<a;i++){
    for(int j=0;j<=i;j++){
        cout << b << " ";
        ++b;
    }
    cout << "\n";
}
}
void pattern_7(int a){
    // * * * *
    //   * * * 
    //     * * 
    //       *
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(j>=i)
            cout << "* ";
            else
            cout << "  ";
        }
        cout << "\n";
    }
}
void pattern_6(int a){
    //       *
    //     * *
    //   * * *
    // * * * *
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(j+i<3){
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        cout << "\n";
    }
}
void pattern_5(int a){
    // * * * *
    // * * *
    // * *
    // *
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i;j++){
            cout << "* ";
        }
        cout << "\n";
    }
}
void pattern_4(int a){
    // *
    // * *
    // * * *
    // * * * *
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << "\n";
    }
}
void pattern_3(int a){
    //    * * * *
    //   *     *
    //  *     *
    // * * * *
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i;j++){
            cout << "  ";
        }
        for(int k=0;k<a;k++){
            if(i==0||k==0||i==a-1||k==a-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << "\n";
    }
}
void pattern_2(int a){
    //     * * * *
    //    * * * *
    //   * * * *
    //  * * * *
    for(int i=0;i<a;i++){
        int b=a-i;
        for(int k=0;k<b;k++){
            cout << " ";
        }
        for(int j=0;j<a;j++){
        cout << "* ";
        }
        cout << "\n";
    }
}
void pattern_1(int a){
    // * * * *
    // *     *
    // *     *
    // * * * *
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i==0||j==0||i==a-1||j==a-1)
            cout << "* ";
            else
            cout <<  "  ";
        }
        cout << "\n";
    }
}
void pattern(int a){
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout << "* ";
        }
    cout << "\n";
    }
}
int main(){
    int a=4;
    // cin >> a;
    // pattern_1(a);
    // pattern_2(a);
    // pattern_3(a);
    // pattern_4(a);
    // pattern_5(a);
    // pattern_6(a);
    // pattern_7(a);
    // pattern_8(a);
    // pattern_9(a);
    // pattern_10(a);
    // pattern_11(a);
    pattern_12(a);
    return 0;
}
