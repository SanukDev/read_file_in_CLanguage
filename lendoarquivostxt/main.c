//
//  main.c
//  ;
//
//  Created by samuel rodrigues melo on 29/09/23.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    FILE *file;
    char a [100];
    file = fopen("/Users/samuelrodriguesmelo/Desktop/teste.txt", "r");
    
    if(file == NULL){
        printf("erro ao abrir arquivo\n");
    }
    else{
        rewind(file);
        printf("\n\tarquivo\n");
        
        //para imprimir uma carcter de cada vez do arquivo
        while (!feof(file)) {
          fgets(a,100,file);
            printf("%s", a);
        }
        printf("\n");
        
    }
    fclose(file);
    
        
}
