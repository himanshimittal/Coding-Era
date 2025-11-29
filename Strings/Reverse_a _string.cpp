#include<iostream>
using namespace std;
void reverse_1(string str){
    //Using Two-Pointer Swap
    //Works in-place (inside the function).
    //Uses two pointers moving towards each other.
    //Time: O(n), Space: O(1).
    //This is the most classic and efficient way.
    int i = 0,j = str.length()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<str<<endl;
}
void reverse_2(string str){
    //Using std::reverse (Built-in STL)
    reverse(str.begin(),str.end());
    cout<<str<<endl;
}
void reverse_3(string str){
    string rev = "";
    for(int i=str.length()-1;i>=0;i--){
        rev += str[i]; 
    }
    cout<<rev<<endl;
}
int main(){
    string s = "himanshi";
    reverse_1(s);
    reverse_2(s);
    reverse_3(s);
    return 0;
}