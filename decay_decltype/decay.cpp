#include <string>
#include <type_traits>
#include <variant>
#include <iostream>
#include <typeinfo>

int main()
{
    std::variant<int, float> number;
    //number = (11);
    number = float(11);

    auto typeDetect = [](auto arg) -> void
    {
        using T = std::decay_t<decltype(arg)>;

        std::cout << typeid(T).name();

        if constexpr (std::is_same_v<T, float>)
            std::cout << "Number is float!";
        else if constexpr(std::is_same_v<T, int>)
            std::cout << "Number is int!";
        else
            std::cout << "Unexpected number type!";
    };
     
    std::visit(typeDetect, number);
    return 0;
}


