#include<iostream>
using namespace std;
void rotation(vector<int> arr,int k){
    
    reverse(arr.begin(), arr.end() - k);
    reverse(arr.end() - k, arr.end());
    reverse(arr.begin(), arr.end());
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> v = {1,2,3,4,5,6};
    rotation(v,3);
    return 0;
}