#include <iostream>

namespace A{
	void function(){
		std::cout << "A�� ���� �� �Լ�" <<std::endl;
	}
}

namespace B{
	void function(){
		std::cout << "B�� ���� �� �Լ�" <<std::endl;	
	}
}
int main(){
	A::function();
	B::function();
	return 0;
}
