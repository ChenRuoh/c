 #define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include <math.h>
 #include <time.h>
 
 #define WIDE 100
 #define HIGH 25
 
 //һ������Ķ��� 
 struct BODY {
 	int X;
 	int Y;
 }; 
 
 //�����߶���
 struct snake{
 	struct BODY body[WIDE*HIGH];//�ܴ�С 
 	int size; 
 	
 };
  
 int main(void){
 	//�� 
 	for(size_t i = 0; i< 25; i++)//�˴�25��ʾ�п� 
 	{
 		//�� 
 		for(size_t j = 0; j < 100; j++)
 		{
 			printf("*"); 
		 }
		printf("\n");
	 }
	 system("pause");
	 return EXIT_SUCCESS;
 }
