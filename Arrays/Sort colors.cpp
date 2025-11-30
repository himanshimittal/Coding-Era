#include<iostream>
#include<vector>
using namespace std;

vector<int> sortarray(vector<int>& arr) {
    vector<int> freq(3, 0);
    for(int x : arr) {
        freq[x]++;
    }
    int idx = 0;
    while(freq[0]--) arr[idx++] = 0;
    while(freq[1]--) arr[idx++] = 1;
    while(freq[2]--) arr[idx++] = 2;
    return arr;
}

int main() {
    vector<int> arr = {2,0,2,1,1,0};
    vector<int> ans = sortarray(arr);
    for(int x : ans) cout << x << " ";
}
