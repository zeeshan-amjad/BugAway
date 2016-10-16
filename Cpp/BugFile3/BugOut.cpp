//programm to implement circular queue class
#include<iostream>
#define MIN -9999999
using namespace std;
class Queue{
	int* m_data;
	int m_front,m_rear;
	int m_size;
public:
	Queue(int size){
		m_data=new int[size];
		m_front=-1;
		m_rear=-1;
		m_size=size;
		for(int i=0;i<size;i++)
			m_data[i]=MIN;
		}
	void add(int num){
		if(m_front==-1&&m_rear==-1){
			m_front=0;
			m_rear=0;
			m_data[m_rear]=num;
			return;
		}
		else if(m_data[(m_rear+1)%(m_size)]!=MIN){
			cout<<"Stack Overflow\n";
			return;
		}
		else{
			m_rear=(m_rear+1)%(m_size);
			m_data[m_rear]=num;
		}
	}
	int remove(){
		if(m_data[m_front]==MIN){
			return MIN;
		}
		int num=m_data[m_front];
		m_data[m_front]=MIN;
		m_front=(m_front+1)%(m_size);
		return num;
	}
	void display(){
		int front=m_front;
		int rear=m_rear;
		while(true){
			if(m_data[front]==MIN)
				break;
			cout<<m_data[front]<<"\t";
			if(front== rear)
                                break;
			front=(front+1)%(m_size);
		}
		cout<<endl;
	}
};
 
int main(){
	Queue q(5);
	q.add(1);
	q.display();
	q.add(2);
	q.display();
	q.add(3);
	q.display();
	q.add(4);
	q.display();
	q.add(5);
	q.display();
	q.add(6);
	q.display();
	q.remove();
	q.remove();
	q.add(6);
	q.display();
	q.add(7);
	q.display();
	q.add(8);
	return 0;
}
