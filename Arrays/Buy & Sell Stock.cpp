//Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

#include <iostream>
using namespace std;
int sellBuy(vector<int>& p){
    int n = p.size();
    int mini = p[0];
    int maxi = 0;
    for(int i = 0; i < n; i++){
        if(p[i]<mini){
            mini = p[i];
        }
        maxi = max(maxi, p[i]-mini);
    }
    return maxi;
}
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout<<sellBuy(prices)<<endl;
    return 0;
}