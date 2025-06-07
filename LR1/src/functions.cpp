#include "functions.hpp"

int customStrlen(const char *str){
    size_t length = 0;

    while (str[length] != '\0'){
        length++;
    }

    return length;
}


int countVowelLetters(const char *str){
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++){
        char c = str[i];

        if (c == '\0' || c == ' ' || c == '\t' || c == '\n') {
            continue;
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
    }

    return count;
}

