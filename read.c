#include<stdio.h>

main(){
	
	FILE *p;
	char a;
	
	p = fopen("Demo.txt","r");
	
	if(p== NULL){
		printf("Error");
		
	}
	else{
		while(a!=EOF){
			a = fgetc(p);
			printf("%c",a);
			
 		}
 		fclose(p);
	}
	return 0 ;
}
