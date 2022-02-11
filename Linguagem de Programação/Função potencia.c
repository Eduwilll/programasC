#include<stdlib.h>
#include<stdio.h>

double pot(double a,int b){
    int i;
    double res=1;
    for(i=1; i<b; i++){
        res=res*a;
    }
    return res;
}

int main(){
    double base=2;
    int exp;

    while (base<=10)
    {
        for(exp=0; exp<=10; exp++) {
            printf("%.0lf,", pot(base,exp));
        }
        printf("\n");
        base=base+1;
    }
    
    
    return 0;
}