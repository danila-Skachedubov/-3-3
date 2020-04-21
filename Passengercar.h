#ifndef PASSENGERCAR_H_INCLUDED
#define PASSENGERCAR_H_INCLUDED
#include <iostream>
using namespace std;
class passengercar:public car
{
public:
passengercar();
passengercar(int number, int speed, string model);
string get_model() const override;
void print()const override;
void operator=(passengercar& obj);
};


#endif // PASSENGERCAR_H_INCLUDED
