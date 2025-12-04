// Input: nums = [1,2,3,1]
// Output: 2
// Explanation: 3 is a peak element and your function should return the index number 2.
#include<iostream>
using namespace std;
int peak(vector<int> v){
    int i = 0,j = v.size()-1;
    while (i < j) {
            int mid = i + (j - i) / 2;
            if (v[mid] > v[mid + 1]) {
                j = mid;  
            } else {
                i = mid + 1;  
            }
        }
        
        return i;  
}
int main(){
    vector<int> v = {1,2,3,1};
    cout<<peak(v)<<endl;
    return 0;
}