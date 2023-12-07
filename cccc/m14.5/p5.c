
#include<stdio.h>

 char capital_to_small(char x){
char result = x+32;
return result;

}
int main(){
    char n;
    scanf("%c",&n);
    char r = capital_to_small(n);
    printf("%c\n",r);






return 0;
}
