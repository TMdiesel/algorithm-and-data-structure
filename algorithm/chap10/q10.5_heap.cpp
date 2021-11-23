#include <bits/stdc++.h>
using namespace std;

struct Heap {
    vector<int> heap;
    Heap() {}

    void push(int x) {
        heap.push_back(x);
        int i = (int)heap.size() - 1;
        while(i > 0) {
            int p = (i - 1) / 2;
            if(heap[p] >= x)
                break;
            heap[i] = heap[p];
            i = p;
        }
        heap[i] = x;
    }

    int top() {
        if(!heap.empty()) {
            return heap[0];
        } else {
            return -1;
        }
    }

    void pop() {}
};

int main() {
    Heap h;
    h.push(5);
    h.push(3);
    h.push(7);
    h.push(1);
    cout << h.top() << endl;
}
