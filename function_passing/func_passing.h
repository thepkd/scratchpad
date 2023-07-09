#include <iostream>
#include <functional>
void printClassGlobal() { std::cout << "Outside Class!" << std::endl; }

class BaseClass{
	public: 
	BaseClass(std::string name, std::function<void(void)> func): toBeModifiedFunc(func), m_name(name){};
	BaseClass(std::string name) : m_name(name), toBeModifiedFunc(&BaseClass::printClass) {}
	~BaseClass() = default;
	
	static void printClass() { std::cout << " Base Class!" << std::endl;}

	void PassFunc(std::function<void(void)> func);
	void Clock();
	private:
	std::string m_name;
	std::function<void(void)> toBeModifiedFunc;
};


class DerivedClass : public BaseClass{
	public:
	DerivedClass(std::string name) : BaseClass(name, &DerivedClass::printClass) {}
	static void printClass() { std::cout << "Derived Class!" << std::endl; }
};
