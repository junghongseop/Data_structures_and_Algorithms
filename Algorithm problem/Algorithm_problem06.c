#include <stdio.h>

int main() {
   char str[50];
   int canIgnoreZero = 1, number = 0, cnt = 0, i;
   scanf("%s", str);
   for(i = 0; str[i] != '\0'; i++) {
      if(str[i] >= 48 && str[i] <= 57) {
         if(canIgnoreZero && str[i] == '0') continue;
         if(str[i] != '0') canIgnoreZero = 0;
         number = number * 10 + str[i] - '0';
      }
    }
   
    printf("%d\n", number);
    for(i = 1; i <= number; i++)
        if(!(number % i)) cnt++;
      
    printf("%d", cnt);
    return 0;
}