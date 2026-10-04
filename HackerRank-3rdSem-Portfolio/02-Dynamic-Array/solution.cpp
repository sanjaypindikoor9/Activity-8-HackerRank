#include <bits/stdc++.h>
using namespace std;

vector<int> dynamicArray(int n, const vector<vector<int>>& queries) {
    vector<vector<int>> seq(n);
    int lastAnswer = 0;
    vector<int> answers;

    for (const auto& q : queries) {
        int type = q[0], x = q[1], y = q[2];
        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            seq[idx].push_back(y);
        } else {
            lastAnswer = seq[idx][y % seq[idx].size()];
            answers.push_back(lastAnswer);
        }
    }
    return answers;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<vector<int>> queries(q, vector<int>(3));

    for (auto& query : queries)
        cin >> query[0] >> query[1] >> query[2];

    for (int answer : dynamicArray(n, queries))
        cout << answer << '\n';

    return 0;
}
