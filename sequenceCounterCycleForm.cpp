#include <iostream>

using namespace std;

int sequenceCounterCycleForm(int n, int a, int b) {
	int m = 0;
	int mul = 1;
	while (a * mul <= n) {
		mul++;
		m++;
	}
	mul = 1;
	while (b * mul <= n) {
		if ((b * mul) % a != 0)
			m++;
		mul++;
	}
	return m;
}