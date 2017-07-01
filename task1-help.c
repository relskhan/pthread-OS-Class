	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <pthread.h>

	/* Global variable: accessible to all threads */
	int total = 0;
	int n1,n2;
	// char *s1,*s2;
	FILE *fp;

	/* Prototypes */
	int num_substring(void); /* Given Substrings Function */
	int readf(void); /* stand in for file read */

	/* Input for testing - will be from readfile */
	char x1[49] = "vgccgcporertfewjjqhjreuvpubfiterhmdxereotxmhcnsre";  /* A normal char*/
	char x2[2] = "re";          
	char *s1;	/* A pointer to an char ("*s1" is a char, so s1
	                       must be a pointer to an char) */
	char *s2;
	         


	int main(int argc, char* argv[]) {

		readf();

		return 0;
	}	/* MAIN */

	// make a function to return s1, s2, n1 ,n2 maybe fp

	int readf(void){
		s1 = &x1[0];           /* Read it, "assign the address of x1 to s1" */
		s2 = &x2[0];  
		/* Input for testing - will be from readfile */
		n1=strlen(s1);   			   /*length of s1*/
		n2=strlen(s2)-1; 			   /*length of s2*/
		/* ----------------------------------------- */
		return -1;
	}	/* readf */

