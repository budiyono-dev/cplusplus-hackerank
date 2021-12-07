#include <iostream>
#include <vector>
#include <string>

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
		temp =str.substr(0, pos);
		v.push_back(std::stoi(temp));
		str.erase(0, pos + delimiter.size());
		pos = str.find(delimiter);
	}
	// if (pos == -1) {
	v.push_back(std::stoi(str));
	// }

    for(int i = 0; i < v.size(); i++) {
        std::cout << v[i] << "\n";
    }

}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	stringStream();
	return 0;
}