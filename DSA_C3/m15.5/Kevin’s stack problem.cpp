#include <bits/stdc++.h>
using namespace std;

string kevinStackProblem(string &s) {
    stack<char> charStack;

    // Push each character of the string onto the stack
    for (char c : s) {
        charStack.push(c);
    }

    // Pop characters from the stack to construct the reversed string
    string reversedString = "";
    while (!charStack.empty()) {
        reversedString += charStack.top();
        charStack.pop();
    }

    return reversedString;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        string s;
        cin >> s; // Input string

        string result = kevinStackProblem(s);
        cout << result << endl;
    }

    return 0;
}

