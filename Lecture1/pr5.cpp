#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char* argv[])
{
	ifstream ifile;
	ifile.open("myfile.txt");
	string s0, s1;
	for (;;) {
		ifile >> s0;
		if (ifile.eof()) break;
		s1 += s0 + "\n";
	} 
	std::cout << s1;
	return 0;
}