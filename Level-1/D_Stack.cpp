#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    stack<int> st;

    while (q--) {
        string s;
        cin >> s;

        if (s == "top") cout << st.top() << endl;
        else if (s == "push") {
            int x;
            cin >> x;
            st.push(x);
        } 
        else st.pop();
    }
    return 0;
}
