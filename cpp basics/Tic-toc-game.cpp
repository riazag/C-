//--TIC-TAC-TOE Game
#include <graphics>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <ctype.h>

// mouse handle function
union REGS in, out;
void status();
void position(int *, int *, int *);
void show();
void hide();
void setpos();

// Screen functions

struct GameData
{
    int GmType;
    char Plr1[20];
    char Ps1;
    char Plr2[20];
    char Ps2;
    char TermPlr[20];
    char TermSgn;
    char sing[9];
} Gd;

void Home_Scr();
int check_win(const char sing[9]);
char *com_term(char sing[9], char ss, char ps1);
void shap_draw(int, int, char);
int isResult();

void main()
{
    int Vs = 1;
    int x, y, m, i, j;
    char qu;
    int pus = 1;
    int res = 0;
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "c:\\TURBOC3\\bgi");
    errorcode = graphresult();
    if (errorcode != grOk)
    {
        cout << "Graphics error: \n"
             << grapherrormsg(errorcode);
        cout << "Press any key to halt:";
        getch();
        exit(1);
    }

RESTART:
{
    cleardevice();
    gotoxy(1, 1);
    Gd.GmType = 1;
    strcpy(Gd.Plr1, "Yogesh");
    strcpy(Gd.Plr2, "Computer");
    strcpy(Gd.TermPlr, "Yogesh");
    Gd.Ps1 = 'X';
    Gd.Ps2 = 'O';
    Gd.TermSgn = 'X';
    do
    {
        cleardevice();
        cout << "\nTic Tac Toe Game";
        cout << "\n1) Human Vs Computer \n2) Human Vs Human \n3) Exit";
        cout << "\nEnter your choice : ";
        scanf("%d", &Vs);
        if (Vs == 1)
        {
            cout << "\nEnter the player name(Max 8 character) : ";
            scanf(" %s", &Gd.Plr1);
            cout << "\nEnter the player sign (X or O) : ";
            scanf(" %c", &Gd.Ps1);
            if (!(Gd.Ps1 == 'X' || Gd.Ps1 == 'x' || Gd.Ps1 == 'O' || Gd.Ps1 == 'o'))
            {
                cout << "\nError : Not a valid choice.\n";
                getch();
                continue;
            }
            else if (strlen(Gd.Plr1) > 8)
            {
                cout << "\nError : Player name can not be greater than 8 characters.\n";
                getch();
                continue;
            }
            strcpy(Gd.Plr2, "Computer");
            Gd.Ps2 = (Gd.Ps1 == 'x' || Gd.Ps1 == 'X') ? 'O' : 'X';
        }
        else if (Vs == 2)
        {
            cout << "\nEnter the 1st player name(Max 8 character) : ";
            scanf(" %s", &Gd.Plr1);
            cout << "\nEnter the 2nd player name(Max 8 character) : ";
            scanf(" %s", &Gd.Plr2);
            cout << "\nEnter the 1st player sign (X or O) : ";
            scanf(" %c", &Gd.Ps1);
            if (!(Gd.Ps1 == 'X' || Gd.Ps1 == 'x' || Gd.Ps1 == 'O' || Gd.Ps1 == 'o'))
            {
                cout << "\nError : Not a valid choice.\n";
                getch();
                continue;
            }
            else if (strlen(Gd.Plr1) > 8 || strlen(Gd.Plr2) > 8)
            {
                cout << "\nError : Players name can not be greater than 8 characters.\n";
                getch();
                continue;
            }
            Gd.Ps2 = (Gd.Ps1 == 'x' || Gd.Ps1 == 'X') ? 'O' : 'X';
        }
        else if (Vs == 3)
        {
            closegraph();
            exit(1);
        }
        else
        {
            cout << "\nError : Not a valid choice.\n";
            getch();
            continue;
        }
        break;
    } while (1);

    Gd.Ps1 = toupper(Gd.Ps1);
    Gd.Ps2 = toupper(Gd.Ps2);

    Gd.GmType = Vs;
    strcpy(Gd.TermPlr, Gd.Plr1);
    Gd.TermSgn = Gd.Ps1;

    for (i = 0; i < 9; i++)
    {
        Gd.sing[i] = ' ';
    }
    Gd.sing[9] = '\0';
    res = 0;
};
    hide();
    cleardevice();
    Home_Scr();
    show();
    setpos();
    position(&x, &y, &m);

    while (1)
    {
        if (Gd.GmType == 1)
        {
            if (strcmp(Gd.TermPlr, "Computer") == 0)
            {
                strcpy(Gd.sing, com_term(Gd.sing, Gd.Ps2, Gd.Ps1));
                if (Gd.TermSgn == 'X' || Gd.TermSgn == 'x')
                {
                    Gd.TermSgn = 'O';
                    if (Gd.Ps1 == Gd.TermSgn)
                    {
                        strcpy(Gd.TermPlr, Gd.Plr1);
                    }
                    else
                    {
                        strcpy(Gd.TermPlr, Gd.Plr2);
                    }
                }
                else
                {
                    if (Gd.TermSgn == 'O' || Gd.TermSgn == 'o')
                    {
                        Gd.TermSgn = 'X';
                        if (Gd.Ps1 == Gd.TermSgn)
                        {
                            strcpy(Gd.TermPlr, Gd.Plr1);
                        }
                        else
                        {
                            strcpy(Gd.TermPlr, Gd.Plr2);
                        }
                    }
                }
                hide();
                cleardevice();
                Home_Scr();
                show();
                setpos();
                position(&x, &y, &m);
                delay(1000);
                res = isResult();
            }
        }

        if (pus == 1)
        {
            show();
            position(&x, &y, &m);
            if (x >= 350 && x <= 400 && y >= 0 && y <= 40) //----for Exit
            {
                if (m == 1)
                {
                    setcolor(RED);
                    settextstyle(7, 0, 3);
                    setfillstyle(SOLID_FILL, YELLOW);
                    bar(20, 150, 380, 300);
                    outtextxy(200, 225, "Do you want to exit (Y/N)?");
                    qu = getch();
                    if (qu == 'y' || qu == 'Y')
                    {
                        exit(0);
                    }
                    cleardevice();
                    Home_Scr();
                }
            }
            if (x >= 0 && x <= 100 && y >= 40 && y <= 60) //----for Restart
            {
                if (m == 1)
                {
                    setcolor(RED);
                    settextstyle(7, 0, 3);
                    setfillstyle(SOLID_FILL, YELLOW);
                    bar(10, 150, 400, 300);
                    outtextxy(200, 225, "Do you want to restart(Y/N)?");
                    qu = getch();
                    if (qu == 'y' || qu == 'Y')
                    {
                        goto RESTART;
                    }
                    cleardevice();
                    Home_Scr();
                }
            }
            if (x >= 0 && x < 133 && y > 60 && y <= 193) //----for cord(0,0)
            {
                if (m == 1)
                {
                    if (Gd.sing[0] == ' ')
                    {
                        Gd.sing[0] = Gd.TermSgn;
                        if (Gd.TermSgn == 'X' || Gd.TermSgn == 'o')
                        {
                            Gd.TermSgn = 'O';
                            if (Gd.Ps1 == Gd.TermSgn)
                            {
                                strcpy(Gd.TermPlr, Gd.Plr1);
                            }
                            else
                            {
                                strcpy(Gd.TermPlr, Gd.Plr2);
                            }
                        }
                        else
                        {
                            if (Gd.TermSgn == 'O' || Gd.TermSgn == 'o')
                            {
                                Gd.TermSgn = 'X';
                                if (Gd.Ps1 == Gd.TermSgn)
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr1);
                                }
                                else
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr2);
                                }
                            }
                        }
                        hide();
                        cleardevice();
                        Home_Scr();
                        delay(1000);
                        res = isResult();
                    }
                }
            }

            if (x >= 133 && x < 266 && y > 60 && y <= 193) //---for cord(0,1)
            {
                if (m == 1)
                {
                    if (Gd.sing[1] == ' ')
                    {
                        Gd.sing[1] = Gd.TermSgn;
                        if (Gd.TermSgn == 'X' || Gd.TermSgn == 'o')
                        {
                            Gd.TermSgn = 'O';
                            if (Gd.Ps1 == Gd.TermSgn)
                            {
                                strcpy(Gd.TermPlr, Gd.Plr1);
                            }
                            else
                            {
                                strcpy(Gd.TermPlr, Gd.Plr2);
                            }
                        }
                        else
                        {
                            if (Gd.TermSgn == 'O' || Gd.TermSgn == 'o')
                            {
                                Gd.TermSgn = 'X';
                                if (Gd.Ps1 == Gd.TermSgn)
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr1);
                                }
                                else
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr2);
                                }
                            }
                        }
                        hide();
                        cleardevice();
                        Home_Scr();
                        delay(1000);
                        res = isResult();
                    }
                }
            }

            if (x >= 266 && x < 400 && y > 60 && y <= 193) //---for cord(0,2)
            {
                if (m == 1)
                {
                    if (Gd.sing[2] == ' ')
                    {
                        Gd.sing[2] = Gd.TermSgn;
                        if (Gd.TermSgn == 'X' || Gd.TermSgn == 'o')
                        {
                            Gd.TermSgn = 'O';
                            if (Gd.Ps1 == Gd.TermSgn)
                            {
                                strcpy(Gd.TermPlr, Gd.Plr1);
                            }
                            else
                            {
                                strcpy(Gd.TermPlr, Gd.Plr2);
                            }
                        }
                        else
                        {
                            if (Gd.TermSgn == 'O' || Gd.TermSgn == 'o')
                            {
                                Gd.TermSgn = 'X';
                                if (Gd.Ps1 == Gd.TermSgn)
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr1);
                                }
                                else
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr2);
                                }
                            }
                        }

                        hide();
                        cleardevice();
                        Home_Scr();
                        delay(1000);
                        res = isResult();
                    }
                }
            }
            if (x >= 0 && x < 133 && y > 194 && y <= 326) //-- for cord(1,0)
            {
                if (m == 1)
                {
                    if (Gd.sing[3] == ' ')
                    {
                        Gd.sing[3] = Gd.TermSgn;
                        if (Gd.TermSgn == 'X' || Gd.TermSgn == 'o')
                        {
                            Gd.TermSgn = 'O';
                            if (Gd.Ps1 == Gd.TermSgn)
                            {
                                strcpy(Gd.TermPlr, Gd.Plr1);
                            }
                            else
                            {
                                strcpy(Gd.TermPlr, Gd.Plr2);
                            }
                        }
                        else
                        {
                            if (Gd.TermSgn == 'O' || Gd.TermSgn == 'o')
                            {
                                Gd.TermSgn = 'X';
                                if (Gd.Ps1 == Gd.TermSgn)
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr1);
                                }
                                else
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr2);
                                }
                            }
                        }

                        hide();
                        cleardevice();
                        Home_Scr();
                        delay(1000);
                        res = isResult();
                    }
                }
            }

            if (x >= 133 && x < 266 && y > 194 && y <= 326) //---for cord(1,1)
            {
                if (m == 1)
                {
                    if (Gd.sing[4] == ' ')
                    {
                        Gd.sing[4] = Gd.TermSgn;
                        if (Gd.TermSgn == 'X' || Gd.TermSgn == 'o')
                        {
                            Gd.TermSgn = 'O';
                            if (Gd.Ps1 == Gd.TermSgn)
                            {
                                strcpy(Gd.TermPlr, Gd.Plr1);
                            }
                            else
                            {
                                strcpy(Gd.TermPlr, Gd.Plr2);
                            }
                        }
                        else
                        {
                            if (Gd.TermSgn == 'O' || Gd.TermSgn == 'o')
                            {
                                Gd.TermSgn = 'X';
                                if (Gd.Ps1 == Gd.TermSgn)
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr1);
                                }
                                else
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr2);
                                }
                            }
                        }

                        hide();
                        cleardevice();
                        Home_Scr();
                        delay(1000);
                        delay(1000);
                        res = isResult();
                    }
                }
            }

            if (x >= 266 && x < 400 && y > 194 && y <= 326) //--- for cord(1,2)
            {
                if (m == 1)
                {
                    if (Gd.sing[5] == ' ')
                    {
                        Gd.sing[5] = Gd.TermSgn;
                        if (Gd.TermSgn == 'X' || Gd.TermSgn == 'o')
                        {
                            Gd.TermSgn = 'O';
                            if (Gd.Ps1 == Gd.TermSgn)
                            {
                                strcpy(Gd.TermPlr, Gd.Plr1);
                            }
                            else
                            {
                                strcpy(Gd.TermPlr, Gd.Plr2);
                            }
                        }
                        else
                        {
                            if (Gd.TermSgn == 'O' || Gd.TermSgn == 'o')
                            {
                                Gd.TermSgn = 'X';
                                if (Gd.Ps1 == Gd.TermSgn)
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr1);
                                }
                                else
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr2);
                                }
                            }
                        }

                        hide();
                        cleardevice();
                        Home_Scr();
                        delay(1000);
                        res = isResult();
                    }
                }
            }

            if (x >= 0 && x < 133 && y > 327 && y <= 460) //--for cord(2,0)
            {
                if (m == 1)
                {
                    if (Gd.sing[6] == ' ')
                    {
                        Gd.sing[6] = Gd.TermSgn;
                        if (Gd.TermSgn == 'X' || Gd.TermSgn == 'o')
                        {
                            Gd.TermSgn = 'O';
                            if (Gd.Ps1 == Gd.TermSgn)
                            {
                                strcpy(Gd.TermPlr, Gd.Plr1);
                            }
                            else
                            {
                                strcpy(Gd.TermPlr, Gd.Plr2);
                            }
                        }
                        else
                        {
                            if (Gd.TermSgn == 'O' || Gd.TermSgn == 'o')
                            {
                                Gd.TermSgn = 'X';
                                if (Gd.Ps1 == Gd.TermSgn)
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr1);
                                }
                                else
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr2);
                                }
                            }
                        }

                        hide();
                        cleardevice();
                        Home_Scr();
                        delay(1000);
                        res = isResult();
                    }
                }
            }

            if (x >= 133 && x < 266 && y > 327 && y <= 460) //--- for cord(2,1)
            {
                if (m == 1)
                {
                    if (Gd.sing[7] == ' ')
                    {
                        Gd.sing[7] = Gd.TermSgn;
                        if (Gd.TermSgn == 'X' || Gd.TermSgn == 'o')
                        {
                            Gd.TermSgn = 'O';
                            if (Gd.Ps1 == Gd.TermSgn)
                            {
                                strcpy(Gd.TermPlr, Gd.Plr1);
                            }
                            else
                            {
                                strcpy(Gd.TermPlr, Gd.Plr2);
                            }
                        }
                        else
                        {
                            if (Gd.TermSgn == 'O' || Gd.TermSgn == 'o')
                            {
                                Gd.TermSgn = 'X';
                                if (Gd.Ps1 == Gd.TermSgn)
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr1);
                                }
                                else
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr2);
                                }
                            }
                        }

                        hide();
                        cleardevice();
                        Home_Scr();
                        delay(1000);
                        res = isResult();
                    }
                }
            }

            if (x >= 266 && x < 400 && y > 327 && y <= 460) //--- for cord(2,2)
            {
                if (m == 1)
                {
                    if (Gd.sing[8] == ' ')
                    {
                        Gd.sing[8] = Gd.TermSgn;
                        if (Gd.TermSgn == 'X' || Gd.TermSgn == 'o')
                        {
                            Gd.TermSgn = 'O';
                            if (Gd.Ps1 == Gd.TermSgn)
                            {
                                strcpy(Gd.TermPlr, Gd.Plr1);
                            }
                            else
                            {
                                strcpy(Gd.TermPlr, Gd.Plr2);
                            }
                        }
                        else
                        {
                            if (Gd.TermSgn == 'O' || Gd.TermSgn == 'o')
                            {
                                Gd.TermSgn = 'X';
                                if (Gd.Ps1 == Gd.TermSgn)
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr1);
                                }
                                else
                                {
                                    strcpy(Gd.TermPlr, Gd.Plr2);
                                }
                            }
                        }

                        hide();
                        cleardevice();
                        Home_Scr();
                        delay(1000);
                        res = isResult();
                    }
                }
            }
        }
        if (res != 0)
        {
            setcolor(RED);
            settextstyle(7, 0, 3);
            setfillstyle(SOLID_FILL, YELLOW);
            bar(20, 150, 380, 300);
            outtextxy(200, 225, "Press Any Key to Restart :");
            qu = getch();
            goto RESTART;
        }
    }
}
// Screen functions

