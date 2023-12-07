/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100];
    scanf("%s",a);
    for(int i=0; i<strlen(a); i++){
            printf("%c ",a[i]);

    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>


int main() {
    int i,a[100];
    scanf("%s",a);
    int cnt[26]={0};
    for( i=0; i<strlen(a); i++){
            int val = a[i]-97;
            cnt[val]++;
    }
   for(int i=0; i<26; i++){
        if(cnt[i]!=0){

        printf("%c - %d\n",i+97,cnt[i]);
        }
   }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100];
    scanf("%s",a);
    int cnt[26]={0};
    for(int i=0; i<strlen(a); i++){
            int val = a[i]-97;
            cnt[val]++;
    }
   for(int i=0; i<strlen(a); i++){
       int value = a[i]-97;
           if(cnt[value]!=0) {

            printf("%c - %d\n",value+97,cnt[value]);
           }
        cnt[value]=0;
   }
    return 0;
}
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[10001];
    scanf("%c",a);
    int cnt[26]={0};
    int i=0;
    while( a[i]!='\0' ){
            int value = a[i]-'a';
            cnt[value]++;
            i++;
    }
    int m =strlen(a);
   for(int i=0; i<m; i++){
       int value = a[i]-97;
           if(cnt[value]!=0) {

            printf("%c - %d\n",value+97,cnt[value]);
           }
        cnt[value]=0;
   }
    return 0;
}
