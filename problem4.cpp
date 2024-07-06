#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> pizza(N);
    for (int i = 0; i < N; ++i) {
        cin >> pizza[i];
    }


    int pepperoniCount = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (pizza[i][j] == 'P' || pizza[i][j] == 'p') {
                pepperoniCount++;
            }
        }
    }

    cout << pepperoniCount << endl;

    return 0;
}
