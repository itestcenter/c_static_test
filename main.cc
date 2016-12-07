#include <iostream>
extern int si;
void prints1();
void prints2();
void prints3();
void prints4() {
	static int si = 4;
	std::cout <<"local static int "<< si <<std::endl;
}
int	main(){
	prints1();
	prints2();
	prints3();
	prints4();
	std::cout << "extern static int " <<si <<std::endl;
}