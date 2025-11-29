// Example:
// arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
// The max subarray is [4, -1, 2, 1] → sum = 6

#include<iostream>
using namespace std;
int kadane(vector<int>&arr,int n){
    int i=0,j=0;
    int sum = 0,maxi = 0;
    for(int i = 0;i<n;i++){ 
        sum = sum + arr[i];

        maxi = max(maxi,sum);
        if(sum<0){
            j++;
            sum = 0;
        }
    }
    return maxi;
    
}
int main(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = arr.size();
    cout<<kadane(arr,size)<<endl;
    return 0;
}