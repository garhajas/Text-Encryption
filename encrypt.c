// Program for encrypting a message.
//

// Author: <Jaskaran Garha>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

   if(argc > 3){
     printf("Incorrect number of arguments\n" );
   }
    FILE *fp1, *fp2;
    char filename1[FILENAME_MAX];
    int i;
    int size = 0;
    int shift;


    strcpy(filename1, argv[1]);

    /* if file cannot be read*/
    if ((fp1 = fopen(filename1, "r")) == NULL) {
        fprintf(stderr, "Error: Unable to open file %s.\n", filename1);
        exit(EXIT_FAILURE);
    }
    char *filename2;
    filename2 = malloc(strlen(filename1) + 5); // 5 because .enc is 4 chars + null char
    strcpy(filename2, filename1);
    strcat(filename2, ".enc");
    if ((fp2 = fopen(filename2, "w")) == NULL) {
        fprintf(stderr, "Error: Unable to open file %s.\n", filename1);
        exit(EXIT_FAILURE);
    }
    free(filename2);


    shift = atoi(argv[2]);

    int ch;
    while ((ch = getc(fp1)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            putc(((ch - 'A') + shift) % 26 + 'A', fp2);
        } else if (ch >= 'a' && ch <= 'z') {
            putc(((ch - 'a') + shift) % 26 + 'a', fp2);
        } else {
            putc(ch, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