void Home_Scr()
{
    int d, m, i;
    char trb[20];

    setbkcolor(0);
    setfillstyle(SOLID_FILL, 9);
    bar(0, 0, 400, 460);

    // title bar
    setcolor(getmaxcolor());
    settextjustify(1, 1);
    settextstyle(7, 0, 4);
    setfillstyle(SOLID_FILL, 8);
    bar(0, 0, 400, 40);
    outtextxy(100, 15, "Tic-Tac-Toe");
    setfillstyle(SOLID_FILL, RED);
    settextstyle(0, 0, 4);
    bar(350, 0, 400, 40);
    setcolor(WHITE);
    outtextxy(375, 20, "X");

    setfillstyle(SOLID_FILL, WHITE);
    settextstyle(7, 0, 3);
    bar(0, 40, 400, 60);
    setfillstyle(SOLID_FILL, CYAN);
    bar(0, 40, 100, 60);
    setcolor(BLUE);
    outtextxy(50, 45, "Restart");
    setfillstyle(SOLID_FILL, WHITE);
    settextstyle(7, 0, 3);
    bar(405, 0, 635, 460);

    line(0, 193, 400, 193);
    line(0, 326, 400, 326);

    line(133, 60, 133, 460);
    line(266, 60, 266, 460);

    setcolor(BLUE);
    outtextxy(520, 20, "GAME TYPE-->");
    if (Gd.GmType == 1)
        strcpy(trb, "MAN Vs COMPUTER");
    else
        strcpy(trb, "--MAN Vs MAN--");
    outtextxy(520, 40, trb);

    outtextxy(520, 70, "Player 1 Name-->");
    outtextxy(520, 90, Gd.Plr1);

    outtextxy(520, 120, "Player 1 Sign-->");
    sprintf(trb, "%c", Gd.Ps1);
    outtextxy(520, 140, trb);

    outtextxy(520, 170, "Player 2 Name-->:");
    outtextxy(520, 190, Gd.Plr2);

    outtextxy(520, 220, "Player 2 Sign-->");
    sprintf(trb, "%c", Gd.Ps2);
    outtextxy(520, 240, trb);

    outtextxy(520, 280, "TERM OF -->");
    outtextxy(520, 310, "Player Name-->");
    outtextxy(520, 330, Gd.TermPlr);

    outtextxy(520, 360, "Player Sign-->:");
    sprintf(trb, "%c", Gd.TermSgn);
    outtextxy(520, 380, trb);

    for (i = 0; i < 9; i++)
    {
        char ss = Gd.sing[i];
        int x = 66 + (133 * (i % 3));
        int y = 60 + 66 + (133 * (i / 3));
        shap_draw(x, y, ss);
    }
    setcolor(GREEN);
}

