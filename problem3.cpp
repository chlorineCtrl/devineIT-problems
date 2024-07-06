#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        long long N, T;
        cin >> N >> T;

        long long target = T - 1;
        int count = 0;

        if (T == 1) {
            cout << N << endl;
            continue;
        }

        for (long long i = 1; i * i <= target; ++i) {
            if (target % i == 0) {
                if (i <= N) {
                    count++;
                }
                if (i != target / i && target / i <= N) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
