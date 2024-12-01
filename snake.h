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
 
 //一个身体的对象 
 struct BODY {
 	int X;
 	int Y;
 }; 
 
 //定义蛇对象
 struct SNAKE {
 	struct BODY body[WIDE*HIGH];//总大小 
 	int size; 
 }snake;    //一个蛇对象 
 
 //定义食物对象
 struct FOOD {
 	int X;
	int Y; 
 } food;    //一个食物对象
 
  int score = 0;
 
 //声明函数
 void initSnake(void);
 void initFood(void); 

#endif
