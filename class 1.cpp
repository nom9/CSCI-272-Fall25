#include <iostream>
double divide()
{
	double num1, num2;
	std::cout <<"enter first \n";
	std::cin>> num1;
	
	std::cout <<"enter second\n";
	std::cin>> num2;
	
	double quotient = num1/num2 ;
	return quotient;
	
}
int main()
{
	std::cout << divide();
	
	return 0;
}