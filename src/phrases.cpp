#include <iostream>
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
    return "carro";
}
void phrases::addphrase(std::string add)
{
    valor = add;
}
std::string phrases::lastphrase()
{
    return valor;
}
void phrases::meaning(std::string sig)
{
    std::cout << valor << " meaning "<<sig<<std::endl;
}
