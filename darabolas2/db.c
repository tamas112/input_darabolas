#include<stdio.h>
#include<string.h>

#define WALL "-"

int getline(char s[],int lim);

void main(void){
	char s[128];
	char *p;

	printf("Szoveg: \n");
	getline(s,128);

	
	p = strtok(s,WALL);
	while(p){						//amíg p!=NULL
		printf("%s (%c)\n",p,p[0]);
		p = strtok(NULL,WALL);
	}		
	

	
	getchar();
}



int getline(char s[],int lim)
{
	int i,c;
	for(i=0; i<lim && (c=getchar())!=EOF && c!='\n'; ++i) s[i]=c;
	s[i]='\0';
	while(c!=EOF && c!='\n') c=getchar();
	return i;
}