// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    // cout<<"a";
    while(i<=4){
        int space = 4 - i;
        while(space){
            cout<<" ";
            space--;
        }
        int star = 1;
        while(star<=i){
            cout<<"*";
            star++;
        }
        cout<<"\n";
        i++;
    }
    
    return 0;
}