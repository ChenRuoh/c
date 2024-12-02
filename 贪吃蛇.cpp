 #define _CRT_SECURE_NO_WARNINGS 

#include "snake.h"//引入自定义头文件 

 void playGame(void)
 {
 	char key = 'd';
 	
 	//判断蛇撞墙 
 	while(snake.body[0].X >= 0 && snake.body[0].X < WIDE
	   && snake.body[0].Y >= 0 && snake.body[0].Y < HIGH)
 	{
 		//更新蛇
		 initUI ();
 		//接受用户按键输入
		 if(kbhit()){   //为真时，说明用户按下按键     kbhit不堵塞判断用户输入 
		    key = getch();
	    }
	    
	    switch (key)
	    {
	    	case 'w' :
				kx = 0;
				ky = -1;
				break;
			case 's' :
				kx = 0;
				ky = +1;
				break;
			case 'd' :
				kx = -1;
				ky = -0;
				break;
			case 'a' :
				kx = +1;
				ky = 0;
				break;
		default :
			break;
		}
 		
 	    //蛇头撞身体:蛇头==任意一节身体 
		for(size_t i = 0; i < snake.size; i++) 
		{
			if(snake.body[0].X == snake.body[i].X 
			   && snake.body[0].Y == snake.body[i].Y)
			   {
			   	return; //游戏结束 
			   }
		}
		//蛇头撞食物
		if (snake.body[0].X == food.X && snake.body[0].Y == food.Y)
		{
			//食物消失
			initFood();
			//身体增长
			snake.size++;
			//加分
			score++;
			//加速 
		}
		
		//蛇移动，前一节身体给后一节身体赋值
		for (size_t i = snake.size-1; i > 0; i--) 
		{
			snake.body[i].X == snake.body[i-1].X;
			snake.body[i].Y == snake.body[i-1].Y;
		}
        snake.body[0].X += kx;   //蛇头坐标根据用户按键更改 
        snake.body[0].Y += ky;
        
        //清屏
		system("cls");
	 }
	return;
 }
 
 void init

 int main(void){ 
    srand(time(NULL));//播种随机数种子 
     
	initSnake();//初始化蛇
	initFood();//初始化食物
	 
	initUI();  //画蛇和食物 
	 
	playGame();  //启动游戏 
	 
	 
	//打印分数 
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
  
  //初始化界面控制 
 void initUI(void)
 {
	COORD coord = {0};           //光标移动的位置 
	 	//画蛇
	for (size_t i = 0; i<snake.size; i++)
	{
		coord.X = snake.body[i].X;
		coord.Y = snake.body[i].Y;
    	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		
		if(i == 0)
	    	putchar('@'); 
	    else
	        putchar('*');
	}
	//画食物
	coord.X = food.X;
	coord.Y = food.Y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');
	
	//将光标默认位置移动至不干扰游戏的位置
	coord.X = 0;
	coord.Y = HIGH + 2;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
 }
  
 // 定义初始化食物函数
 void initFood(void)
 {
 	food.X = rand() % WIDE;//初始化食物的横坐标是0-59
	food.Y = rand() % HIGH;	
	return;  
  } 
