﻿#include "stdafx.h"
#include <iostream>
#include <string>

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
	int * ch = new int[len];
	int res;
	for (int i = 0; i < len; ++i) {
		ch[i] = str[i];
	}
	for (int i = 0; i < len; ++i) {
		res = ch[i];
		ch[i] = 1;
		for (int j = 0; j < len; ++j) {
			if (ch[j] == res) {
				return false;
			}
		}
		ch[i] = res;
	}
	return true;
}
