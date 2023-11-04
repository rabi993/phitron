
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     char a[200],b[100];
     scanf("%s %s",&a,&b);
     int k = strlen(a);
     for(int i=0; i<=strlen(b); i++){
            a[k]=b[i];
            k++;
     }
     printf("%s %s",a,b);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     char a[200],b[100];
     scanf("%s %s",&a,&b);
     int k = strlen(a);
     b[3]='\0';
     for(int i=0; i<=2; i++){
            a[k]=b[i];
            k++;
     }

     printf("%s %s",a,b);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     char a[200],b[100];
     scanf("%s %s",&a,&b);
     int k = strlen(a);

     for(int i=0; i<=2; i++){
            a[k]=b[i];
            k++;
     }
    a[k]='\0';
     printf("%s %s",a,b);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     char a[200],b[100];
     scanf("%s %s",&a,&b);
     strcat(a,b);
     printf("%s %s",a,b);
    return 0;
}


