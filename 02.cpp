#include <stdio.h>
int main(void)
{
    /* open files */
    FILE *pointer_in = fopen("input_02.txt","r");
    FILE *pointer_out = fopen("output_02.txt","w");
    if(!pointer_in || !pointer_out){
        printf("error\n");
        return 1;
    }
    char character;
    while((character = fgetc(pointer_in)) != EOF){
        if ( character == ',' ) fputc(0x20,pointer_out);
        else fputc(character,pointer_out);
    }
    fclose(pointer_in); fclose(pointer_out); /* close files */
    return 0;
}
