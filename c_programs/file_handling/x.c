#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt;
char (* readFromFile(char (*lines)[100],char *filename))[100]
	//void * readFromFile(char (*lines)[100],char *filename)
{
	char s[100];
	FILE *fp;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s File not found\n",filename);
		exit(0);
	}
	while(fgets(s,100,fp))
	{
		lines=realloc(lines,(cnt+1)*sizeof(*lines));
		strcpy(lines[cnt],s);
		cnt++;
	}
	fclose(fp);
	return lines;
}

void DeleteLines(char (*lines)[100],int n)
{
	if(n<=0 || n>cnt)
		printf("%d line no is invalid\n",n);
	else
	{
		// n represents the line no so we need to map this array so we need
		// n-1, line 1 will be stored at index 0 , line 2 will stored at index 1. so on
		 //n--;
		memmove(lines+n,lines+n+1,(cnt-n-1)*sizeof(*lines));
		cnt--;
		lines=realloc(lines,cnt*sizeof(*lines));
	}


}

void writeToFile(char (*lines)[100],char *filename)
{
	FILE *fp;
	fp=fopen(filename,"w");
	for(int i=0;i<cnt;i++)
	{
		fputs(lines[i],fp);
	}
	fclose(fp);
}
int main(int argc,char *argv[])
{	char (*lines)[100]=NULL;
	if(argc !=3)
	{
		printf("incorrect inputs\n");
		printf("exe filename\n");
		exit(0);
	}
	lines=readFromFile(lines,argv[1]);
	DeleteLines(lines,atoi(argv[2]));
	writeToFile(lines,argv[1]);
}

