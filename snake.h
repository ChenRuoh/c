#ifndef _SNAKE_H_
#define _SNAKE_H_
#include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include <math.h>
 #include <time.h>
 #include <conio.h>
 #include <windows.h>
 
 #define WIDE 100
 #define HIGH 25
 
 //һ������Ķ��� 
 struct BODY {
 	int X;
 	int Y;
 }; 
 
 //�����߶���
 struct SNAKE {
 	struct BODY body[WIDE*HIGH];//�ܴ�С 
 	int size; 
 }snake;    //һ���߶��� 
 
 //����ʳ�����
 struct FOOD {
 	int X;
	int Y; 
 } food;    //һ��ʳ�����
 
  int score = 0;
 
 //��������
 void initSnake(void);
 void initFood(void); 

#endif
