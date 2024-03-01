#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    printf("Napishi kolko ocenki imash po programirane: \n");
    scanf("%d", &count);

    float * grades = (float *)calloc(count, sizeof(float)); 
    if (grades == NULL){
        printf("\nError allocating memory!");
        return 1;
    }

    printf("Vuvedi ocenki: \n");
    for(int i = 0; i < count; i++){
        do{
            printf("Vuvedi ocenka %d: ", i+1);
            scanf("%f", &grades[i]);
        }while(grades[i] < 2 || grades[i] > 6);
    }

    int choice = 0;
    while(1){
        printf("\nKakvo iskash da napravish? \n 1 - Izvedi sredniq uspeh \n 2 - Dobavi nova ocenka \n "); 
        printf("3 - Iztrii poslednata ocenka \n 4 - Izhod \n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                float * averageGrade = (float *)malloc(sizeof(float));
                float sum = 0;
                for (int i = 0; i < count; i++) {
                    sum += grades[i];
                }
                *averageGrade = sum / count;
                printf("Sreden uspeh po programirane: %f \n", *averageGrade);
                free(averageGrade);
                break;
            case 2:
                grades = (float *)realloc(grades, (count + 1)*sizeof(float));
                if (grades == NULL) {
                    printf("Error allocating memory \n");
                    return 1;
                }
                    printf("Vuvedi ocenka %d: ", count+1);
                    scanf("%f", &grades[count]);
                
                count++;
                break;
            case 3:
                if(count != 1){
                    grades = (float *)realloc(grades, (count - 1)*sizeof(float));
                    count--;
                    printf("Poslednata ocenka e iztrita");
                }else{
                    printf("Imash samo edna vuvedena ocenka!");
                }
                break;
            case 4:
                printf("\nIzkluchvane...");
                free(grades);
                return 0;
            default:
                printf("\nMolq vuvedi validen simvol!\n");
        }
    }
}