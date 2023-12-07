




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char S[10001];
    scanf("%s",S);
    int cnt[26]={0};
    for(int i=0; i<strlen(S); i++){
            int val = S[i]-97;
            cnt[val]++;
    }
   for(int i=0; i<strlen(S); i++){
       int value = S[i]-97;
           if(cnt[value]!=0) {

            printf("%c - %d\n",value+97,cnt[value]);
           }
        cnt[value]=0;
   }
    return 0;
}







/*


#include <stdio.h>
#include <string.h>

int main() {
    char c;
    int cnt[26] = {0};
    while(scanf("%c",&c)!= EOF){

        cnt[c-'a']++;

    }
    for(char i='a'; i<='z';i++){
        if(cnt[i-'a']>0)
            {
                printf("%c : %d\n", i, cnt[i-'a']);
            }
    }




    return 0;
}

*/
