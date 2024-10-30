#include <string>
#include <iostream>

using namespace std;

int longestSubstring(string s) {
    int maxlength = 0;
    int curlength = 0;
    string curstring;
    char curChar;

    for (auto i = 0; i < s.length(); i++) {
        auto found = curstring.find(s.at(i));
        //cout << s.at(i);
        if (found != string::npos) { // if the char is found in previous substring
            cout << curstring << endl;
            curstring.erase(0, curstring.find(s.at(i)) + 1); // erase until the previous
            cout << "cur" << curstring << endl;
            curstring += s.at(i);
            curlength = curstring.length();
            cout << "now" <<curstring << endl;
        } else {
            curstring += s.at(i); // append the string
            curlength++;
        }

        if (maxlength < curlength) {
            maxlength = curlength;
        }
    }

    return maxlength;
}

int main() {
    //cout << longestSubstring("abcabcaa") << endl;
    //cout << longestSubstring("bbbbb") << endl;
    //cout << longestSubstring("abcad") << endl;
    //cout << longestSubstring("abcaa") << endl;
    //cout << longestSubstring("abaacd") << endl;

    // runtime: O(n)
    // time: 5ms

    
}