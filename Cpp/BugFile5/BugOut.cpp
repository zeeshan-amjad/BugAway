#include <iostream>
using namespace std;
class Cents{
	int m_cents;
public:
	Cents(int cents=0){
		m_cents=cents;
	}
	Cents(const Cents& c){
		this->m_cents=c.m_cents;
	}
	operator int(){
		return m_cents;
	}
	friend ostream& operator<<(ostream& out, const Cents& c);	//making c a const reference as it ought to be
};
ostream& operator<<(ostream& out, const Cents& c){  //making c a const reference as it ought to be
	out<<c.m_cents;
	return out;
}
class Dollars{
	int m_dollars;
public:
	Dollars(int dollars=0){
		m_dollars=dollars;
	}
	operator Cents(){
		Cents x (m_dollars*100);
		return x;
	}
};
void printCents(const Cents& c){ 	//making 'c' a 'const' reference enables it to get initialized with an rvalue, debugged now :)
	cout<<c<<endl;
}
int main(){
	Dollars d(9);
	Cents c(9);
	printCents(d);
	return 0;
}
