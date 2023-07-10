#include <iostream>


typedef void(*func)(void);

class BaseClass{
	public: 
	BaseClass(std::string name, func pFunc): toBeModifiedFunc(pFunc), m_name(name){};
	BaseClass(std::string name) : m_name(name), toBeModifiedFunc(&BaseClass::printClass) {}
	~BaseClass() = default;
	
	static void printClass() { std::cout << " Base Class!" << std::endl;}

	void PassFunc(func pFunc);
	void Clock();
	private:
	std::string m_name;
	func toBeModifiedFunc;
};


class DerivedClass : public BaseClass{
	public:
	DerivedClass(std::string name) : BaseClass(name, &DerivedClass::printClass) {}
	static void printClass() { std::cout << "Derived Class!" << std::endl; }
};
