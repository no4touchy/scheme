#include <iostream>
#include <sstream>
#include <string>

#include "scheme.h"

int main(int argc, char **argv){
    std::string buffer, buffer2;

    std::cout << "Welcome to scheme interpreter." << std::endl;
    buffer2 = '\n';
    while(true){
        std::cout << "> ";
        std::getline(std::cin, buffer);
        while(!scheme::balanced_parantheses(buffer) && buffer2.length() != 0){
            std::cout << ".. ";
            std::getline(std::cin, buffer2);
            if(buffer2.length() == 0){
                buffer2 = '\n';
                break;
            }
            buffer += buffer2;
        }
        if(!scheme::balanced_parantheses(buffer)){
            std::cout << "Parantheses not balanced" << std::endl;
            continue;
        }
    }
	return 0;
}

