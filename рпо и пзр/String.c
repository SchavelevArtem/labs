char*   trimImmut(const char* str) {
    return res;
}

void    stripMut(char* str) {
    int i;
    int j;
void    squeezeMut(char str[]) {
    int j = 0;

    for (i = j = 0; str[i] != '\0'; ++i) {
    for (int i = j = 0; str[i] != '\0'; ++i) {
        if (str[i] != ' ') {
            str[++j] = str[i];
            str[j] = str[i];
            ++j;
        }
    str[j] = '\0';
    }
}

char*   stripImmut(const char* str) {
    int n = 0;
    int k = 0;
    char* res;

    for (int i = 0; i < strlen(str); ++i)  {
            if (str[i] != ' ') {
                n += 1;
            }
    }

    res = malloc((n + 1) * sizeof(char));
char*   squeezeImmut(const char* str) {
    int j = 0;
    char* res = malloc(strlen(str) * sizeof(char));

    for (int i = 0; i < strlen(str); ++i) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] != ' ') {
            res[k] = str[i];
            ++k;
            res[j] = str[i];
            ++j;
        }
    }
    res = realloc(res, (1 + j) * sizeof(char));
    res[j] = '\0';
    return res;
}

char*   filterImmut(const char* str) {
    int k = 0;
    char* res;
    res = malloc(strlen(str) * sizeof(char));
    int j = 0;
    char* res = malloc(strlen(str) * sizeof(char));

    for (int i = 0; i < strlen(str); ++i) {
        if(str[i] == ' ' ||
                (str[i] >= '0' && str[i] <= '9') ||
                (str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z')) {
            res[k] = str[i];
            ++k;
            res[j] = str[i];
            ++j;
        }
    }
    res = realloc(res, (1 + k) * sizeof(char));
    res[k] = '\0';
    res = realloc(res, (1 + j) * sizeof(char));
    res[j] = '\0';
    return res;
}

void    filterMut(char* str) {
    int len = strlen(str);
void    filterMut(char str[]) {
    int j = 0;

    for (int i = 0; i < len; i++){
    for (int i = 0; str[i] != '\0'; ++i){
        if (str[i] == ' ' ||
                str[i] >= 'a' && str[i] <= 'z' ||
                str[i] >= 'A' && str[i] <= 'Z' ||
                str[i] >= '0' && str[i] <= '9') {
            str[j] = str[i];
            ++j;
        }
   }
   str[j] = '\0';
}
char*   concat(int argc,char* argv[]) {
    int len = 0;
    for (int i = 2; i < argc - 1; ++i) {
        len += strlen(argv[i]) + 1;
    }
    char* str = malloc((len + 1) * (sizeof(char)));
    
    for (int i = 2; i < argc - 1; ++i) {
    strcat(str, argv[i]);
    strcat(str, " ");
    }
    return str;
}
int     isLetter(char* str) {
    int let;
    while (*str) {
        if (*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str <= 'z' || *str == ' ') {
            let = 1;
        }
        else {
            let = 0;
            return let;
        }
        ++str;
    }
    return let;
}
    int     isNumber(char* str) {
        int num;
        while (*str) {
            if (*str >= '0' && *str <= '9' || str[0] == '-') {
                num = 1;
            }
             else {
                num = 0;
                return num;
            }
                ++str;
    }
    return num;
}