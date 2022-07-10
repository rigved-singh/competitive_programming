#include <bits/stdc++.h>

using namespace std;

const int N = 300009;

int n;
int a[N];
long long res[N];

int main() {
	long long sum = 0;
	scanf("%d", &n);	
	for(int i = 0; i < n; ++i){
		scanf("%d", a + i);
		sum += a[i];	
	}
	sort(a, a + n);
	
	memset(res, -1, sizeof res);
	int m;
	scanf("%d", &m);
	for(int i = 0; i < m; ++i){
		int c;
		scanf("%d", &c);
		if(res[c] == -1){
			res[c] = sum - a[n - c];
		}	

		printf("%lld\n", res[c]);
	}
	return 0;
}
