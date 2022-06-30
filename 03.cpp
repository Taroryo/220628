/* This problem might have several solutions. */
#include <stdio.h>
int main(void)
{
    FILE *pointer_in = fopen("input_03.csv","r");
    FILE *pointer_out = fopen("output_03.csv","w");
    if(!pointer_in || !pointer_out){
        printf("error\n");
        return 1;
    }
    int counter;
    int totalscore = 0;
    int number;
    while(fscanf(pointer_in, "%d,", &number) != EOF){
        counter++;
        totalscore = totalscore + number;
        if(counter != 5){
            fprintf(pointer_out,"%d,",number);
        } else {
            fprintf(pointer_out,"%d,%d\n",number,totalscore);
            totalscore = 0;
            counter = 0;
        }
    }
    fclose(pointer_in); fclose(pointer_out);  // close files
    return 0;
}
