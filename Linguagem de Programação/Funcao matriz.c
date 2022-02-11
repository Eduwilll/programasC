#include<stdio.h>
#include<stdlib.h>

void imprimeMat(double m[100][100], int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%.1lf\t", m[i][j]);
        }
        printf("\n");
    }
}

void somaMat(double mat1[100][100], double mat2[100][100],double matRes[100][100], int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            matRes[i][j]=mat1[i][j]+ mat2[i][j];
        }
    }
}

int main (){
    double m1[100][100], m2[100][100], mRes[100][100];
    int n,i,j;

    printf("Digite o tamanho da matriz:");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Digite o elemento M1[%d,%d]:", i,j);
            scanf("%lf", &m1[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Digite o elemento M2[%d,%d]:", i,j);
            scanf("%lf", &m2[i][j]);
        }
    }

    somaMat(m1, m2, mRes, n);

    printf("\nM1: ");
    imprimeMat(m1, n);

    printf("\nM2: ");
    imprimeMat(m2, n);

    printf("\nResultado: ");
    imprimeMat(mRes, n);

    return 0;
}