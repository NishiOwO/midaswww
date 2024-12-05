#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* convert uid file to ascii file to use in c */
void converttoc ();
char *getfilename();

main ( argc, agrv)
int argc;
char *agrv[];
{
	FILE *fp;

	if (argc == 1) 
	{
	  printf("uid2c: no file input \n");
	  exit(0);
	}
	else
	{
	  if ((fp = fopen(agrv[1], "r")) == NULL)
	  {
	     printf("uid2c: can't open %s\n",agrv[1]);
	     return 1;
	  }
	  else
	  {
	     converttoc(fp, agrv[1]);
	     fclose(fp);
	   }
	}
	return 0;
}

void converttoc (infp, filein)
FILE *infp;
char *filein;
{
	FILE *outfp;
	char fileout[100], name[100], *tempf;
	int c, i;

	tempf = getfilename(filein);
	strcpy(fileout, tempf);
	strcpy(name, tempf);
	strcat(fileout,".uic");

	if ((outfp = fopen(fileout,"w")) == NULL)
	{
	  printf("uid2c: can't open %s\n",fileout);
	  exit (1);
	}
	else 
	{
	  c = getc(infp);
	  fprintf(outfp, "char %s[] = { \n %d",name,c);
	  i = 0;
 	  while ((c = getc(infp)) != EOF)
	  {
	     i++;
	     if (i < 20)
	       fprintf(outfp, ",%d",c); 
	     else {
	       fprintf(outfp, ",%d\n",c);
	       i = 0;
	     }
	  }
	  fprintf(outfp," };\n");
	  fclose(outfp);
	}
}

char *getfilename (infile)
char *infile;
{
	static char filename[100];

	strcpy(filename, infile);
	filename[strlen(infile)-4] = '\0';
	return filename;
}
