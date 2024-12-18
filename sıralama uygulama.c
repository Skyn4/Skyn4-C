#include <stdio.h>
#include <stdlib.h>

int main()
{
   long int x,y,z;
   scanf("%d %d %d",&x,&y,&z);
   if(x>y && x>z){
    if(y>z){
        printf(" %d>%d>%d ",x,y,z);}
        else if(z>y){
            printf("%d>%d>%d",x,z,y);}
   }
        else if(y>z && y>x){
        if(x>z){
            printf("%d>%d>%d",y,x,z);
        }
        else if(z>x){
            printf("%d>%d>%d",y,z,x);}
        }

        else{
            if(x>y){
                printf("%d>%d>%d",z,x,y);
            }
            else if (y>x){
                printf("%d>%d>%d",z,y,x);
            }
    }






}
