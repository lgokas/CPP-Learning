#include <iostream>
#include <string>

std::string concatWords(std::string& word1, std::string& word2) {
	const std::string combinedWord{ word1 + " " + word2 };

	return combinedWord;
}