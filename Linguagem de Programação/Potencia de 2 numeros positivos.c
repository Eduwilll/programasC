
int main(){
    int a,b;
    int i,res=1;

    scanf("%d %d", &a, &b);

    for(i=1;i<=b; i++){
        res=res*a;
        
    }

    printf("%d\n", res);

    return 0;
}