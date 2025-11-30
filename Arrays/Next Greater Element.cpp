#include<iostream>
using namespace std;
int next_greater(vector<int>& arr){
    int lar = arr[0];
    int sec = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>lar){
            sec = lar;
            lar= arr[i];
        }
        else if(arr[i]<lar && arr[i]>sec){
            sec = arr[i];
        }
    }
    return sec;
}
int main(){
    vector<int> arr = {15,20,17,4,5,6};
    cout<<next_greater(arr)<<endl;
    return 0;
}