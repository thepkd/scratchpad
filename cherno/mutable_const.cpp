#include "mutable.h"


Test::Test(int x, int y) :
x(x),
y(y)
{}

void DoSomethinf(const Test&);

int main(){
    Test t(2,3);
    DoSomethinf(t);
}


void DoSomethinf (const Test& test){
 std::cout << test.GetX() << std::endl;
}
