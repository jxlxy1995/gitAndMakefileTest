#include <iostream>
#include <vector>
#include <map>

void fun2()
{
    std::cout << "fun2" << std::endl;
}

void fun3()
{
    std::cout << "fun3" << std::endl;
}

int main()
{
    std::vector<int> allNums;

    for(int i =0; i < 10; ++i){
        allNums.push_back(i * 2);
    }

    std::cout << allNums[2] << std::endl;

    std::cout << "hello git and Makfile!" << std::endl;
    std::cout << "printf from Windows!" << std::endl;
    std::cout << "master add!" << std::endl;
    std::cout << "fix1 add!" << std::endl;
    return 0;
}