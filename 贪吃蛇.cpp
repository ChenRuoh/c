 #define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include <math.h>
 #include <time.h>
 
 #define WIDE 100
 #define HIGH 25
 
 //一个身体的对象 
 struct BODY {
 	int X;
 	int Y;
 }; 
 
 //定义蛇对象
 struct snake{
 	struct BODY body[WIDE*HIGH];//总大小 
 	int size; 
 	
 };
  
 int main(void){
 	//行 
 	for(size_t i = 0; i< 25; i++)//此处25表示行宽 
 	{
 		//列 
 		for(size_t j = 0; j < 100; j++)
 		{
 			printf("*"); 
		 }
		printf("\n");
	 }
	 system("pause");
	 return EXIT_SUCCESS;
 }
