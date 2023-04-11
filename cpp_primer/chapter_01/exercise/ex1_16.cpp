#include <iostream>

int main() {
	int v=0, sum=0;
	while(std::cin >> v) {
		sum += v;
	}

	std::cout << "The sum is " << sum << std::endl;

	return 0;
}
