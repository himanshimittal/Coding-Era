#include <iostream>
#include <vector>
using namespace std;

int compressed(vector<char>& str) {
    int i = 0, res = 0;
    
    while (i < str.size()) {
        char current = str[i];
        int groupLength = 1;

        // Count group size
        while (i + groupLength < str.size() && str[i + groupLength] == current) {
            groupLength++;
        }

        // Write character
        str[res++] = current;

        // Write groupLength if > 1
        if (groupLength > 1) {
            string count = to_string(groupLength);
            for (char c : count) {
                str[res++] = c;
            }
        }

        i += groupLength;  
    }
    return res;
}

int main() {
    vector<char> str = {'a','a','b','b','c','c','c'};
    int newSize = compressed(str);

    cout << "New size: " << newSize << endl;
    cout << "Compressed array: ";
    for (int i = 0; i < newSize; i++) {
        cout << str[i] << " ";
    }
    cout << endl;

    return 0;
}
