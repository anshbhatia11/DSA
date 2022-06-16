//time complexity: O(n^2), space complexity: O(1)
//unstable algorithm, order isn't neccesarilty preserved

#include <climits>
int minVal(vector<int>& arr,int s,int e){
    // s and e are the starting and ending index where min value is to be found
    int min = arr[s];
    int minIndex = s;
    for(int i=s;i<=e;i++){
        if(arr[i]<min){
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        int min = minVal(arr,i,n-1);
        swap(arr[i],arr[min]);
    }
    
}

int main()
{
    vector<int> arr = {46,27,12,5,53,6};
    
    selectionSort(arr,6);
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
