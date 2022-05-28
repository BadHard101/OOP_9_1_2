#include <stdlib.h>
#include <stdio.h>
#include "Bitholder.h"
#include <iostream>
#include <bitset>
#include <vector>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;
int main()
{
	vector<Bitholder> bits;

	int amount, address1, address2, result = 0, a;
	char op;
	string elem, pattern;
	bitset<8> activeBits;

	cin >> amount;

	for (int i = 0; i < amount; i++) {
		cin >> elem >> pattern;
		bits.push_back(Bitholder(elem, pattern));
	}

	while (!cin.eof()) {

		cin >> address1 >> op >> address2;
		activeBits = bits[address1 - 1].pattern & bits[address2 -
			1].pattern;
		for (int i = 0; i < 8; i++) {

			if (activeBits[i] == true) {

				if (op == '&')
					bits[address1 - 1].elem[i] =
					bits[address1 - 1].elem[i] & bits[address2 - 1].elem[i];

				if (op == '|')
					bits[address1 - 1].elem[i] =
					bits[address1 - 1].elem[i] | bits[address2 - 1].elem[i];
			}
		}
	}

	for (int i = 0; i < 8; i++) {
		result += bits[address1 - 1].elem[i] * pow(2, i);
	}


	cout << setfill('0') << setw(2) << uppercase << hex << result;

	return(0);
}
