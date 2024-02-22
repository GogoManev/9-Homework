#include <stdio.h>

int isprime(int n) {
    //Implementation
    for(int i = 0; i < n; i++){
        if(n%i == 0){
            n = 0;
            printf("ne e prosto");
        }else{


        }
    }
}

int main()
{
    int number = 13;
    int ispr = isprime();
    printf("Is prime: %d\n", ispr);
}
