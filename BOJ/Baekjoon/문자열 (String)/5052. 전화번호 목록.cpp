#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Trie {
    struct Node {
        int children[10];
        Node() {
            fill(children, children + 10, -1);
        }
    };

    vector<Node> trie;

    int root;
    int init() {
        Node x;
        trie.push_back(x);
        return (int)trie.size() - 1;
    }
    Trie() { root = init(); }

    void add(int node, string& s, int i) {
        if (i == s.length())
            return;
        int c = s[i] - '0';
        if (trie[node].children[c] == -1) {
            int next = init();
            trie[node].children[c] = next;
        }
        int child = trie[node].children[c];
        add(child, s, i + 1);
    }
    void add(string& s) { add(root, s, 0); }
    bool search(int node, string& s, int i) {
        if (node == -1) {
            add(s);
            return 0;
        }
        if (i == s.length())
            return 1;
        int c = s[i] - '0';
        int child = trie[node].children[c];
        return search(child, s, i + 1);
    }
    bool search(string& s) { return search(root, s, 0); }
};

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Trie trie;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        bool ans = 0;
        trie.add(v[0]);

        for (int i = 1; i < n; i++) {
            if (trie.search(v[i]))
                ans = 1;
        }
        cout << (ans ? "NO" : "YES") << '\n';
    }
    return 0;
}