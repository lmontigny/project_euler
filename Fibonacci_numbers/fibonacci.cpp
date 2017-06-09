// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    long int sum=0;
    int limit = 4e6;
    int i=1;
    std::vector<long int> vec(2);

    vec[0]=1;
    vec[1]=2;
    while(vec.back()<limit){
        vec.push_back(vec[i]+vec[i-1]);
        //std::cout << i << " " << vec[i] << std::endl;
        if (vec[i]%2==0) sum+=vec[i];
        i++;
    }
    std::cout << sum << std::endl;

    return 0;
}