void shap_draw(int x, int y, char ss)
{
    float t1, k1, k2;
    int po[24];
    if (ss == 'X' || ss == 'x')
    {
        t1 = 225 * (3.1416 / 180);
        k1 = cos(t1);
        k2 = sin(t1);
        po[0] = ((x - 5) + 20 * (k1));
        po[1] = ((y) + 20 * (k2));
        po[2] = ((x) + 20 * (k1));
        po[3] = ((y - 5) + 20 * (k2));
        po[4] = x;
        po[5] = y - 5;
        t1 = 315 * (3.1416 / 180);
        k1 = cos(t1);
        k2 = sin(t1);
        po[6] = ((x) + 20 * (k1));
        po[7] = ((y - 5) + 20 * (k2));
        po[8] = ((x + 5) + 20 * (k1));
        po[9] = ((y) + 20 * (k2));
        po[10] = x + 5;
        po[11] = y;
        t1 = 45 * (3.1416 / 180);
        k1 = cos(t1);
        k2 = sin(t1);
        po[12] = ((x + 5) + 20 * (k1));
        po[13] = ((y) + 20 * (k2));
        po[14] = ((x) + 20 * (k1));
        po[15] = ((y + 5) + 20 * (k2));
        po[16] = x;
        po[17] = y + 5;

        t1 = 135 * (3.1416 / 180);
        k1 = cos(t1);
        k2 = sin(t1);
        po[18] = ((x) + 20 * (k1));
        po[19] = ((y + 5) + 20 * (k2));
        po[20] = ((x - 5) + 20 * (k1));
        po[21] = ((y) + 20 * (k2));
        po[22] = x - 5;
        po[23] = y;

        setfillstyle(1, RED);
        fillpoly(12, po);
    }
    else if (ss == 'o' || ss == 'O')
    {
        setfillstyle(1, RED);
        fillellipse(x, y, 20, 20);
        setfillstyle(1, 9);
        fillellipse(x, y, 15, 15);
    }
}

