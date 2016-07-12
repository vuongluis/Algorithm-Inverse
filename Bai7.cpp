#include <stdio.h>
#include <conio.h>
#include <string.h>
/** ---------- So  Nghich Dao ----------- **/
void printNghichDao(int n);
int main(){
	int i,n;
	printf("Nhap so nguyen n: "); scanf("%d",&n);
	printNghichDao(n);
}
void printNghichDao(int n){
	printf("So nghich dao: ");
	while(n){
		printf("%d",n%10);
		n = n/10;
	}
}
