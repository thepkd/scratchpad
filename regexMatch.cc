#include <iostream>
#include <regex>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> words;
    words = {"Electronics/Workspace/GPU","Electronics/GPU"};
    std::regex word("(Electronics)(.*)");
    int count=0;
    for(auto i = words.begin(); i!=words.end(); i++)
    {
        if(std::regex_match((*i),word))
            count++;
    }
std::cout << count << std::endl;
return 0;
}