int isResult()
{
    char qu, temp[30]; // = "Winner is ";
    int chk = 0;
    chk = check_win(Gd.sing);

    strcpy(temp, "Winner is ");

    if (chk == 1)
    {
        if (Gd.Ps1 == 'X' || Gd.Ps1 == 'x')
        {
            strcat(temp, Gd.Plr1);
            strcat(temp, " (X).");
        }
        else
        {
            strcat(temp, Gd.Plr2);
            strcat(temp, " (X).");
        }
        setcolor(RED);
        settextstyle(7, 0, 3);
        setfillstyle(SOLID_FILL, YELLOW);
        bar(20, 150, 380, 300);
        outtextxy(200, 225, temp);
        getch();
        return 1;
    }
    else if (chk == 2)
    {
        if (Gd.Ps1 == 'O' || Gd.Ps1 == 'o')
        {
            strcat(temp, Gd.Plr1);
            strcat(temp, " (O).");
        }
        else
        {
            strcat(temp, Gd.Plr2);
            strcat(temp, " (O).");
        }
        setcolor(RED);
        settextstyle(7, 0, 3);
        setfillstyle(SOLID_FILL, YELLOW);
        bar(20, 150, 380, 300);
        outtextxy(200, 225, temp);
        getch();
        return 1;
    }
    else if (chk == 3)
    {
        setcolor(WHITE);
        settextstyle(7, 0, 3);
        setfillstyle(SOLID_FILL, RED);
        bar(20, 150, 380, 300);
        outtextxy(200, 225, "Game Draw.");
        getch();
        return 1;
    }
    return 0;
}

