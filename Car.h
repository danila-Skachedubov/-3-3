#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include <iostream>
using namespace std;
class car: public transportVehicle
{
    protected:
    string model;

    public:
car();
car(int number,int speed,string model);
bool set_model(const string cmodel);
 virtual string get_model() const=0;
 void operator=(car& obj);
 car(const car& others);
 void print() const override;
};


#endif // CAR_H_INCLUDED
