#include "main.h"


void init(int* m, int size, int a, int b) {

	for (int i = 0; i <= size; i++) {
		m[i] = rand() % (b - a + 1) + a;
	}

}

string convert(int* m, int size) {

	string s = "";

	for (int i = 0; i <= size; i++) {

		s += to_string(m[i]) + " ";

	}
	return s;
}