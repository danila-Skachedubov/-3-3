#include <iostream>
#include"transportvehicle.h"
#include"Car.h"
#include"Passengercar.h"
#include"Plane.h"
#include"Ship.h"
#include"bus.h"
using namespace std;


int main()
{
setlocale(LC_ALL, "Russian");
transportVehicle ** vehicles = new transportVehicle*[5];
passengercar a(5, 100, "Kia");
a.print();
a.set_model("Reno");
//a.set_speed(99);
//a.set_number(2);
a.print();

bus b(30, 50, "Vaz");
b.print();
//b.set_model("Reno");
b.set_speed(99);
//b.set_number(2);
b.print();

plane c(80, 400, 5);
c.print();
c.set_time(10);
//c.set_speed(99);
//b.set_number(2);
c.print();

ship d(200, 45, 5000);
d.print();
d.set_displacement(8000);
//d.set_speed(99);
//b.set_number(2);
d.print();


return 0;
}
