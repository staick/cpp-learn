#include <iostream>

int main() {
	int v1 = 0, v2 = 0;
	std::cout << "Enter two num: ";
	std::cin >> v1 >> v2;

	for (;v1>v2;v1--) {
		std::cout << v1 << " ";
	}

	for (;v1<=v2;v1++) {
		std::cout << v1 << " ";
	}
	std::cout << std::endl;

	return 0;
}