#include <iostream>
#include <vector>

int main() {
	std::vector<int> test{ 10 };

	for (int i = 0; i < test.size(); i++) {
		std::cout << test[i] << std::endl;
	}

	std::cout << (size(test)) << std::endl;

	return 0;
}