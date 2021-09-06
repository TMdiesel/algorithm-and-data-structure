#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node *next;
    string name;
    // constructor
    Node(string name_ = "") : next(NULL), name(name_) {}
};

// global variable
Node *nil;

void init() {
    nil = new Node();
    nil->next = nil;
}

void printList() {
    Node *cur = nil->next;
    for(; cur != nil; cur = cur->next) {
        cout << cur->name << " ";
    }
    cout << endl;
}

// ポインタ渡し
void insert(Node *v, Node *p = nil) {
    v->next = p->next;
    p->next = v;
}

int main() {
    init();
    vector<string> names = {"yamamoto", "ito", "sato"};

    for(int i = 0; i < (int)names.size(); i++) {
        Node *node = new Node(names[i]);
        insert(node);
        cout << "step" << i << ":";
        printList();
    }
}
