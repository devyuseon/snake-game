#include "header.h"


int main()
{
    removeCursor();
    int key;
    int MenuCode;
    char user_name[256];

    while (1)
    {
        
        draw_box(0, WIDTH, 0, HEIGHT); // 괘선박스 그리기
        print_title(); // 타이틀 출력
        int MenuCode = PrintMenuPage(); // 초기화면 
        if (MenuCode == 0) {
            // 게임 시작
            system("cls");
            Map();
            Init();
            Output();
            FoodOutput();
            InitBlock();

            while (1)
            {
                GameExplain();

                if (_kbhit())
                {   
                    key = _getch();

                    if (key == 'q')
                        break;

                    switch (key)
                    {
                    case UP:
                        if (l.Down == true)
                            l.Up = false;
                        else
                        {
                            l.Up = true;
                            l.Down = false;
                            l.Right = false;
                            l.Left = false;
                        }
                        Move();
                        break;
                    case DOWN:
                        if (l.Up == true)
                            l.Down = false;
                        else
                        {
                            l.Down = true;
                            l.Up = false;
                            l.Right = false;
                            l.Left = false;
                        }
                        Move();
                        break;
                    case LEFT:
                        if (body[SNAKELENGTH][SNAKELENGTH].x == 14 && body[SNAKELENGTH][SNAKELENGTH].y == 14)
                            l.Left = false;
                        else if (l.Right == true)
                            l.Left = false;
                        else
                        {
                            l.Left = true;
                            l.Down = false;
                            l.Right = false;
                            l.Up = false;
                        }
                        Move();
                        break;
                    case RIGHT:
                        if (l.Left == true)
                            l.Right = false;
                        else
                        {
                            l.Right = true;
                            l.Down = false;
                            l.Up = false;
                            l.Left = false;
                        }
                        Move();
                        break;
                    default:
                        break;
                    }
                }
            }
            return 0;
        }
        else if (MenuCode == 1)
        {
            ShowRank();
        }
        else if (MenuCode == 2)
        {   
            gotoxy(32, MAPHEIGHT + 1);
            exit(1);
        }
        
        system("cls");
    }
}