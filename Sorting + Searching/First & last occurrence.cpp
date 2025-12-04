// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
#include<iostream>
using namespace std;
int first(vector<int>& v, int target){
    int i = 0,j=v.size()-1,ans;
    while(i<=j){
        int mid = i+(j-i)/2;
        if(v[mid]==target){
            ans = mid;
            j = mid -1;
        }
        else if(v[mid]<target){
            i=mid+1;
        }
        else{
            j = mid-1;
        }
    }
    return ans;
}
int last(vector<int>& v, int target){
    int i=0,j=v.size()-1,ans;
    while(i<=j){
        int mid = i+ (j-i)/2;
        if(v[mid]==target){
            ans = mid;
            i = mid + 1;
        }
        else if(v[mid]<target){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> v = {5,7,8,8,8,10};
    int target = 8;
    cout<< first(v,target)<<" "<<last(v,target);
    return 0;
}