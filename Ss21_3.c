#include <stdio.h>
#include <string.h>

int main(){
	char a[50];
	FILE *fptr;
	fptr = fopen("bt01.txt","a");
	if(fptr ==NULL){
		printf("Loi mo tap tin\n");
		return 1;
	}

	printf("Nhap them file: ");
    fgets(a,100,stdin);
    
    fputs(a,fptr);

	fclose(fptr);
	printf("Da ghi them file thang cong\n");
	return 0;
}
