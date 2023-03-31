#include <stdio.h>
int main(){
	
	char cumle[100];
	int i=0;
	printf("cumle giriniz: \n");
	gets(cumle);
	while(cumle[i])
	{
		printf("%c \n",cumle[i]);
		i++;
		
	}
	
	
	return 0;	
	
}
