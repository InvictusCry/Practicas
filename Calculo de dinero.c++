#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;
void main ()
{
	float d, v, c, z;
	double t;
	cout<<"Ingrese la cantidad de billetes de 10"<<endl;
	cin>>d;
	cout<<"Ingrese la cantidad de billetes de 20"<<endl;
	cin>>v;
	cout<<"Ingrese la cantidad de billetes de 50"<<endl;
	cin>>c;
	cout<<"Ingrese la cantidad de billetes de 100"<<endl;
	cin>>z;
	
	t=((d*10)+(v*20)+(c*50)+(z*100));

	cout<<"La cantidad de dinero que posee es : "<<t<<"Bs";

	getch ();

}
