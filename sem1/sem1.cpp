#include <iostream>
#include <vector>
#include <crtdbg.h>
#define CRTDBG_MAP_ALLOC

using namespace std;

class Alpatikov
{
public:
	float* f;
	Alpatikov() {
		f = new float(7.7);
	}
	Alpatikov(char ch){
		ch = 'a';
	}
	virtual ~Alpatikov() {
		delete[] f;
	}
};

class Aleksandr: public Alpatikov
{
	Aleksandr() {
		int i = 5;
	}
	Aleksandr(char ch1) {
		ch1 = '2';
	}
	~Aleksandr(){}
};
vector<Alpatikov*> Wagon;
vector<Alpatikov*> Lorry;

void fill()
{
	Alpatikov* b = new Alpatikov[5];

	for (int i = 0; i < 5; i++)
	{
		Wagon.push_back(&b[i]);
	}

	delete[] b;
}

int main()
{
	fill();

	for (int i = 0; i < 5; i++)
	{
		Lorry.push_back(Wagon[i]);
	}
	Lorry.clear();
	Wagon.clear();
	_CrtDumpMemoryLeaks();
	return 0;
}