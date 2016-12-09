#include <iostream>

#include "zero.h"

using namespace std;

zero::zero()
{
    nickname = "Zero";
}

zero::~zero()
{
    //dtor
}
void zero::name()
{
    cout<< nickname<<endl;
}
void zero::ask(std::string rt)
{
    cout << "What is "<<rt<<endl;
}
