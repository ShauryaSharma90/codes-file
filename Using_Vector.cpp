#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {1,6,5,3,8};
    // vec.insert(vec.begin(),72);
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";    
    }
    cout<<endl;

    int* ptr =vec.begin();
    
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";    
    }
    cout<<endl;
}
