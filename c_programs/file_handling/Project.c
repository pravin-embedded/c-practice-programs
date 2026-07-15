#include <stdio.h>
#include <string.h>

struct Macro
{
    char key[50];
    char value[50];
};

int main(int argc, char *argv[])
{
    FILE *fp,*fout;

    char line[200];
    char *p;

    struct Macro M[20];
    int count=0;

    if(argc!=2)
    {
        printf("Usage: %s file.c\n",argv[0]);
        return 1;
    }

    fp=fopen(argv[1],"r");

    if(fp==NULL)
    {
        printf("File not found\n");
        return 1;
    }

    fout=fopen("output.i","w");

    while(fgets(line,sizeof(line),fp))
    {
        /* Handle #define */

        if(strncmp(line,"#define",7)==0)
        {
            sscanf(line,"#define %s %s",
                   M[count].key,
                   M[count].value);

            count++;
            continue;
        }

        /* Remove // comments */

        p=strstr(line,"//");

        if(p)
        {
            *p='\0';
            strcat(line,"\n");
        }
        if(strncmp(line,"#include",8)==0)
{
    char hfile[100];

    sscanf(line,"#include \"%[^\"]\"",hfile);

    FILE *fh=fopen(hfile,"r");

    if(fh)
    {
        char hline[200];

        while(fgets(hline,sizeof(hline),fh))
        {
            fputs(hline,fout);
        }

        fclose(fh);
    }

    continue;
}
        /* Expand macros */

        for(int i=0;i<count;i++)
        {
            while((p=strstr(line,M[i].key))!=NULL)
            {
                char temp[300];

                int pos=p-line;

                strcpy(temp,p+strlen(M[i].key));

                line[pos]='\0';

                strcat(line,M[i].value);
                strcat(line,temp);
            }
        }

        fputs(line,fout);
    }

    fclose(fp);
    fclose(fout);

    printf("Preprocessing complete\n");

    return 0;
}