int check_win(const char sing[9])
{
    int a = 0, b, c = 0;
    char ss;
    for (b = 0; b < 9; b++)
    {
        ss = sing[b];
        if (ss == ' ')
        {
            c = 1;
        }
        if (ss == 'X' || ss == 'O')
        {
            if (b == 0)
            {
                if (ss == sing[1] && ss == sing[2])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[3] && ss == sing[6])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[4] && ss == sing[8])
                {
                    a = 1;
                    break;
                }
            }
            if (b == 1)
            {
                if (ss == sing[0] && ss == sing[2])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[4] && ss == sing[7])
                {
                    a = 1;
                    break;
                }
            }
            if (b == 2)
            {
                if (ss == sing[0] && ss == sing[1])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[5] && ss == sing[8])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[4] && ss == sing[6])
                {
                    a = 1;
                    break;
                }
            }
            if (b == 3)
            {
                if (ss == sing[0] && ss == sing[6])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[4] && ss == sing[5])
                {
                    a = 1;
                    break;
                }
            }
            if (b == 4)
            {
                if (ss == sing[0] && ss == sing[8])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[1] && ss == sing[7])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[2] && ss == sing[6])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[3] && ss == sing[5])
                {
                    a = 1;
                    break;
                }
            }
            if (b == 5)
            {
                if (ss == sing[2] && ss == sing[8])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[3] && ss == sing[4])
                {
                    a = 1;
                    break;
                }
            }
            if (b == 6)
            {
                if (ss == sing[0] && ss == sing[3])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[2] && ss == sing[4])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[7] && ss == sing[8])
                {
                    a = 1;
                    break;
                }
            }
            if (b == 7)
            {
                if (ss == sing[1] && ss == sing[4])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[6] && ss == sing[8])
                {
                    a = 1;
                    break;
                }
            }
            if (b == 8)
            {
                if (ss == sing[0] && ss == sing[4])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[2] && ss == sing[5])
                {
                    a = 1;
                    break;
                }
                if (ss == sing[6] && ss == sing[7])
                {
                    a = 1;
                    break;
                }
            }
        }
    }

    if (ss == 'O' && a == 1)
    {
        a = 2;
    }
    if (c == 0 && a == 0)
    {
        a = 3;
    }
    return a;
}

