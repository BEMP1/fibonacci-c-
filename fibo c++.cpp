#include <iostream>
using namespace std;

int fibo(int num){
	
	if(num==0)
		return num;
	if(num==1)
		return num;
	
	return fibo(num-1)+fibo(num-2);
	
}

int main(int argc, char *argv[]) {
	int num;
	cout<<"ingrese sucesiones";
	cin>>num;
	cout<<fibo(num);
	return 0;
}


