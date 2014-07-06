#include <iostream>

#include "scheme.h"

namespace scheme {
    bool balanced_parantheses(std::string str){
        int left = 0, right = 0;
        for(unsigned int i = 0;i < str.length();i++){
            if(str[i] == '('){
                left++;
            }else if(str[i] == ')'){
                right++;
            }
        }
        return left == right;
    }

    void read(){
        std::cout << "> ";
    }
};

