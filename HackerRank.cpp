#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>


// #include<bits/stdc++.h>

void stringStream() {
	int start;
	int pos;
	std::string delimiter = ",";

	std::string str;
	getline(std::cin, str);
	std::vector<int> v;
	pos = str.find(delimiter);
	std::string temp;
	while (pos >= 0) {
		temp = str.substr(0, pos);
		v.push_back(std::stoi(temp));
		str.erase(0, pos + delimiter.size());
		pos = str.find(delimiter);
	}
	// if (pos == -1) {
	v.push_back(std::stoi(str));
	// }

	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << "\n";
	}

}

void Strings() {
	std::string str1, str2;
	int str1len, str2len;

	getline(std::cin, str1);
	getline(std::cin, str2);

	str1len = str1.length();
	str2len = str2.length();

	std::cout << str1len << " " << str2len << std::endl;

	std::string concatString = str1 + str2;

	std::cout << concatString << std::endl;

	char start1 = str1[0];
	char start2 = str2[0];

	str1[0] = start2;
	str2[0] = start1;

	std::cout << str1 << " " << str2;
}

void vectorSort() {
	std::vector<int> v;

	int max = 0;
	std::cin >> max;
	for (int i = 0; i < max; i++) {
		int data;
		std::cin >> data;

		v.push_back(data);
	}
	sort(v.begin(), v.end());

	for (auto data : v) {
		std::cout << data;
	}
}

void vectoreErase() {
	int max, indexToErase, from, thru;
	int diff;
	std::vector<int> v;

	std::cin >> max;
	for (int i = 0; i < max ; i++) {
		int data;
		std::cin >> data;
		v.push_back(data);
	}

	std::cin >> indexToErase;
	v.erase(v.begin() + (indexToErase - 1));

	std::cin >> from >> thru;

	v.erase(v.begin() + (from - 1), v.begin() + (thru - 1));

	diff = max - v.size();

	std::cout << diff << std::endl;

	for (auto numb : v) {
		std::cout << numb << " ";
	}

}
void lowerBoundSTLSearch(std::vector<int> arr, int x) {
	// std::cout<<x<<" - ";
	// std::cout<<arr.size()<<std::endl;
	for (int i = 0; i < arr.size(); i++) {
		// std::cout<<i<<"-"<<arr[i]<<" ";
		if (x == arr[i]) {
			// std::cout<<"sama "+ std::to_string(i);
			std::cout << "Yes " + std::to_string(i + 1);
			break;
		} else if (x <= arr[i]) {
			// std::cout<<"max "+ std::to_string(i);
			std::cout << "No " + std::to_string(i + 1);
			break;
		}
	}
	std::cout << std::endl;
}
void lowerBoundSTL() {
	int size, query;
	std::vector<int> v;
	std::cin >> size;
	for (int i = 0 ; i < size; i++) {
		int data;
		std::cin >> data;
		v.push_back(data);
	}

	// for (auto d : v) {
	// 	std::cout << d << " ";
	// }

	std::cin >> query;
	int target[query];
	for (int i = 0; i < query; i++)
	{
		int x;
		std::cin >> x;
		target[i] = x;
	}

	// std::cout << std::endl;

	for (auto d : target) {
		lowerBoundSTLSearch(v, d);
	}
}

void lowerBoundSTLV2() {
	int size, query;
	std::vector<int> v;
	std::cin >> size;
	for (int i = 0 ; i < size; i++) {
		int data;
		std::cin >> data;
		v.push_back(data);
	}
	std::vector<int>::iterator low1;
	std::cin >> query;
	for (int i = 0; i < query; i++)	{
		int x;
		std::cin >> x;
		low1 = lower_bound(v.begin(), v.end(), x);
		// std::cout<<*low1<<" "<<x<<std::endl;
		if (*low1 == x) {
			std::cout << "Yes " << low1 - v.begin() + 1 << std::endl;
		} else {
			std::cout << "No " << low1 - v.begin() + 1 << std::endl;
		}
	}
}

void setSTL() {
	int query, type, data;
	std::set<int> s;
	std::cin >> query;

	for (int i = 0; i < query; i++) {
		std::cin >> type >> data;
		switch (type) {
		case 1:
			s.insert(data);
			break;
		case 2:
			s.erase(data);
			break;
		case 3:
			if (s.find(data) != s.end()) {
				std::cout << "Yes" << std::endl;
			} else {
				std::cout << "No" << std::endl;
			}
			break;
		}
	}

}

void mapSTL() {
	int query, type, mark;
	std::string name;

	std::map<std::string, int> map;
	std::map<std::string, int>::iterator it;

	std::cin >> query;
	for (int i = 0; i < query; i++)	{
		std::cin >> type;
		switch (type) {
		case 1:
			std::cin >> name >> mark;
			map[name]+=mark;
			// map.insert({name, mark});
			break;
		case 2:
			std::cin >> name;
			map.erase(name);
			break;
		case 3:
			std::cin >> name;
			if ((it = map.find(name)) != map.end()) {
				int value = it->second;
				std::cout << value << std::endl;
			} else {
				std::cout << "0" << std::endl;
			}

			break;
		}
	}
}



void onlineJ() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main()
{
	onlineJ();
	mapSTL();
	return 0;
}