#include<stdio.h>
count_set_bit(int data)
{
    int count=0;
    while(data!=0){
        if((data&1)==1)
        count++;
        data=data>>1;
    }
    return count;
}
int main()
{
    printf("===%d",count_set_bit(42));
    return 0 ;
}