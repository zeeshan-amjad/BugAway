#include<iostream>
using namespace std;
class Cents {
	int m_cents;
	public:
	Cents(int cents = 0){
		m_cents=cents;
	}
	void print(){
		std::cout<<"I have "<<m_cents<<" cents\n";
	}
	friend Cents operator+ (const Cents &c1,const Cents &c2);
	int getCents(){
		return m_cents;
	}
};
Cents operator+ (const Cents &c1,const Cents &c2){
	return Cents (c1.m_cents+c2.m_cents);
}

int main(){
	Cents c1(6);
	Cents c2;
	Cents c3=c1+c2;
	c1.print();
	c2.print();
	c3.print();
	return 0;
}
