#ifndef BITHOLDER_H
#define BITHOLDER_H
#include <bitset>
#include <sstream>
using namespace std;
class Bitholder {

public:
	bitset<8> elem;
	bitset<8> pattern;

	int number;

	void operator&(Bitholder second);
	void operator|(Bitholder second);

	Bitholder(string elem, string pattern);
};
#endif