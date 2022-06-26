#include <iostream>

using namespace std;

uint32_t reverseBits(uint32_t n) {
	uint32_t ret = 0;

	for (int i = 0; i < 32; i++) {
		uint32_t leastSig = n & 1;
		n = n >> 1;
		ret += leastSig;

		if (i != 31) {
			ret = ret << 1;
		}
	}

	return ret;
}

int main()
{
	uint32_t n = 4294967293;

	cout << reverseBits(n);

	return 0;
}