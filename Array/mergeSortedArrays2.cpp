#include <iostream>

using namespace std;

int main()
{
    int arr[3] = {1,2,3};
    int arr2[3] = {0,5,6};
    int m=3,n=3;
    int newa[6];
    
    int k=0,i=0,j=0;
    while(i<n && j<m){
        if(arr[i]<arr2[j]){
            
            newa[k] = arr[i];
            i++;
        }else{
            
            newa[k] = arr2[j];
            j++;
        }
        k++;
    }
    
    while(i<m){
        newa[k++] = arr[i++];
    }
    
    while(j<m){
        newa[k++] = arr2[j++];
    }
    
    for(int t=0;t<6;t++){
        cout<<newa[t]<<" ";
    }
    
    return 0;
}
