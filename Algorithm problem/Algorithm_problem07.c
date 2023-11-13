#include <stdio.h>

int main() {
    char str[101], res[101];
    int i, p = 0;
    gets(str);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            if(str[i]>='A' && str[i]<='Z') 
                res[p++]=str[i]+32;
            else
                res[p++]=str[i];
        }
    }
    res[p] = '\0';
    printf("%s\n", res);
    
    return 0;
}
