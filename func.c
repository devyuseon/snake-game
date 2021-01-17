#include "header.h"

int snake[SNAKELENGTH+1][SNAKELENGTH+1] =
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1}
};

int map[MAPWIDTH][MAPHEIGHT] =
{
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};

//--------------------------------------------------------------------------------------------------------------------------

int PrintMenuPage()
{
    int x = 40;
    int y = 18;

    gotoxy(35, 16); printf(" SPACE로 메뉴 선택 ! ");
    gotoxy(38, 18); printf("> 1. 게임 시작"); // 0
    gotoxy(38, 19); printf("  2. 랭킹 보기"); // 1
    gotoxy(38, 20); printf("  3. 종료     "); // 2

    while (1)
    {   
        if (_kbhit() == 1)
        {
            int n = _getch();
            switch (n)
            {
            case UP:
                if (y > 18)
                {
                    gotoxy(x - 2, y);
                    printf(" ");
                    gotoxy(x - 2, --y);
                    printf(">");
                }
                break;
            case DOWN:
            {
                if (y < 20)
                {
                    gotoxy(x - 2, y);
                    printf(" ");
                    gotoxy(x - 2, ++y);
                    printf(">");
                }
                break;
            }
            case SPACE:
            {
                return y - 18;
            }
            }
        }
        }
        

    cls(WHITE, BLACK);
}

void print_title()
{
    printf("\n");
    textcolor(CYAN1, BLACK);
    gotoxy(12, 2);  printf("     ■■■■■  ■      ■  ■■■■■  ■      ■ ■■■■■ \n");
    gotoxy(12, 3);  printf("     ■          ■ ■   ■  ■      ■  ■    ■   ■         \n");
    gotoxy(12, 4);  printf("     ■■■■■  ■   ■ ■  ■■■■■  ■■■     ■■■■■ \n");
    gotoxy(12, 5);  printf("             ■  ■      ■  ■      ■  ■    ■   ■         \n");
    gotoxy(12, 6);  printf("     ■■■■■  ■      ■  ■      ■  ■      ■ ■■■■■ \n\n");
    textcolor(CYAN2, BLACK);    
    gotoxy(12, 8);  printf("           ■■■■■  ■■■■■  ■      ■  ■■■■■ \n");
    gotoxy(12, 9);  printf("           ■          ■      ■  ■ ■■ ■  ■         \n");
    gotoxy(12, 10); printf("           ■  ■■■  ■■■■■  ■  ■  ■  ■■■■■ \n");
    gotoxy(12, 11); printf("           ■      ■  ■      ■  ■      ■  ■         \n");
    gotoxy(12, 12); printf("           ■■■■■  ■      ■  ■      ■  ■■■■■ \n");
    textcolor(WHITE, BLACK);
}

void draw_box(int x1, int x2, int y1, int y2)
{
    int x, y;

    for (x = x1; x < x2; x += 2)
    {
        gotoxy(x, y1);
        printf("─");
        gotoxy(x, y2);
        printf("─");
    }
    for (y = y1; y <= y2; y++)
    {
        gotoxy(x1, y);
        printf("│");
        gotoxy(x2, y);
        printf("│");
    }
    gotoxy(x1, y1);
    printf("┌");
    gotoxy(x2, y1);
    printf("┐");
    gotoxy(x1, y2);
    printf("└");
    gotoxy(x2, y2);
    printf("┘");

    printf("\n");
}

void ShowRank() {
    system("cls");
    char ch;
    char buffer[MAX_LENGHT];
    FILE* file = NULL;
    if (0 == fopen_s(&file,"ranking.txt", "rt"))
    {   
        printf("\n    <이름>\t     <점수>  ");
        printf("\t>> SPACE 누르면 메뉴화면으로 이동 <<\n\n");
        while (fgets(buffer, MAX_LENGHT, file) != NULL)
        {
            printf("%s", buffer);
        }
        fclose(file);
        printf("\n\n");
    }
    while (1)
    {   
        ch = _getch();
        if (ch == SPACE)
        {
            break;
        }
    }
}

