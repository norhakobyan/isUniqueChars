﻿#include "stdafx.h"
#include <iostream>
#include <string>
#include <bitset>




bool isUniqueChars(std::string);

int main() {
	std::string str;
	std::cout << "enter string"<<std::endl;
	std::cin >> str;
	int b = isUniqueChars(str);
	if (b == 0) {
		std::cout << "false" << std::endl;
	}
	else {
		std::cout << "true"<<std::endl;
	}
}

bool isUniqueChars(std::string str) {
	int len = str.length();
	std::bitset<32> * arrBit = new std::bitset<32>[len];
	std::bitset<32> res;
	for (int i = 0; i < len; ++i) {
		arrBit[i] = str[i];
	}
	for (int i = 0; i < len; ++i) {
		res = arrBit[i];
		arrBit[i] = arrBit[i] << 1;
		for (int j = 0; j < len; ++j) {
			if (arrBit[j] == res) {
				return false;
			}
		}
		arrBit[i] = res;
	}
	return true;
}
