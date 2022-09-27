#include<iostream>
using namespace std;

int main()
{
	float d,g,s,r,p,m;
	cout<<"inggrese el valor de d=";cin>>d;
	cout<<"ingrese en valor de g=";cin>>g;
	s=d+g;
	r=d-g;
	p=d*g;
	m=d/g;
	cout<<"el resultado de la suma es"<<d<<"+"<<g<<"="<<s<<endl;
	cout<<"el resultado de la resta es"<<d<<"-"<<g<<"="<<r<<endl;
	cout<<"el resultado de la multiplicacion es"<<d<<"*"<<g<<"="<<p<<endl;
	cout<<"el resulado de la divicion es"<<d<<"/"<<g<<"="<<m<<endl;
	return 0;
}

