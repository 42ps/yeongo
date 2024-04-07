#include <iostream>
#include <set>

using namespace std;

multiset<int> ms;

void operatorI(int data) {
    ms.insert(data);
}

void operatorD(int data) {
    if (ms.empty())
        return ;
    else if (data == 1)
        ms.erase(ms.find(*ms.rbegin()));
    else
        ms.erase(ms.find(*ms.begin()));
}

int main(void) {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        int k; cin >> k;
        for (int j = 0; j < k; j++) {
            char op; int n;
            cin >> op >> n;
            if (op == 'I')
                operatorI(n);
            else
                operatorD(n);
        }
        if (ms.empty())
            cout << "EMPTY\n";
        else
            cout << *(ms.rbegin()) << ' ' << *(ms.begin()) << '\n';
        ms.clear();
    }
    return 0;
}
