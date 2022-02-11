
int main()
{
    double mat1[2][4], mat2[2][4], mat3[2][4];
    int i, j, k, n;

    printf("Dimens~ao das matrizes: ");
    scanf("%d", &n);
    printf("Lendo dados da matriz 1, linha por linha\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%lf", &mat1[i][j]);
        }
    }
    printf("Lendo dados da matriz 2, linha por linha\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%lf", &mat2[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            mat3[i][j] = 0;
            for(k=0; k<n; k++)
            {
                mat3[i][j] = mat3[i][j] + (mat1[i][k] * mat2[k][j]);
            }
        }
    }
    printf("Imprimindo dados da matriz 3, linha por linha\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%.2lf \t", mat3[i][j]);
        }
        printf("\n");
    }
}
