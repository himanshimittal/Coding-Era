#include <iostream>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    // Step 1: Sort intervals by start time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;

    for (auto &interval : intervals) {
        // If merged list is empty OR no overlap
        if (merged.empty() || interval[0] > merged.back()[1]) {
            merged.push_back(interval);
        }
        else {
            // Overlap → merge
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }

    return merged;
}

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = mergeIntervals(intervals);

    for (auto &v : ans) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }

    return 0;
}
