#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll N; cin >> N;
	ll M = -N;
	
	int cnt = 0;
	for (int i = 0; i < 32; i++) {
		if ((M & 1) != (N & 1)) cnt++;
		N >>= 1, M >>= 1;
	}

	cout << cnt;
}