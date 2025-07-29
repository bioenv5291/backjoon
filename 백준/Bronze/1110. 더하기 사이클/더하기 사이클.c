#include <stdio.h>

int main(void) {
   int a,b,c,d,e,f,g;
   int i=1;
   scanf("%d",&a);
   g=a;
   while(1){
   b=g%10;
   c=g/10;
   d=b+c;
   e=d%10;
   f=b*10+e;
   if(f!=a){
      g=f;
      i++;
   }
   else
   break;
   }
   printf("%d",i);
   return 0;
}