#include "main.h"
#include "logic.h"
#include "util.h"

int main() {

	int* pointer;
	int size;
	cout << "input size of array: ";
	cin >> size;
	pointer = new int[size];

	init(pointer, size, -10, 10);

	string s = convert(pointer, size);
	cout << s << endl;

	cout << "local min: " << 
		(find_local_min(pointer, size) == true ? "true" : "false") << endl;
	cout << "local max: "
		<< (find_local_max(pointer, size) == true ? "true" : "false") << endl;


	delete[] pointer;

	return 0;
}