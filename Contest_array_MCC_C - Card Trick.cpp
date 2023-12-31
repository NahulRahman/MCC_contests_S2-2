/*
Monocarp has just learned a new card trick, and can't wait to present it to you. He shows you the entire deck of n cards. You see that the values of cards from the topmost to the bottommost are integers a1 ,a2 ,…,an, and all values are different.

Then he asks you to shuffle the deck m times. With the j-th shuffle, you should take bj topmost cards and move them under the remaining (n−bj) cards without changing the order.

And then, using some magic, Monocarp tells you the topmost card of the deck. However, you are not really buying that magic. You tell him that you know the topmost card yourself. Can you surprise Monocarp and tell him the topmost card before he shows it?

Input
The first line contains a single integer t (1≤t≤10^4) — the number of testcases.

The first line of each testcase contains a single integer n (2≤n≤2⋅10^5) — the number of cards in the deck.

The second line contains n pairwise distinct integers a1,a2,…,an (1≤ ai ≤n) — the values of the cards.

The third line contains a single integer m (1≤m≤2⋅10^5 ) — the number of shuffles.

The fourth line contains m integers b1 ,b2 ,…,bm (1≤ bj ≤n−1) — the amount of cards that are moved on the j-th shuffle.

The sum of n over all testcases doesn't exceed 2⋅10^5 . The sum of m over all testcases doesn't exceed 2⋅10^5 .

Output
For each testcase, print a single integer — the value of the card on the top of the deck after the deck is shuffled m times.

Sample 1
Input
3
2
1 2
3
1 1 1
4
3 1 4 2
2
3 1
5
2 1 5 4 3
5
3 2 1 2 1
Output
2
3
3
Note
In the first testcase, each shuffle effectively swaps two cards. After three swaps, the deck will be [2,1].

In the second testcase, the second shuffle cancels what the first shuffle did. First, three topmost cards went underneath the last card, then that card went back below the remaining three cards. So the deck remained unchanged from the initial one — the topmost card has value 3.
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int m;
        cin >> m;
        int sum = 0;
        for (int i = 0; i < m; i++) {
            int val;
            cin >> val;
            sum =sum+val;
            sum =sum%n;
        }
        cout << arr[sum] << endl;
    }
    return 0;
}
