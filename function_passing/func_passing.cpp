#include "func_passing.h"


int main(){
	DerivedClass base{"DerivedTest"};
	base.Clock();
	
	return 0;
}

void BaseClass::PassFunc(std::function<void(void)>func){
	func();
}

void BaseClass::Clock(){
	PassFunc(toBeModifiedFunc);
}
