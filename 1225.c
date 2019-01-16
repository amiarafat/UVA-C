#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
using namespace std;

int main() {
	int T, N, n[10];
	cin >> T;
	while (T-- && cin >> N) {
		stringstream s;
		while (N--) s << (N + 1);
		memset(n, 0, sizeof n);
		for (size_t c = 0; c < s.str().length(); c++)
			n[s.str()[c] - '0']++;
		for (int i = 0; i < 10; i++) {
			cout << n[i];
			if (i!=9) cout << " ";
		}
		cout << endl;
	}
	return 0;
}
