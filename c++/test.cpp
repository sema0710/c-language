#include <iostream>

namespace A{
	void function(){
		std::cout << "A가 정의 한 함수" <<std::endl;
	}
}

namespace B{
	void function(){
		std::cout << "B가 정의 한 함수" <<std::endl;	
	}
}
int main(){
	A::function();
	B::function();
	return 0;
}
