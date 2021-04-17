#include <stdio.h>


void main()
{
    FILE *zile;
    char ch1[100],ch[100];
    int b[100];
    printf("Datele din fisier:\n");
    zile = fopen("D:\\Zile.txt", "r");
    for(int i = 1; i <=7; i ++)
    printf("%s",fgets(ch,50,zile));
    fclose(zile);

    zile = fopen("D:\\Zile.txt", "r");
    for(int i = 0 ; i<7;i++)
    {
        fscanf(zile ,"%s", &ch1);
        fscanf(zile , "%d ", &b[i]);
    }
    printf("\n\nB = ");
    for(int i = 0; i<7;i++)
    {
        printf("%d ", b[i]);
    }
    float sum = 0;
    int count = 0;
    int max = b[0],index = 0;
    for(int i = 0; i<7;i++)
    {
        sum += b[i];
        count++;
        if(b[i]>max)
        {
            max = b[i];
            index = i;
        }
    }
    fclose(zile);
        printf("\nsuma medie = %.2f\n", sum/count);
        printf("Suma totala = %.0f\n", sum);
        printf("Ziua cu suma maxima: ");
        zile = fopen("D:\\Zile.txt", "r");

        for(int i = 0; i <=7; i ++)
        {
            if(i == index+1)
            printf("%s",fgets(ch,50,zile));
        }
}





