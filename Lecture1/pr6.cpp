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
	int a;
	vector<int> v;
	for (;;) {
		ifile >> a;
		if (ifile.eof()) break;
		v.push_back(a);
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;
}