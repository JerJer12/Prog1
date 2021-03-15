#include "std_lib_facilities.h"

//Note to self: A class helyet struct-ot lehetett volna használni mert abban alapból minden public

class B1
{

public:

	virtual void vf() {cout<<"B1::vf()"<<endl;}
	void f() {cout<<"B1::f()"<<endl;}
	virtual void pvf() =0;



};

class D1: public B1 		//a D1 class-t a B1-ből hozzuk létre (D1 is derived from B1)
{	

public:

	void vf() override {cout<<"D1::vf()"<<endl;}	//felülírjuk vf() tartalmát
	void f() {cout<<"D1::f()"<<endl;}

};


class D2: public D1
{
	public:

	void pvf() override {cout<<"D2::pvf()"<<endl;}


};

class B2
{
public:
	virtual void pvf() =0;



};

class D21: public B2
{
public:

	string s="string";
	virtual void pvf() override {cout<< s <<endl;}


};

class D22: public B2
{
public:

	int number=12;
	virtual void pvf() override {cout<< number <<endl;}


};

void f(B2& b2ref)	//f() függvény létrehozása (definiálása)
{
	b2ref.pvf();
}


int main()
{
/*
	B1 b1;
	b1.vf();
	b1.f();

	D1 d1;
	d1.vf();
	d1.f();

	B1& ref {d1};
	ref.vf();
	ref.f();
*/

	D2 d2;
	d2.f();
	d2.vf();
	d2.pvf();

	D21 d21;
	D22 d22;
	f(d21);
	f(d22);




	return 0;
}