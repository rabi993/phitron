#include <bits/stdc++.h>
using namespace std;

int getFourthLargest(int arr[], int n) {
    // Write your code here.

    sort(arr, arr + n,greater<int>());

    if (n >= 4) {
        return arr[3]; // Fourth highest element
    } else {
        return INT_MIN; // There are fewer than four elements
    }
}

