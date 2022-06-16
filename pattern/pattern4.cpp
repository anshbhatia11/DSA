// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main(){

	int i = 0;
    
	while(i<5){
	int k = i+1;
		int j = 0;
		while(j<=i){
			cout<<k<<" ";
			k--;
			j++;
		}
	    cout<<"\n";	
		i++;
	}
	
}