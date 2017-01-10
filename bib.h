#include <iostream>
#include <vector>
using namespace std;
struct planop
{
    string namep,tip;
    bool dostup;
};

//bool cstoi(string s,unsigned int *r);
void zapnd(vector<planop>* baza);
void printbase(vector<planop>* baza);
