//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int sex,age;
	printf("請輸入性別(男生1,女生2)\n");
	scanf("%d",&sex);
	printf("請輸入年齡\n");
	scanf("%d",&age);

	if( sex==1 ){
		
    	if(age>=18)
         {printf ("可以結婚\n") ;}

	     else{printf("不能結婚\n");} }

    if( sex==2 ){
    	
    	if(age>=16)
    	
         {printf ("可以結婚\n") ;}
         
	     else {printf("不能結婚\n");} }
	
	if( sex>2 )

         {printf ("請輸入正確性別代號\n") ;}
	     
	system("PAUSE");
	return 0;
}
