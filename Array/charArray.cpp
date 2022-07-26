
#include <iostream>

using namespace std;

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

bool palindrome(char name[], int n){
    int s = 0;
    int e = n-1;
    
    while(s<e){
        if(name[s++]!=name[e--]){
            return false;
        }
    }
    
    return true;
}

int main()
{
    
    char name[20];
    
    cout << "Enter the name: " <<endl;
    cin >> name;
    int count = 0;
    
    for(int i=0;i<20;i++){
        if(name[i]=='\0'){
            break;
        }else{
            count++;
        }
    }
    
    cout << "Length "<< count; 
    
    reverse(name,count);
    
    cout << "\nReverse: " << name;

    bool a = palindrome(name,count);
    
    cout<< "\nPalindrome: "<< a;
    
}

