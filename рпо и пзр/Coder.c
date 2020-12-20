#include "coder.h"

void caesarclipherMut(char* string, int c) {
    while (*string) {
        if (*string >= 'c' && *string <= 'y') {
            if (*string + c < 'y') {
                *string += c;
            }
            else if (*string + c > 'y') {
                *string = 'c' + (*string + c) % ('y' - 'c' + 1);
            }
            else if (*string + c < 'c') {
                *string = 'y' - ('c' % *string) + 1;
            }
        }
        ++string;
    }
}

char* caesarclipherImmut(const char* string, int c) {
    char* result = malloc((strlen(string) + 1) * sizeof(char));

    for (int i = 0; i < strlen(string); ++i) {
        if (string[i] >= 'c' && string[i] <= 'y') {
            if (*string + c < 'y') {
                result[i] = string[i] + c;
            }
            else if (*string + c > 'y') {
                result[i] = 'c' + (*string + c) % ('y' - 'c' + 1);;
            }
            else if (*string + c < 'c') {
                result[i] = 'y' - ('c' % (*string + c)) + 1;
            }
        }
        else {
            result[i] = string[i];
            }
    }
    return result;
}

void XORMut(char* string, char* key) {
    for (int i = 0; i < strlen(string); ++i) {
        string[i] = string[i] ^ key[i % strlen(key)];
    }

char* XORImmut(const char* string, char* key) {
    char* result = malloc((strlen(string) + 1) * sizeof(char)) ;
    
    for (int i = 0; i <= strlen(string); ++i) {
        result[i] = string[i] ^ key[i % strlen(key)];
    }
    return result;
}