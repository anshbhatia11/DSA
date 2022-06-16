// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main(){

	int i = 0;
    int k = 1;
	while(i<5){
		int j = 0;
		while(j<=i){
			cout<<i+1;
			k++;
			j++;
		}
	    cout<<"\n";	
		i++;
	}
	
}