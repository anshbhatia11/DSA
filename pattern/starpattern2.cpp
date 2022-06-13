// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int i = 4;
    // cout<<"a";
    while(i>=1){
        int j = 1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i--;
    }
    
    return 0;
}