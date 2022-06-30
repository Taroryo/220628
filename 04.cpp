#include <stdio.h>
int main()
{
    FILE *pointerin = fopen("input_04.txt","r");
    FILE *pointerout = fopen("output_04.txt","w");
    if(!pointerin || !pointerout){
        printf("error\n");
        return 1;
    }
    int Enigma;
    fscanf(pointerin, "%d", &Enigma);
    int character;
    while((character = fgetc(pointerin)) != EOF){
        if ( character == 10 ) {
            continue;
        } else {
            character += Enigma; 
            if ( character < 32 ){
                character = character + 95;
            } else if ( character > 126 ){
                character = character - 95;
            }   // DO NOT MAKE MISTAKES IN FORMULAS.
            fputc(character,pointerout);
        }
    }
    fclose(pointerin); fclose(pointerout);  // You have to close files in the end.
    return 0;
}

/* You can use ASCII-code lists on the Internet */
/* such as : https://www.k-cube.co.jp/wakaba/server/ascii_code.html .*/
