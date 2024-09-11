#include<stdio.h>

 char small_to_capital(char x){
char result = x-32;
return result;

}
int main(){
    char n;
    scanf("%c",&n);
    char r = small_to_capital(n);
    printf("%c\n",r);






return 0;
}


