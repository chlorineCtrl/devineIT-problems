#include<bits/stdc++.h>
using namespace std;

int max_permutation_difference(int n) {
    string str_n = to_string(n);

    // max permu
    string max_perm_str = str_n;
    sort(max_perm_str.begin(), max_perm_str.end(), greater<char>());
    int max_perm = stoi(max_perm_str);

    // min permu
    string min_perm_str = str_n;
    sort(min_perm_str.begin(), min_perm_str.end());
    int min_perm = stoi(min_perm_str);

    int difference = max_perm - min_perm;

    return difference;
}

int main() {
    int n;
    cin >> n;

    cout << max_permutation_difference(n) << endl;

    return 0;
}

