#include <iostream>
int main(){
    int x = 68;
    auto f = [=]() mutable { 
        x++;
        std::cout << x << std::endl;
    };
    f();
    std::cout << x;
    return 0;
}