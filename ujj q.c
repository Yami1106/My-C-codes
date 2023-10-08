#include<stdio.h>
int main()
{
 int favnum,firstnum,diff;
 scanf("%d %d %d",&favnum,&firstnum,&diff);
 float ans=((favnum-firstnum)/diff)+1;
 if((int)ans-ans>=0){printf("yes");}
 else{printf("no");}
 return 0;
 }