int canWin(char sing[9], char ss)
{
    int i = 0;
    char cc;
    for (i = 0; i < 9; i++)
    {
        cc = sing[i];
        if (cc == ' ')
        {
            if (i == 0)
            {
                if (ss == sing[1] && ss == sing[2])
                    return 0;
                if (ss == sing[3] && ss == sing[6])
                    return 0;
                if (ss == sing[4] && ss == sing[8])
                    return 0;
            }
            else if (i == 1)
            {
                if (ss == sing[0] && ss == sing[2])
                    return 1;
                if (ss == sing[4] && ss == sing[7])
                    return 1;
            }
            else if (i == 2)
            {
                if (ss == sing[1] && ss == sing[0])
                    return 2;
                if (ss == sing[5] && ss == sing[8])
                    return 2;
                if (ss == sing[4] && ss == sing[6])
                    return 2;
            }
            else if (i == 3)
            {
                if (ss == sing[0] && ss == sing[6])
                    return 3;
                if (ss == sing[4] && ss == sing[5])
                    return 3;
            }
            else if (i == 4)
            {
                if (ss == sing[0] && ss == sing[8])
                    return 4;
                if (ss == sing[1] && ss == sing[7])
                    return 4;
                if (ss == sing[3] && ss == sing[5])
                    return 4;
                if (ss == sing[2] && ss == sing[6])
                    return 4;
            }
            else if (i == 5)
            {
                if (ss == sing[2] && ss == sing[8])
                    return 5;
                if (ss == sing[4] && ss == sing[3])
                    return 5;
            }
            else if (i == 6)
            {
                if (ss == sing[3] && ss == sing[0])
                    return 6;
                if (ss == sing[7] && ss == sing[8])
                    return 6;
                if (ss == sing[4] && ss == sing[2])
                    return 6;
            }
            else if (i == 7)
            {
                if (ss == sing[6] && ss == sing[8])
                    return 7;
                if (ss == sing[4] && ss == sing[1])
                    return 7;
            }
            else if (i == 8)
            {
                if (ss == sing[6] && ss == sing[7])
                    return 8;
                if (ss == sing[5] && ss == sing[2])
                    return 8;
                if (ss == sing[0] && ss == sing[4])
                    return 8;
            }
            else
            {
                return -1;
            }
        }
    }
    return -1;
}

