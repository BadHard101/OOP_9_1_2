#include "Bitholder.h"


Bitholder::Bitholder(string elem, string pattern) {
	int a, b;

	istringstream(elem) >> hex >> a;
	istringstream(pattern) >> hex >> b;

	this->elem = a;
	this->pattern = b;
}
void Bitholder::operator&(Bitholder second) {

	for (int i = 0; i < 8; i++) {
		if (this->elem[i] == second.elem[i] == 1)
			this->elem[i] == true;
		else
			this->elem[i] == false;
	}
}
void Bitholder::operator|(Bitholder second) {

	for (int i = 0; i < 8; i++) {
		if (this->elem[i] == 1 || second.elem[i] == 1)
			this->elem[i] == true;
		else
			this->elem[i] == false;
	}
}