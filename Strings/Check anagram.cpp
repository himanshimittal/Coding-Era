#include<iostream>
using namespace std;
bool anagram_1(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    vector<int> v(256,0);
    for(int i = 0;i < s1.length();i++){
        v[s1[i]-'0']++;
    }
    for(int i = 0;i < s2.length();i++){
        v[s2[i]-'0']--;
        if(v[s2[i]-'0']<0){
            return false;
        }
    }
    return true;
}
bool anagram_2(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1==s2;
}
int main(){
    string s1 = "himanshi";
    string s2 = "himanshi";
    string s3 = "himnshi";
    cout<<anagram_1(s1,s2)<<endl;
    cout<<anagram_1(s1,s3)<<endl;
    cout<<anagram_2(s1,s2)<<endl;
    cout<<anagram_2(s1,s3)<<endl;
    return 0;
}