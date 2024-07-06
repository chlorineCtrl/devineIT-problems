#include <iostream>
#include <cstdio>
using namespace std;

const int MAXN = 15;

double f[MAXN][1 << MAXN];
int n,m;

int main(){
    cin >> n >> m;
    f[0][0] = 1.0;
    for(int i = 1; i <=n; i++){
        for(int j = 0; j< (1<<n); j++){
            int cnt = 0;
            for( int k = 0; k < n; k++){
                if(j &amp; (1 << k)) cnt++;
            }
            if(cnt <= i - m - 1){
                f[i][j] += f[i-1][j] * (i - cnt - 1);
            }else {
                for(int k = 0; k <n; k++){
                    if(j &amp;(1 << k )){
                        f[i][j] += f[i-1][j ^ (1 << k)];
                    }
                }
            }
            f[i][j] /= i;
        }
    }
    printf("%.10lf\n",f[n][(1 << n) - 1]);
    return 0;
}
