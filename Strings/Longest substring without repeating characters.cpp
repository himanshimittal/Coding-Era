#include<iostream>
using namespace std;
void substring(string s){
    int j=0,maxi=0,count =0;
    vector<int> v(256,0);
    for(int i=0;i<s.length();i++){
        v[s[i]]++;
        while(v[s[i]]>1){
            v[s[j]]--;
            j++;
        }
        maxi = max(maxi,i-j+1);
    }
    cout<<maxi<<endl;
}
int main(){
    string s = "abcabcabc";
    substring(s);
    return 0;
}