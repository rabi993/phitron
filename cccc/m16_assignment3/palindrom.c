#include <stdio.h>
#include<string.h>

 int is_palindrome( char *a) {
     int i=0,j=strlen(a)-1;
     while( i<j){
            if (a[i]!=a[j]){

                  return 0;
            }

        i++;
        j--;
     }

        return 1;
}

int main() {
    char s[1000];
    scanf("%s", s);

    int r = is_palindrome(s);
    if (r == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}
