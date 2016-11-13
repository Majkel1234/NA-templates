#include <iostream>

extern void fun1(int&);
extern void fun2(int&);

int main(){
	int value;
	std::cout<<"Hey, here is 'main' function.\nGive me a random number to test two functions: "<<std::endl;
	std::cin>>value;
	fun1(value);
	fun2(value);
	return 0;
}
	
