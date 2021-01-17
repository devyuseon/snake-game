#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


#define BLACK	0
#define BLUE1	1
#define GREEN1	2
#define CYAN1	3
#define RED1	4
#define MAGENTA1 5
#define YELLOW1	6
#define GRAY1	7
#define GRAY2	8
#define BLUE2	9
#define GREEN2	10
#define CYAN2	11
#define RED2	12
#define MAGENTA2 13
#define YELLOW2	14
#define WHITE	15

#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define UP 72

#define ESC 0x1b //  ESC ������ ����
#define SPACE 32 // ����

#define MAPWIDTH 25
#define MAPHEIGHT 25
#define SNAKELENGTH 22
#define MAX_LENGHT 128
#define MAXBLOCK 5

// �����ڽ� ũ��
#define HEIGHT 25
#define WIDTH 88

typedef struct _body
{
    int x;
    int y;
}Body;

Body body[SNAKELENGTH+1][SNAKELENGTH + 1];
Body Temp[SNAKELENGTH + 1][SNAKELENGTH+1];

typedef struct _food
{
    int x;
    int y;
}Food;

typedef struct _enemy
{
    int x;
    int y;
}Enemy;

typedef struct _block
{
    int x[5];
    int y[5];
}Block;

Food food;
Enemy enemy;
Block block;

int i, j;

typedef struct _logic
{
    bool Up;
    bool Down;
    bool Right;
    bool Left;
}Logic;
Logic l;

static int score = 0;

// �ʱ�ȭ�� ���� 
int PrintMenuPage();
void print_title();
void draw_box(int x1, int x2, int y1, int y2);
void ShowRank();

// ���� ȯ�� ����
void Map();
void Init();
void FoodOutput();

// �÷��̾� action
void TempToBody();
void MoveCoor();
void BodyToTemp();
void Delete();
void Output();
void Move();
void Eat();
void BodyPlus();

// ��ֹ� ���� �� ���
void InitBlock();
void PrintBlock(int x, int y);
void DeleteBlock(int x, int y);

// ���� ������
void Score();
void AfterGameOver();
void GameOver();
void GameExplain();

// ��ƿ ���
void gotoxy(int x, int y);
void textcolor(int fg_color, int bg_color);
void cls(int text_color, int bg_color);
void removeCursor(void);
