//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int sex,age;
	printf("�п�J�ʧO(�k��1,�k��2)\n");
	scanf("%d",&sex);
	printf("�п�J�~��\n");
	scanf("%d",&age);

	if( sex==1 ){
		
    	if(age>=18)
         {printf ("�i�H���B\n") ;}

	     else{printf("���൲�B\n");} }

    if( sex==2 ){
    	
    	if(age>=16)
    	
         {printf ("�i�H���B\n") ;}
         
	     else {printf("���൲�B\n");} }
	
	if( sex>2 )

         {printf ("�п�J���T�ʧO�N��\n") ;}
	     
	system("PAUSE");
	return 0;
}
