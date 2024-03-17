#include <stdio.h>
#include <stdlib.h>

int main()
{
    int subjects = 0;
    do{
        printf("Vuvedi broi predmeti, cheren negar!: ");
        scanf("%d", &subjects);
    } while (subjects <= 0);
    char *subjNameArr[subjects];
    for (int i = 0; i < subjects; i++){
        subjNameArr[i] = calloc(15, sizeof(char));
        printf("Vuvedi ime na predmet %d: ", i+1);
        scanf("%s", subjNameArr[i]);
    }

    for (int i = 0; i < subjects; i++){
        printf("\n%s\n ", subjNameArr[i]);
    }

    do{
        int choice;
        printf("Vuvedi kakvo iskash da napravish! \n");
        printf("1 - nuke Venezuela \n2 - Printirane na dvoikite \n3 - Izhod!\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            for (int i = 0; i < subjects; i++){
                free(subjNameArr[i]);
            }
            printf("nema da mi lipshavsh");
            exit(1);
        default:
            printf("tupak vuvedi pravilen simvol\n");
        }
    } while (1);

    return 0;
}