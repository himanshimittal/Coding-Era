#include<iostream>
#include<vector>
using namespace std;

// If array is sorted
pair<int,int> twosum(vector<int> arr, int target){
    int i = 0, j = arr.size() - 1;

    while(i < j){
        int sum = arr[i] + arr[j];

        if(target == sum){
            return {i, j};
        }
        else if(sum < target){
            i++;
        }
        else{
            j--;
        }
    }
    return {-1, -1};
}

int main(){
    vector<int> v = {1, 2, 3, 4, 5};

    pair<int,int> ans = twosum(v, 3);

    cout << ans.first << " " << ans.second << endl;

    return 0;
}
