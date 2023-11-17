#include <stdio.h>
#include <stdlib.h>
    int main(int argc, char *argv[]){
       long long int x = 0;
       int y = 0;
       FILE *open = fopen("pass.txt","w");
       if(open ==NULL){
           printf("i/o error\n");
       }
       else{
           x = atoi(argv[1]);
	   y = atoi(argv[2]);
	   printf("Gerando wordlist...\n");
	   for(; x<y+1; x++){
	       fprintf(open, "%lld\n", x);
	   }
       }
    
    
        fclose(open);
	printf("Wordlist ok!\nBoa sorte Major!\n");
        return 0;
    }
