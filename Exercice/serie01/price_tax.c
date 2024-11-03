#include <stdio.h>

int main(){
    float TAX_RATE=0.08 ;
    int price=50 ; 
    float price_withtax=price+price*TAX_RATE;
    printf("the price without tax :%d \n ",price);
    printf("the price with tax : %4f", price_withtax);
return 0;
}