#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(const vector<string>& strings,
                            const vector<string>& queries) {
    unordered_map<string, int> frequency;

    for (const string& s : strings)
        ++frequency[s];

    vector<int> answer;
    answer.reserve(queries.size());

    for (const string& q : queries)
        answer.push_back(frequency[q]);

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> strings(n);
    for (string& s : strings) cin >> s;

    int q;
    cin >> q;
    vector<string> queries(q);
    for (string& s : queries) cin >> s;

    for (int x : matchingStrings(strings, queries))
        cout << x << '\n';

    return 0;
}
