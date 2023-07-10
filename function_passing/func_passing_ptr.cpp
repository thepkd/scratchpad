#include "func_passing_templates.h"


int main(){
	BaseClass base{"BaseTest"};
	base.Clock();
	
	return 0;
}

void BaseClass::PassFunc(func pFunc){
	pFunc();
}

void BaseClass::Clock(){
	PassFunc(toBeModifiedFunc);
}
