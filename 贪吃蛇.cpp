 #define _CRT_SECURE_NO_WARNINGS 

#include "snake.h"//�����Զ���ͷ�ļ� 

 int main(void){
     srand(time(NULL));//������������� 
     
     initSnake();//��ʼ����
	 initFood();//��ʼ��ʳ��
	 
	 printf("snake ͷ:x=%d, y=%d\n", snake.body[0].X, snake.body[0].Y) ;
	 printf("snake ��:x=%d, y=%d\n", snake.body[1].X, snake.body[1].Y) ;
	  printf("food:x=%d, y=%d\n", food.X, food.Y) ;
	 system("pause");
	 return EXIT_SUCCESS;
 } 
 
  //�����ʼ���ߺ��� 
 void initSnake(void)
 {
 	snake.size = 2;
	  
 	snake.body[0].X = WIDE/2;
 	snake.body[0].Y = HIGH/2;  //��ʼ����ͷ
 	
	snake.body[1].X = WIDE/2 - 1;
	snake.body[1].Y = HIGH/2;  //��ʼ��һ������ 
  } 
  
 // �����ʼ��ʳ�ﺯ��
 void initFood(void)
 {
 	food.X = rand() % WIDE;//��ʼ��ʳ��ĺ�������0-59
	food.Y = rand() % HIGH;	
	return;  
  } 
