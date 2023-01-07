#include<stdio.h>

int main(){
    int num ;
    int rem;
    int sum=0; 

    printf("\nEnter number");
    scanf("%d",&num); 

    while(num > 0 ){ 
        //132 
        //divide and modulo 
        rem = num%10; //1%10 =>  1
        sum = sum + rem; //0+2 : 2+3 : 5+1 : 6   
        num = num / 10; //132/10 13/10 1/10 => 0    
    }

    printf("\nSum of digits = %d",sum);

    
    return 0;
}