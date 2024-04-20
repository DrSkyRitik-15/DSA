#include <iostream>
#include <vector>
#include <stack> // Include the stack library for DFS

using namespace std;

vector<bool> v;
vector<vector<int>> g;

void dfs(int b) {
    stack<int> s; // Use a stack for DFS
    s.push(b);
    v[b] = true;

    cout << "\n\nThe DFS Traversal is: ";

    while (!s.empty()) {
        int a = s.top();
        s.pop();

        for (auto j : g[a]) {
            if (!v[j]) {
                v[j] = true;
                s.push(j);
            }
        }
        cout << a << " ";
    }
}

void makeEdge(int a, int b) {
    g[a].push_back(b);
}

int main() {
    cout << "\n\nWelcome to Studytonight! :-)\n\n";
    cout << "Program to demonstrate the Depth First Search Algorithm in C++\n\n";

    int n, e;
    cout << "Enter the number of vertices: ";
    cin >> n;

    cout << "\nEnter the number of edges: ";
    cin >> e;

    v.assign(n, false);
    g.assign(n, vector<int>());

    int a, b;
    cout << "\nEnter the edges with source and target vertices:\n";
    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        makeEdge(a, b);
    }

    for (int i = 0; i < n; i++) {
        if (!v[i]) {
            dfs(i);
        }
    }

    cout << "\n\n";
    return 0;
}
