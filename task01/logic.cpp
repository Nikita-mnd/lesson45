#include "main.h"
bool find_local_min(int* m, int size) {

	for (int i = 0; i <= size; i++) {
		if (i == 0) {
			if (m[i] < m[i + 1]) {
				return true;
			}
		}
		if (i == size) {
			if (m[i] < m[i - 1]) {
				return true;
			}
		}

		if (m[i - 1] > m[i] && m[i + 1] > m[i]) {
			return true;
		}

	}

	return false;
}

bool find_local_max(int* m, int size) {

	for (int i = 0; i <= size; i++) {
		if (i == 0) {
			if (m[i] > m[i + 1]) {
				return true;
			}
		}
		if (i == size) {
			if (m[i] > m[i - 1]) {
				return true;
			}
		}

		if (m[i - 1] < m[i] && m[i + 1] < m[i]) {
			return true;
		}

	}

	return false;
}