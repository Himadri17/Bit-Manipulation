#include<stdio.h>
//check a given bit at given pos
void check_set_bit_at_pos(int data,int a)
{
    int pos;
    int mask =1<<pos;
    if((data & mask)==0)
    printf("clear bit");
    else{
        printf("set bit");
    }
}
int main(){
check_set_bit_at_pos(42,4);
return 0;
}