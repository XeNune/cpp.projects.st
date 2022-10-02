#include<iostream>
#include<fstream>
#include<string>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include <crtdbg.h>
#define _CRTDBG_MAP_ALLOC
using namespace std;

class Parent 
{
public:
    float* c;
    int *i;
    Parent()
    {
        c = new float(5.1);
    };
    Parent* copy() { return new Parent(*this); }

    //Parent(const Parent& obj_for_copy) : i(new int) { *i = *obj_for_copy.i; }

    virtual ~Parent()   
    {
        delete c;
    }
};

class Child : public Parent 
{
public:
    Child()
    {
    }
    Parent* copy() { return new Child(*this); }

    //Child(const Child& obj_for_copy) :Parent(obj_for_copy) {   }
    ~Child() { }
};

//void start_destruct() 
//{
//    Parent clear;
//}

int main()
{
    vector<Parent*> Obj1;
    vector<Parent*> Obj2;

    Parent* o1 = new Parent;
    Parent* o2 = new Parent;
    Parent* o3 = new Parent;
    Parent* o4 = new Parent;
    Parent* o5 = new Child;
    Parent* o6 = new Child;
    Parent* o7 = new Child;
    Parent* o8 = new Child;

    Obj1.push_back(o1);
    Obj1.push_back(o2);
    Obj1.push_back(o3);
    Obj1.push_back(o4);
    Obj1.push_back(o5);
    Obj1.push_back(o6);
    Obj1.push_back(o7);
    Obj1.push_back(o8);

    for (vector <Parent*>::iterator it = Obj1.begin(); it != Obj1.end(); ++it) 
    {
        Parent* new_obj = (*it)->copy();
        Obj2.insert(Obj2.end(), new_obj);
    }

   /* for (int i = 0; i < Obj1.size(); i++)
    {
        start_destruct();
    }*/

    Obj1.clear();
    Obj2.clear();
    delete o1;
    delete o2;
    delete o3;
    delete o4;
    delete o5;
    delete o6;
    delete o7;
    delete o8;

    _CrtDumpMemoryLeaks();
    return 0;
}