char *com_term(char sing[9], char ss, char ps1)
{
    int a = 0, b, c;
    int r, n, iWinPos, OpWinPos;
    if (strcmp(Gd.TermPlr, "Computer") == 0)
    {
        if (a == 0)
        {
            iWinPos = canWin(sing, ss);
            if (iWinPos != -1)
            {
                sing[iWinPos] = ss;
                a = 1;
            }
        }
        if (a == 0)
        {
            OpWinPos = canWin(sing, ps1);
            if (OpWinPos != -1)
            {
                sing[OpWinPos] = ss;
                a = 1;
            }
        }
        if (a == 0)
        {
            c = 0;
            for (n = 0; n < 9; n++)
            {
                if (sing[n] == ' ')
                {
                    c++;
                    break;
                }
            }
            if (c > 0)
            {
                n = 0;
                while (n == 0)
                {
                    r = random(9);
                    if (sing[r] == ' ')
                    {
                        sing[r] = ss;
                        n = 1;
                    }
                }
            }
        }
    }
    return (sing);
}

// mouse functions
void status()
{
    in.x.ax = 0;
    int86(51, &in, &out);
}
void hide()
{
    in.x.ax = 2;
    int86(51, &in, &out);
}
void show()
{
    in.x.ax = 1;
    int86(51, &in, &out);
}
void setpos()
{
    in.x.ax = 4;
    in.x.cx = 0;
    in.x.dx = 0;
    in.x.bx = 0;
    int86(0x33, &in, &out);
}
void position(int *x, int *y, int *m)
{
    in.x.ax = 3;
    int86(0x33, &in, &out);
    *m = out.x.bx;
    *x = out.x.cx;
    *y = out.x.dx;
}