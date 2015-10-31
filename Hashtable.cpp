#include <iostream>
#include <string>
#include <unordered_map>

int main(void)
{
	std::string input;
	std::unordered_map<std::string, float> HashTable = {
		{"Monday", 0.1},
		{"Tuesday", 6.5},
		{"Wednesday", 2.9},
		{"Thrusday", 3.7},
		{"Friday", 5.9},
		{"Saturday", 9.8},
		{"Sunday", 7.1} };

	std::cout << "Enter a day of the week: ";
	std::getline(std::cin, input);

	std::unordered_map<std::string, float>::const_iterator found = HashTable.find(input);

	if (found == HashTable.end())
		std::cout << "not found";
	else
		std::cout << found->first << " ID is: " << found->second << std::endl;

	return 0;
}