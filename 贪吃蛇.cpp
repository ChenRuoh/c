 #define _CRT_SECURE_NO_WARNINGS 

#include "snake.h"//�����Զ���ͷ�ļ� 

 void playGame(void)
 {
 	char key = 'd';
 	
 	//�ж���ײǽ 
 	while(snake.body[0].X >= 0 && snake.body[0].X < WIDE
	   && snake.body[0].Y >= 0 && snake.body[0].Y < HIGH)
 	{
 		//������
		 initUI ();
 		//�����û���������
		 if(kbhit()){   //Ϊ��ʱ��˵���û����°���     kbhit�������ж��û����� 
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
 		
 	    //��ͷײ����:��ͷ==����һ������ 
		for(size_t i = 0; i < snake.size; i++) 
		{
			if(snake.body[0].X == snake.body[i].X 
			   && snake.body[0].Y == snake.body[i].Y)
			   {
			   	return; //��Ϸ���� 
			   }
		}
		//��ͷײʳ��
		if (snake.body[0].X == food.X && snake.body[0].Y == food.Y)
		{
			//ʳ����ʧ
			initFood();
			//��������
			snake.size++;
			//�ӷ�
			score++;
			//���� 
		}
		
		//���ƶ���ǰһ���������һ�����帳ֵ
		for (size_t i = snake.size-1; i > 0; i--) 
		{
			snake.body[i].X == snake.body[i-1].X;
			snake.body[i].Y == snake.body[i-1].Y;
		}
        snake.body[0].X += kx;   //��ͷ��������û��������� 
        snake.body[0].Y += ky;
        
        //����
		system("cls");
	 }
	return;
 }
 
 void init

 int main(void){ 
    srand(time(NULL));//������������� 
     
	initSnake();//��ʼ����
	initFood();//��ʼ��ʳ��
	 
	initUI();  //���ߺ�ʳ�� 
	 
	playGame();  //������Ϸ 
	 
	 
	//��ӡ���� 
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
  
  //��ʼ��������� 
 void initUI(void)
 {
	COORD coord = {0};           //����ƶ���λ�� 
	 	//����
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
	//��ʳ��
	coord.X = food.X;
	coord.Y = food.Y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');
	
	//�����Ĭ��λ���ƶ�����������Ϸ��λ��
	coord.X = 0;
	coord.Y = HIGH + 2;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
 }
  
 // �����ʼ��ʳ�ﺯ��
 void initFood(void)
 {
 	food.X = rand() % WIDE;//��ʼ��ʳ��ĺ�������0-59
	food.Y = rand() % HIGH;	
	return;  
  } 
