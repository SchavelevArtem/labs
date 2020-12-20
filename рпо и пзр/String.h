void toLowerMut(char* str);
char* trimImmut(const char* str);

//Удаление пробелов с конца и начала строки(muttable)
void trimEdgeMut(char str[]);
void trimMut(char str[]);

//Удаление пробелов из строки(muttable)
void stripMut(char* str);
void squeezeMut(char str[]);

//Удаление пробелов из строки(immutable)
char* stripImmut(const char* str);
char* squeezeImmut(const char* str);

//Фильтрация строки(immutable)
char* filterImmut(const char* str)