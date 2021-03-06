#include "stdafx.h"
#include <iostream>
#include <string>

bool isUniqueChars(std::string);

int main() {
	std::string str;
	std::cout << "enter unique string" << std::endl;
	std::cin >> str;
	if (isUniqueChars(str) == 0) {
		std::cout << "false" << std::endl;
	}
	else {
		std::cout << "true" << std::endl;
	}
}

bool isUniqueChars(std::string str) {
	int res = 0;
	int len = str.length();
	for (int i = 0; i < len; ++i) {
		int mid = str[i] - 97;
		if (res & (1 << mid)) {
			return false;
		}
		else {
			res = res | (1 << mid);
		}
	}
	return true;
}