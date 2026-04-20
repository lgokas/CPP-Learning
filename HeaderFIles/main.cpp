#include <iostream>
#include <string>
#include "ConcatWords.h"


int main() {

	std::string firstWord { "Hello" };
	std::string secondWord{ "world" };

	std::string combinedWords = concatWords(firstWord, secondWord);

	std::cout << combinedWords << std::endl;

	return 0;
}