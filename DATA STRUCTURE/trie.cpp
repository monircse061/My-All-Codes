#include<bits/stdc++.h>
using namespace std;

struct Trie {
    int cnt;
    Trie *path[26];

    Trie() {
        cnt = 0;
        for (int i = 0; i < 26; i++) {
            path[i] = NULL;
        }
    }
};

void insert(string s, Trie *root) {
    Trie *node = root;
    /// abc
    for (int i = 0; s[i]; i++) {
        int to = s[i] - 'a';
        if (node -> path[to] == NULL) {
            node -> path[to] = new Trie();
        }
        node = node -> path[to];
        node -> cnt++;
    }
}

int Count(string s, Trie *root) {
    Trie *node = root;
    /// abc
    for (int i = 0; s[i]; i++) {
        int to = s[i] - 'a';
        if (node -> path[to] == NULL) {
            return 0;
        }
        node = node -> path[to];
    }
    return node -> cnt;
}
void del(Trie *node)
{
    if(node==NULL)return;
    for(int i=0; i<10; i++)
    {
        del(node->path[i]);
    }
    delete(node);

}

int main() {
    Trie *root = new Trie();

    int n = 5;
    while (n--) {
        string s; cin >> s;

        insert(s, root);
    }

    while (true) {
        string s; cin >> s;
        cout << Count(s, root) << endl;
    }
}
