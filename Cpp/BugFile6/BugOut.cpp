#include <iostream>
#include <math.h>
#include <string>
using namespace std;
double squareRoot(double no){
	try{
		if(no<0)
			throw("Number is negative\n");
		return sqrt(no);
	}
	catch(char const* Exception ){
		cout << Exception << "Exit status: "; 
		size_t status_indicator = 42;
		return (status_indicator);	//error indicator returned
	}
}
int main(){
	cout<<squareRoot(9)<<endl;
	cout<<squareRoot(-1)<<endl;
	return 0;
}
