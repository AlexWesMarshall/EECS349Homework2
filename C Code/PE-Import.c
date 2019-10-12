//Alex Marshall, awm48
//EECS 349, Computer Security
//10/12/2019
#include <stdio.h>
#include <string.h>

int main() {

    FILE *pe1txt = fopen("c:\\PE-1.txt ", "ab+");
    char importText[] = "I want to learn PE file format!";
    char buff[1000];
    int hasImportText = 0;

    while(fgets(buff, 512, pe1txt) != NULL) 
    {
        if((strstr(buff, text)) != NULL) 
	{
            hasImportText = 1;
        }
    }

    if(hasImportText == 0)
    {
        fprintf(pe1txt, "%s", importText);  
    } 
    else 
    {       
        pe1txt = fopen("c:\\PE-1.txt ", "ab+");
        while(fgets(buff, 512, pe1txt) != NULL) 
	{
            printf ("%s", buff);
        } 
    }

    fclose(pe1txt); 
    return 1;
}      