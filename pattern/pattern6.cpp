// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main(){

	int i = 0;
    int k = 0;
	while(i<5){
	
		int j = 0;
		while(j<=5){
		    char ch = 'A' + k;
			cout<<ch<<" ";
			k++;
			j++;
		}
	    cout<<"\n";	
		i++;
	}
	
}