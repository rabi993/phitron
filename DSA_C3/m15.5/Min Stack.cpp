
#include <bits/stdc++.h>
using namespace std;

class minStack {
private:
    stack<pair<int, int>> st;  // Pair of current element and minimum element so far

public:
    // Constructor
    minStack() {}

    // Function to add another element equal to num at the top of the stack.
    void push(int num) {
        if (st.empty()) {
            st.push({num, num});
        } else {
            int currentMin = st.top().second;
            st.push({num, min(num, currentMin)});
        }
    }

    // Function to remove the top element of the stack.
    int pop() {
        if (st.empty()) {
            return -1;
        } else {
            int poppedElement = st.top().first;
            st.pop();
            return poppedElement;
        }
    }

    // Function to return the top element of stack if it is present. Otherwise return -1.
    int top() {
        if (st.empty()) {
            return -1;
        } else {
            return st.top().first;
        }
    }

    // Function to return minimum element of stack if it is present. Otherwise return -1.
    int getMin() {
        if (st.empty()) {
            return -1;
        } else {
            return st.top().second;
        }
    }
};

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int testSteps;
        cin >> testSteps;

        minStack ms;

        while (testSteps--) {
            int operation;
            cin >> operation;

            switch (operation) {
                case 1: {
                    int num;
                    cin >> num;
                    ms.push(num);
                    break;
                }
                case 2: {
                    int popped = ms.pop();
                    cout << popped << " ";
                    break;
                }
                case 3: {
                    int topElement = ms.top();
                    cout << topElement << " ";
                    break;
                }
                case 4: {
                    int minElement = ms.getMin();
                    cout << minElement << " ";
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}

