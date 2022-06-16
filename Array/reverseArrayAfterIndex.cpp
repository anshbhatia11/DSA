/*Reverse array after a certain index m */

#include <algorithm>
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int n = arr.size();
//     method 1: store reverse in different array and then place it in original arr 
    // vector<int> arr2;
//     for(int i=n-1;i>m;i--){
//         arr2.push_back(arr[i]);
//     }
//     int j=0;
//     for(int i=m+1;i<n;i++){
//         arr[i]=arr2[j];
//         j++;
//     }



//     method2 : reverse(arr.begin()+m+1,arr.end());



//     method3: swapping using 2 pointer approach
        int i = m+1, j= n-1;
        while(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
}
