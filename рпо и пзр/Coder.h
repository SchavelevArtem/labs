#ifndef CODER_H_INCLUDED
#define CODER_H_INCLUDED
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    //Шифрование строки алгоритмом Цезаря(muttable)
    char* codCezImmut(const char* str, int kay);
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    //Шифрование строки алгоритмом цезаря(immutable)
     void codCezMut(char* str, int kay);
//Шифрование строки алгоритмом Цезаря(muttable)
char* caesarImmut(const char* str, int kay);

    //Шифрование строки алгоритмом xor(immutable)
    char* codXorImmut(const char* str, char* kay);
//Шифрование строки алгоритмом цезаря(immutable)
void caesarMut(char* str, int kay);

    //Шифрование строки алгоритмом xor(muttable)
    void codXorMut(char* str, char* kay);
//Шифрование строки алгоритмом xor(immutable)
char* xorImmut(const char* str, char* kay);

//Шифрование строки алгоритмом xor(muttable)
void xorMut(char* str, char* kay);
#endif