//--------------------------------------------------------------------------------------------------------------------------


void Map()
{
    for (i = 0; i < MAPHEIGHT; i++)
    {
        for (j = 0; j < MAPWIDTH; j++)
        {
            if (map[i][j] == 1)
                printf("■");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void Init()
{
    l.Up = false;
    l.Down = false;
    l.Right = false;
    l.Left = false;

    body[SNAKELENGTH][SNAKELENGTH].x = 14;
    body[SNAKELENGTH][SNAKELENGTH].y = 14;

    body[SNAKELENGTH][SNAKELENGTH-1].x = 12;
    body[SNAKELENGTH][SNAKELENGTH-1].y = 14;

    body[SNAKELENGTH][SNAKELENGTH-2].x = 10;
    body[SNAKELENGTH][SNAKELENGTH-2].y = 14;

}

void FoodOutput()
{
    bool ExitOutLoop = false;

    srand((unsigned)time(NULL));

    food.x = (rand() % (MAPHEIGHT-2) + 1) * 2;
    food.y = rand() % (MAPHEIGHT - 2) + 1;

    for (i = SNAKELENGTH; i >= 0; i--)
    {
        for (j = SNAKELENGTH; j >= 0; j--)
        {
            if (body[i][j].x == food.x && body[i][j].y == food.y)
            {
                food.x = (rand() % (MAPHEIGHT - 2) + 1) * 2;
                food.y = rand() % (MAPHEIGHT - 2) + 1;
            }
        }
    }

    gotoxy(food.x, food.y);
    textcolor(BLUE2, BLACK);
    printf("★");
    textcolor(WHITE, BLACK);

}

//--------------------------------------------------------------------------------------------------------------------------

void TempToBody()
{
    bool ExitOutLoop = false;

    for (i = SNAKELENGTH; i >= 0; i--)
    {
        for (j = SNAKELENGTH; j >= 0; j--)
        {
            if (snake[i][j] == 1)
            {
                Temp[i][j].x = body[i][j].x;
                Temp[i][j].y = body[i][j].y;
            }

            if (snake[i][j] == 0)
            {
                ExitOutLoop = true;
                break;
            }
        }

        if (ExitOutLoop == true)
        {
            ExitOutLoop = false;
            break;
        }
    }
}

void MoveCoor()
{
    if (l.Up == true)
    {
        TempToBody();
        body[SNAKELENGTH][SNAKELENGTH].y--;
        BodyToTemp();
    }

    if (l.Down == true)
    {
        TempToBody();
        body[SNAKELENGTH][SNAKELENGTH].y++;
        BodyToTemp();
    }

    if (l.Right == true)
    {
        TempToBody();
        body[SNAKELENGTH][SNAKELENGTH].x += 2;
        BodyToTemp();
    }

    if (l.Left == true)
    {
        TempToBody();
        body[SNAKELENGTH][SNAKELENGTH].x -= 2;
        BodyToTemp();
    }
}

void BodyToTemp()
{
    bool ExitOutLoop = false;

    for (i = SNAKELENGTH; i > 0; i--)
    {
        for (j = SNAKELENGTH; j >= 0; j--)
        {
            if (snake[i][j] == 0 && j == 0)
            {
                body[i - 1][SNAKELENGTH].x = Temp[i][j].x;
                body[i - 1][SNAKELENGTH].y = Temp[i][j].y;
                ExitOutLoop = true;
                break;
            }

            body[i][j - 1].x = Temp[i][j].x;
            body[i][j - 1].y = Temp[i][j].y;
        }

        if (ExitOutLoop == true)
        {
            ExitOutLoop = false;
            break;
        }
    }
}

void Delete()
{
    bool ExitOutLoop = false;

    for (i = SNAKELENGTH; i >= 0; i--)
    {
        for (j = SNAKELENGTH; j >= 0; j--)
        {
            if (snake[i][j] == 1)
            {
                gotoxy(body[i][j].x, body[i][j].y);
                printf("  ");
            }

            else
            {
                ExitOutLoop = true;
                break;
            }
        }

        if (ExitOutLoop == true)
        {
            ExitOutLoop = false;
            break;
        }
    }
}

void Output()
{
    bool ExitOutLoop = false;

    for (i = SNAKELENGTH; i >= 0; i--)
    {
        for (j = SNAKELENGTH; j >= 0; j--)
        {
            if (snake[i][j] == 1)
            {   
                if (i == SNAKELENGTH && j == SNAKELENGTH) {
                    gotoxy(body[i][j].x, body[i][j].y);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
                    printf("⊙");
                    textcolor(WHITE, BLACK);
                }
                else
                {
                    gotoxy(body[i][j].x, body[i][j].y);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
                    printf("◆");
                    textcolor(WHITE, BLACK);
                }
            }
            else
            {
                ExitOutLoop = true;
                break;
            }
        }

        if (ExitOutLoop == true)
        {
            ExitOutLoop = false;
            break;
        }
    }
}

void Move()
{
    int Time = 150;
    Time = Time - (score/20);
    // 점수가 늘어날수록 움직임 빨라짐
    
    while (1)
    {
        Sleep(Time);
        Delete();
        MoveCoor();
        Output();
        Eat();
        GameOver();
        if (_kbhit())
            break;
    }


}

void Eat()
{   
    if (body[SNAKELENGTH][SNAKELENGTH].x == food.x && body[SNAKELENGTH][SNAKELENGTH].y == food.y)
    {   
        for (i = 0; i < 5; i++) DeleteBlock(block.x[i], block.y[i]);
        Score();
        BodyPlus();
        FoodOutput();
        InitBlock();
    }
}

void BodyPlus()
{
    bool ExitOutLoop = false;

    for (i = SNAKELENGTH; i >= 0; i--)
    {
        for (j = SNAKELENGTH; j >= 0; j--)
        {
            if (snake[i][j] == 0)
            {
                snake[i][j] = 1;
                ExitOutLoop = true;
                break;
            }
        }

        if (ExitOutLoop == true)
        {
            ExitOutLoop = false;
            break;
        }
    }
}

//-------------------------------------------------------------------------------------------------------------------------

void InitBlock() {

    srand((unsigned)time(NULL));

    for (int k = 0; k < 5; k++)
    {
        block.x[k] = (rand() % (MAPHEIGHT - 2) + 1) * 2;
        block.y[k] = rand() % (MAPHEIGHT - 2) + 1;

        for (i = SNAKELENGTH; i >= 0; i--)
        {
            for (j = SNAKELENGTH; j >= 0; j--)
            {
                if (body[i][j].x == block.x[k] && body[i][j].y == block.y[k]
                    || (food.x == block.x[k] && food.y == block.y[k]))
                {
                    block.x[k] = (rand() % (MAPHEIGHT - 2) + 1) * 2;
                    block.y[k] = rand() % (MAPHEIGHT - 2) + 1;
                }
            }
        }
        PrintBlock(block.x[k], block.y[k]);
     }
}

void PrintBlock(int x, int y)
{   
    gotoxy(x, y);
    textcolor(RED2, BLACK);
    printf("♨");
    textcolor(WHITE, BLACK);
}

void DeleteBlock(int x, int y)
{
    gotoxy(x, y);
    printf("  ");
}

//--------------------------------------------------------------------------------------------------------------------------

void Score()
{   
    score += 100;
    textcolor(YELLOW2, BLACK);
    gotoxy(58, 18); printf(" ────────────────┐\n");
    gotoxy(58, 19); printf("   점수 : %6d │\n", score);
    gotoxy(58, 20); printf(" ────────────────┘\n");
    textcolor(WHITE, BLACK);


}

void AfterGameOver() 
{   
    char choice;
    char name[20] = { 0 };
    FILE* fp = NULL;

    system("cls");
    textcolor(GREEN2, BLACK);
    gotoxy(35, 10); printf("      GAME OVER !"); textcolor(WHITE, BLACK);
    gotoxy(35, 12); printf("  > your score: %d <", score);
    gotoxy(31, 14); printf("  ┌──────────────────────┐\n");
    gotoxy(31, 15); printf("  │ 이름 :               │");
    gotoxy(31, 16); printf("  └──────────────────────┘\n");
    gotoxy(25, 18); printf("이름입력 - ENTER - ESC로 정보 저장 후 종료\n");
    gotoxy(25, 19); printf("                    or\n");
    gotoxy(25, 20); printf("     저장하고 싶지 않으면 ESC로 종료\n");
    
    // 플레이어 정보 저장
    gotoxy(41, 15); scanf("%s", name); fflush(stdin);
    fp = fopen("ranking.txt", "at+");
    if (fp == NULL)
    {
        printf("파일 오픈 실패");
        return 1;
    }
    fprintf(fp, "%10s\t\t%d\n", name, score);
    fclose(fp);

    choice = _getch();
    if (choice == ESC)
    {   
        gotoxy(35, 25);
        exit(1);
    }


}

void GameOver()
{   
    // 벽과 만나면 게임 오버
    if (body[SNAKELENGTH][SNAKELENGTH].x >= (MAPWIDTH*2-2) || body[SNAKELENGTH][SNAKELENGTH].x <= 0)
    {
        AfterGameOver();
    }

    if (body[SNAKELENGTH][SNAKELENGTH].y >= (MAPWIDTH-2) || body[SNAKELENGTH][SNAKELENGTH].y <= 0)
    {
        AfterGameOver();
    }


    // 머리와 몸이 만나면 게임오버
    for (i = SNAKELENGTH; i >= 0; i--)
    {
        for (j = SNAKELENGTH-1; j >= 0; j--)
        {
            if (body[SNAKELENGTH][SNAKELENGTH].x == body[i][j].x &&
                body[SNAKELENGTH][SNAKELENGTH].y == body[i][j].y)
            {
                AfterGameOver();
            }
        }
    }

    // Block과 만나면 게임 오버
    for (i = 0; i < 5; i++)
    {
        if (body[SNAKELENGTH][SNAKELENGTH].x == block.x[i]
            && body[SNAKELENGTH][SNAKELENGTH].y == block.y[i])
            AfterGameOver();
    }
}

void GameExplain()
{   
    gotoxy(58, 3);  printf("<  게임 규칙  >");
    gotoxy(58, 5);  printf("방향키로 이동!");
    gotoxy(58, 7);  printf("머리가 몸이나 벽에 닿거나,");
    gotoxy(58, 9);  printf("♨에 닿으면 게임오버");
    gotoxy(58, 11); printf("★을 먹으면 점수 +100");
    gotoxy(58, 13); printf("★을 먹을수록 빨라짐!");
    gotoxy(58, 15); printf(">> Q누르면 게임종료");
    gotoxy(56, 17); printf("──────────────────────────");
}

//--------------------------------------------------------------------------------------------------------------------------

void gotoxy(int x, int y)
{
    COORD Pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void textcolor(int fg_color, int bg_color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), fg_color | bg_color << 4);
}

void cls(int text_color, int bg_color)
{
    char cmd[100];
    system("cls");
    sprintf(cmd, "COLOR %x%x", bg_color, text_color);
    system(cmd);

}

void removeCursor(void) { // 커서를 안보이게 한다

    CONSOLE_CURSOR_INFO curInfo;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
    curInfo.bVisible = 0;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
}