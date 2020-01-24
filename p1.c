//program no.1
//learning about git
//git prog1
#include<stdio.h>
void main()
{
int d,fc;
char tv;
printf("enter the distance travelled by the vehicle in kms\n");
scanf("%d",&d);
printf("enter the type of vehicle\n");
scanf(" %c",&tv);

if(tv== 'M')
 {
   fc=d*15;
   printf("final cost=%d",fc);
 }
else if(tv=='I')
 {
   fc=d*20;
   printf("final cost=%d",fc);
 }
else if(tv=='S')
 {
    fc=d*25;
    printf("final cost=%d",fc);
 }
 
}
 
