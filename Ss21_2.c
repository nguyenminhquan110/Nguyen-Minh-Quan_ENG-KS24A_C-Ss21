#include <stdio.h>
#include <string.h>

int main(){
	char a;
	FILE *fptr;
	fptr = fopen("bt01.txt","r");
	if(fptr == NULL){
		printf("Loi mo tap tin\n");
		return 1;
	}
    
    a= fgetc(fptr);
    
    if(a != EOF){
    	printf("Ky tu dau tien trong file: %c\n",a);
	}else{
		printf("loi file");
	}
	

	fclose(fptr);
	return 0;
}

