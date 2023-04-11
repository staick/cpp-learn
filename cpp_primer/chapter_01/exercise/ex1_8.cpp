#include <iostream>

int main() {
	// std::cout << "/*";  // pass
	// std::cout << "*/";  // pass
	// std::cout << /* "*/" */;  // error
	std::cout << /* "*/" /* "/*" */;  // pass

	return 0;
}
