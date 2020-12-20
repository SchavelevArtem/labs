#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Coder.h"
#include "SetString.h"
int main(int argc, char* argv[]) {
    char* command = argv[0];
    char* cipher = argv[1];
    char* str = concat(argc, argv);
    char* key = argv[argc - 1];
    if ((cipher, "--caesar") == 0 && !isNumber(key)) {
        printf("Ключ должен быть числом.\n");
    }
    else if (strcmp(cipher, "--xor") == 0 && !isLetter(key)) {
        printf("Ключ должен состоять из латинского алфавита.\n");
    }
    
    else if (strcmp(command, "./encoder") == 0) {
        if (strcmp(cipher, "--caesar") == 0) {
            trimMut(str);
            toLowerMut(str);
            caesarMut(str, atoi(key));
            printf("%s\n", str);
        }
        else if (strcmp(cipher, "--xor") == 0) {
            trimMut(str);
            toLowerMut(str);
            xorMut(str, key);
            printf("%s\n", str);
        }
        else {
            printf("Введите корректный способ кодирования:\n--caesar\n--xor\n");
        }
    }
    else if (strcmp(command, "./decoded") == 0) {
        if (strcmp(cipher, "--caesar") == 0) {
            int pass = atoi(key) * (-1);
            caesarMut(str, pass);
            printf("%s\n", str);
        }
        else if (strcmp(cipher, "--xor") == 0) {
            xorMut(str, key);
            printf("%s\n", str);
            }
        else {
            printf("Введите корректный способ кодирования:\n--caesar\n--xor\n");
        }
    }
    char mal[] = "  sdas ds/./.. sdsd  ";
//    filterMut(mal);
    printf("%s", filterImmut(mal));
//    printf("%s.\n", mal);
    return 0;
}