/*
You are given an array of n integer numbers a0, a1, ..., an - 1. Find the distance between two closest (nearest) minimums in it. It is guaranteed that in the array a minimum occurs at least two times.

Input
The first line contains positive integer n (2 ≤ n ≤ 10^5) — size of the given array. The second line contains n integers a0, a1, ..., an - 1 (1 ≤ ai ≤ 10^9) — elements of the array. It is guaranteed that in the array a minimum occurs at least two times.

Output
Print the only number — distance between two nearest minimums in the array.

Sample 1
Input
2
3 3
Output
1
Sample 2
Input
3
5 6 5
Output
2
Sample 3
Input
9
2 1 3 5 4 1 2 3 1
Output
3
*/
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<long long int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minDist = INT_MAX;
    int prevMinIdx = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == a[prevMinIdx]) {
            minDist = min(minDist, i - prevMinIdx);
            prevMinIdx = i;
        } else if (prevMinIdx == -1 || a[i] < a[prevMinIdx]) {
            minDist = INT_MAX; // Reset minDist if a new minimum is found
            prevMinIdx = i;
        }
    }

    cout << minDist << endl;

    return 0;
}

