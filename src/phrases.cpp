#include <iostream>
#include <fstream>
//#include <ofstream>
#include "phrases.h"


phrases::phrases()
{
    //ctor
}

phrases::~phrases()
{
    //dtor
}
void phrases::salute()
{

}
std::string phrases::exist()
{
    std::ifstream myfile ("phrases.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            apr.append(line+"\n");
        }
        myfile.close();
    }
    return apr;
}
void phrases::addphrase(std::string add)
{
    last = add;
    valor = add+"\n";
    std::ofstream myfile ("phrases.txt",std::ios::app);
    if (myfile.is_open())
    {
        myfile << valor;
        myfile.close();
    }

}
std::string phrases::lastphrase()
{
    return last;
}
void phrases::meaning(std::string sig)
{
    mean = sig+"\n";
    std::ofstream myfile ("mean.txt",std::ios::app);
    if (myfile.is_open())
    {
        myfile << mean;
        myfile.close();
    }
}
