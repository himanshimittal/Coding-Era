// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4

#include<iostream>
using namespace std;
int binary(vector<int>& v,int target){
    int i=0,j=v.size();
    while(i<j){
        int mid = i+(j-i)/2;
        if(v[mid]==target){
            return mid;
        }
        else if(v[mid]<target){
            i = mid+1;
        }
        else{
            j = mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> v = {1,23,45,56,67,78,89,90};
    cout<<binary(v,90)<<endl;
    return 0;
}