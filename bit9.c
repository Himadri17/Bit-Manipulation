#include<stdio.h>
#include<math.h>
//power set
void power_set_bit(int array[],int n)
{
    int data;
    int i;
    int pos=0;
    for(i=0;i<pow(2,n);i++)
    {
        data=i;
        pos=0;
        while(data!=0){
            if((data&1)==1){
                printf("%d",array[pos]);
            }
            pos++;
            data=data>>1;
        }
        printf("\n");
    }
}
int main(){
    int array[]={1,2,3};
    power_set_bit( array,3);
    return 0;
}