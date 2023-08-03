#include <iostream>

class Base {
    public:
    Base() = default;
    void DoSomething() { std::cout << "Base Class!" << std::endl;}  
};

class Derived : public Base
{
    public:
    Derived() = default;
    void DoSomething() { std::cout << "Derived Class!" << std::endl;}
};

class BaseObj
{
    public:
    BaseObj(Base& testBase) { testBase.DoSomething();};
};

class DerivObj : public BaseObj
{
    public:
        DerivObj() : BaseObj(func) { };
        Derived func;
};
