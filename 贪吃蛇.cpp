 #define _CRT_SECURE_NO_WARNINGS 

#include "snake.h"//引入自定义头文件 

 int main(void){
     srand(time(NULL));//播种随机数种子 
     
     initSnake();//初始化蛇
	 initFood();//初始化食物
	 
	 printf("snake 头:x=%d, y=%d\n", snake.body[0].X, snake.body[0].Y) ;
	 printf("snake 身:x=%d, y=%d\n", snake.body[1].X, snake.body[1].Y) ;
	  printf("food:x=%d, y=%d\n", food.X, food.Y) ;
	 system("pause");
	 return EXIT_SUCCESS;
 } 
 
  //定义初始化蛇函数 
 void initSnake(void)
 {
 	snake.size = 2;
	  
 	snake.body[0].X = WIDE/2;
 	snake.body[0].Y = HIGH/2;  //初始化蛇头
 	
	snake.body[1].X = WIDE/2 - 1;
	snake.body[1].Y = HIGH/2;  //初始化一节蛇身 
  } 
  
 // 定义初始化食物函数
 void initFood(void)
 {
 	food.X = rand() % WIDE;//初始化食物的横坐标是0-59
	food.Y = rand() % HIGH;	
	return;  
  } 
