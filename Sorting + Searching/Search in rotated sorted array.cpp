#include<iostream>
#include<vector>
using namespace std;

int rotated(vector<int> v, int target) {
    int i = 0, j = v.size() - 1;

    while (i <= j) {
        int mid = i + (j - i) / 2;

        if (v[mid] == target) return mid;

        // Left half sorted
        if (v[i] <= v[mid]) {
            if (v[i] <= target && target < v[mid])
                j = mid - 1;
            else
                i = mid + 1;
        }
        // Right half sorted
        else {
            if (v[mid] < target && target <= v[j])
                i = mid + 1;
            else
                j = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> v = {4,5,6,7,8,9,0,1,2};
    cout << rotated(v, 9) << endl;  // Output: 5
    return 0;
}
