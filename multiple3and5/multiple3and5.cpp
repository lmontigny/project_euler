// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>

int main()
{
    int sum=0;
    int limit = 1000;

    for(int i=1; i<limit; i++){
        if (i%3==0 || i%5==0){
            sum+=i;
        }
    }
    std::cout << sum << std::endl;

    return 0;
}


