#include <iostream>
#include <string>
#include <vector>


void splitStringByDelimiter(){
	int start;
	int pos;
	std::string delimiter = ",";

	std::string str;
	getline(std::cin, str);

	pos = str.find(delimiter);

	while (pos >= 0) {
		std::cout << str.substr(0, pos);
		str.erase(0, pos + delimiter.size());
		pos = str.find(delimiter);
		if (pos == -1) {
			pos = str.find(delimiter);
		}
		std::cout << std::endl;
	}
}

void nposInCpp(){
	std::string str = "string";
	std::cout<<std::endl;
	//not found will return npos
	std::cout<<"not found return function find : "<<std::endl;
	std::cout<<str.find("z")<<std::endl;

	//actual npos
	std::cout<<"n pos :	"<<std::endl;;
	std::cout<<std::string::npos;	
}

int main(int argc, char const *argv[])
{

	return 0;
}