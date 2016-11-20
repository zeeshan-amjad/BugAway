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
	friend ostream& operator<<(ostream& out,Cents& c);
};
ostream& operator<<(ostream& out,Cents& c){
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
		return(Cents(m_dollars*100));
	}
};
void printCents(Cents& c){	//evaluates to Cents &c = Cents(d.m_dollars*100), hence assigning rvalue to nonconst reference (check this: http://stackoverflow.com/questions/8293426/error-invalid-initialization-of-non-const-reference-of-type-int-from-an-rval)
	cout<<c<<endl;
}
int main(){
	Dollars d(9);
	Cents c(9);
	printCents(d);
	return 0;
}
