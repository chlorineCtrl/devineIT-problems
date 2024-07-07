#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    vector<int> freq_s(26, 0);
    vector<int> freq_t(26, 0);

    for (char ch : s) {
        freq_s[ch - 'A']++;
    }

    for (char ch : t) {
        freq_t[ch - 'A']++;
    }

    int min_letters_needed = 0;
    for (int i = 0; i < 26; ++i) {
        if (freq_t[i] > freq_s[i]) {
            min_letters_needed += freq_t[i] - freq_s[i];
        }
    }


    cout << min_letters_needed << endl;

    return 0;
}

