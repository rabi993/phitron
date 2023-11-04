/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);

    }
    int zero =0;
     int two =0;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            zero++;
        }
        if(a[i]==2){
            two++;
        }

    }



     printf("0- %d\n",zero);
      printf("2- %d\n",two);
    return 0;
}
*/

/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);

    }

     int cnt[7] ={0};
    for(int i=0; i<n; i++){
        if(a[i]==0){
            cnt[0]++;
        }
        if(a[i]==2){
            cnt[2]++;
        }

    }



     printf("0- %d\n",cnt[0]);
      printf("2- %d\n",cnt[2]);
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);

    }

     int cnt[7] ={0};
    for(int i=0; i<n; i++){
            //int val = a[i];
            //cnt[val]++;
            cnt[a[i]]++;



    }



     printf("0- %d\n",cnt[0]);
      printf("2- %d\n",cnt[2]);
    return 0;
}
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);

    }

     int cnt[7] ={0};
    for(int i=0; i<n; i++){
            //int val = a[i];
            //cnt[val]++;
            cnt[a[i]]++;



    }


for(int i=0; i<=6; i++){
    printf("%d- %d\n",i,cnt[i]);
}

    return 0;
}
