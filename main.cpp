#include <iostream>
#include <vector>
#include <map>

int main()
{
    std::vector<int> allNums;

    for(int i =0; i < 10; ++i){
        allNums.push_back(i * 2);
    }

    std::cout << allNums[2] << std::endl;

    std::cout << "hello git and Makfile!" << std::endl;
    std::cout << "printf from Linux!" << std::endl;
    return 0;
}