#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	int ret = 0;
	char* strbuf = malloc(100);
	printf("this is start..\n");
	strlen(NULL);	
	sizeof(NULL);
	printf("after strlen(null)\n");
//	printf("sizeof strbuf = %d, strlen strbuf = %d\n",
//	 sizeof(strbuf), strlen(strbuf));

	printf("please input a string: ");
	ret = scanf("%*s%s", strbuf);
	//printf("sizeof strbuf = %d, strlen strbuf = %d, scanf ret = %d\n",
	 //sizeof(strbuf), strlen(strbuf), ret);
	printf("strbuf: %s\n", strbuf);
	if(strbuf != NULL){
		free(strbuf);
	}
	return 0;
}
