#include "main.h"

#include "main.h"
int local_min(int* m, int size) {
	int count=0;
	for (int i = 0; i <= size; i++) {
		if (i == 0) {
			if (m[i] < m[i + 1]) {
				count++;
			}
		}
		if (i == size) {
			if (m[i] < m[i - 1]) {
				count++;
			}
		}

		if (m[i - 1] > m[i] && m[i + 1] > m[i]) {
			count++;
		}

	}

	return count;
}

int* find_indeces_of_local_min(int* m, int size, int* count) {

	*count = local_min( m,  size);
	int* indices = new int[*count];
	int j = 0;

	if (size > 1 && m[0] < m[1]) {
		*indices = 0;
	}
	j++;
	for (int i = 0; i <= size; i++) {
		

		if (i == 0) {
			if (m[i] < m[i + 1]) {
				*(indices + j) = i;
				j++;
			}
		}
		if (i == size) {
			if (m[i] < m[i - 1]) {
				*(indices + j) = i;
				j++;
			}
		}

		if (m[i - 1] > m[i] && m[i + 1] > m[i]) {
			*(indices + j) = i;
			j++;
		}

	}
}
string find_local_max(int* m, int size) {
	string s = "";
	for (int i = 0; i <= size; i++) {
		if (i == 0) {
			if (m[i] > m[i + 1]) {
				s += to_string(i) + " ";
			}
		}
		if (i == size) {
			if (m[i] > m[i - 1]) {
				s += to_string(i) + " ";
			}
		}

		if (m[i - 1] < m[i] && m[i + 1] < m[i]) {
			s += to_string(i) + " ";
		}

	}

	return s;
}

