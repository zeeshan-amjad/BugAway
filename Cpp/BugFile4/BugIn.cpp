#include <iostream>
using namespace std;
//Definition of the class
class Point{
//Member variables
	int m_x,m_y,m_z;
public:
//Constructor
	Point(int x=0,int y=0,int z=0){
		m_x=x;
		m_y=y;
		m_z=z;
	}
//Overloading + operator
	friend Point operator+(const Point &p1,const Point &p2);
//Overloading << operator
	friend ostream& operator<<(const ostream &out,const Point p);
};
//Function definition of the overloaded operator
Point operator+(const Point &p1,const Point &p2){
	Point p(p1.m_x+p2.m_x,p1.m_y+p2.m_y,p1.m_z+p2.m_z);
	return p;
}
//Function definition of the overloaded << operator
ostream& operator<<(const ostream& out,const Point &p){
	out<<"("<<p.m_x<<","<<p.m_y<<","<<p.m_z<<")";
	return out;
}
int main(){
	Point p1(4,5);
	Point p2;
	Point p3(p1+p2);
	Point p4=p1+p3;
	cout<<"P1 is"<<p1<<endl;
	cout<<"P4 is"<<p1+p3<<endl;
	cout<<"P4 is"<<p4<<endl;
}
