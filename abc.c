#include <stdio.h>
#include <stdlib.h>


int main(){

    int a, c, d, e;
    int *b = NULL;    
    printf("Insira um número em decimal que será convertido em binário:");
    scanf("%d", &a);
    d=0;
    while(a>0){
        c=0;
        c = a%2;
        a = a/2;
        
        d++;
        int *v = (int*)realloc(b, d * sizeof(int));
        if (v==NULL)
        {
            printf("Falha na alocação da memória");
            free(b);
        }else{
            b = v;

        }
        
    
        b[d-1] = c;


        

    }
    

    printf("Este número em binário é igual a: \n");
        for(int i=d-1; i>=0; i--){
            printf("%d", b[i]);
        }
    printf("\n1-Converter mais algum numero \n2-sair\n");
    scanf("%d", &e);
    if(e == 1){
        free(b);
        main();
    }else if( e == 2){
        free(b);
        return 0;
    }
    else{
        printf("Insira uma opção válida!");
        free(b);
        e=1;
    }
  
    

    

    






}