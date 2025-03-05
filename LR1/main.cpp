#include <iostream>
#include "functions.hpp"

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);

    if (str[customStrlen(str) - 1] == '\n'){
        str[customStrlen(str) - 1] = '\0';
    }
    
    int vovelCount = countVowelLetters(str);

    std::cout << vovelCount << std::endl;

    return 0;
}
