#include <stdio.h>
int main(void)
{
    FILE *pointerin = fopen("input_05.bin","rb");
    FILE *pointerout = fopen("output_05.txt","w");
    if(!pointerin || !pointerout){
        printf("error\n");
        return 1;
    }
    int counter,number;
    for(counter=0;counter<12;counter++){
        fread(&number, 4,1,pointerin);
    //  or fread(&number, sizeof(int),1,pointerin);
        fprintf(pointerout,"%d",number);
    }
    fclose(pointerin); fclose(pointerout);  // close files
    return 0;
}
