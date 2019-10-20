#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void case_change(char d[50]);
main(){
	char x[50];
	printf("enter a string\n");
	scanf("%s",&x);
	printf("your string is:%s\n",x);
	case_change(x);
	printf("the changed case string is:%s\n",x);
}

void case_change(char *d){
	int i;
	for( ;d[i]!='\0';d++){
		if(*d>'A'&&*d<'Z'){
			*d=*d-'A'+'a';
		
		}
		else if(*d>'a'&&*d<'z'){
			*d=*d-'a'+'A';
				
		}
		else{
			
		}
	}
	
}

