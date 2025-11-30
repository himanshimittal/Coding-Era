// Leaders in an Array — Definition

// In an array, a leader is an element that is strictly greater than all the elements to its right.

// 📌 Rightmost element is always a leader because nothing is on its right.

// ✅ Example
// arr = [16, 17, 4, 3, 5, 2]


// Leaders (from left to right) are:

// 17 (greater than everything to its right)

// 5

// 2 (always leader)

// So output → [17, 5, 2]
#include<iostream>
using namespace std;
vector<int> leader(vector<int> &arr){
    int n = arr.size();
    vector<int> result;

    int maxRight = arr[n-1];
    result.push_back(maxRight);
    for(int i = n-2;i>=0;i--){
        if(arr[i]>maxRight){
            result.push_back(arr[i]);
            maxRight=arr[i];
        }
    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){
    vector<int> v = {16,17,4,3,5,2};
    vector<int> ans = leader(v);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}