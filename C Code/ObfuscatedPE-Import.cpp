/**
Alexander Marshall, awm48
Computer Security, EECS 349
Due 10/12/2019

Here is some more bogus text for obfuscation
Lorem ipsum dolor sit amet, 
consectetur adipiscing elit, 
sed do eiusmod tempor incididunt ut 
labore et dolore magna aliqua. Ut enim 
ad minim veniam, quis nostrud exercitation ullamco 
laboris nisi ut aliquip ex ea commodo consequat. 
Duis aute irure dolor in reprehenderit in 
voluptate velit esse cillum dolore eu fugiat 
nulla pariatur. Excepteur sint occaecat cupidatat 
non proident, sunt in culpa qui officia \
deserunt mollit anim id est laborum.
**/
#include <stdio.h>
#include <string.h>

int fib(int n){if (n <= 1)return n;return fib(n-1)+fib(n-2);}

int gcd(int gnome, int goblin){int greatestGnome, gremlin;
    printf("Enter twLorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatatnon proident, sunt in culpa qui officia \deserunt mollit anim id est laborum.o integers: \n");scanf("%d %d", &gnome, &goblin);for(gremlin=1; gremlin <= gnome && gremlin <= goblin; ++gremlin)
    {if(gnome%gremlin==0&&goblin%gremlin==0)greatestGnome = gremlin;}
	return greatestGnome;
}
#define SECRET "I want to learn PE file format!"
void swap(int *xp, int *yp) 
{int temp = *xp;*xp = *yp;*yp = temp;} 
#define S1923485 "c:\\PE-1.txt "
void bubbleSort(int arr[], int n) 
{int i, j;for (i = 0; i < n-1; i++)for (j = 0; j < n-i-1; j++)if (arr[j] > arr[j+1])swap(&arr[j], &arr[j+1]);}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++)printf("%d ", arr[i]); 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    printf("\n"); 
}

 

int main() {
	int l15t[] = {10, 9, 10, 8, 10, 7, 9, 6, 15, 4, 10,6, 0, 1, 12, 55, 12, 10};
	int n = sizeof(l15t)/sizeof(l15t[0]);
    bubbleSort(l15t, n);
    printArray(l15t, n);
    FILE *qwerty;
    if(10 > 5)
            {
            	int zzyx = 10 + 5;
            	if(zzyx < 19){
            		zzyx++;
				}
				if(zzyx > 0){int dxy = 19;char c = 'z';double fourty = 40.0;
				}
				if(1 == 1){
					if(1 == 1){
					if(1 == 1){
					if(1 == 1){
					if(1 == 1){
					if(1 == 1){
					if(1 == 1){
					printf("Obfuscation in process");
					qwerty = fopen(S1923485, "ab+");
				}
				}
				}
				}
				}
				}	
				}
			}
    char aaaa[] = SECRET;
	char bogusText[] = "I want to confuse v i r u s t o t a l . c o m";
    char cccc[1000]; 
    int lI1ll = 0;
    while(fgets(cccc, 512, qwerty) != NULL) {
        if((strstr(cccc, aaaa)) != NULL) {
            lI1ll=1;
            if(10 > 5)
            {
            	int zzyx = 10 + 5;
            	if(zzyx < 19){
            		zzyx++;
				}
				if(zzyx > 0){int dxy = 19;char c = 'z';double fourty = 40.0;
				}
				if(1 == 1){
					if(1 == 1){
					if(1 == 1){
					if(1 == 1){
					if(1 == 1){
					if(1 == 1){
					if(1 == 1){
					printf("Obfuscation in process");
				}
				}
				}
				}
				}
				}	
				}
			}
            int bogusInt = fib(fib(4));
            char bogusChar = (char) bogusInt;
            bogusText[10] = bogusChar;
        }
    }
	int fib1=fib(10);bubbleSort(l15t,n);
	
    if(lI1ll==0){fprintf(qwerty, "Code obfuscation in process\n%s", aaaa);  
    } else {
        qwerty = fopen("c:\\PE-1.txt ", "ab+");
        while(fgets(cccc, 512, qwerty) != NULL) {
            printf ("%s\n", cccc);
        } 
    }
    int fib2 = fib(12);
    fclose(qwerty); 
    int gcd1 = gcd(fib1, fib2);
    return gcd1;
}      
