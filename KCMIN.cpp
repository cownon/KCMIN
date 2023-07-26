#include<bits/stdc++.h>
using namespace std;

int n, a[100000];

int trau(int result) {
    int kq = 0;
    for (int i = 1; i <= n; i++) {
        kq += (result - a[i]);
    }
    return kq;
}

int main() {
    freopen("test5.inp", "r", stdin);
    freopen("test5.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    if (n % 2 == 0) {
        if (trau(a[n/2]) > trau(a[n/2 + 1])) {
            cout << a[n/2 + 1];
        }
        else cout << a[n/2];
    }
    else cout << a[n/2 + 1];

    return 0;
}
