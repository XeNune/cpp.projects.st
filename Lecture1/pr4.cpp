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
	ofstream of;
	of.open("myfile.txt");
	for (int i = 0; i < 10; i++) {
		of << i << endl;
	}
	string s;
	s = "test";
	cout << s << endl;
	getchar();
	return 0;
}