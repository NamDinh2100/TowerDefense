#pragma once
#include "Controller.h"

using namespace std;

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define AQUA 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define WHITE 7
#define GRAY 8
//#define LIGHT_BLUE 9
//#define LIGHT_GREEN 10
//#define LIGHT_AQUA 11
//#define LIGHT_RED 12
//#define LIGHT_BLUE 13
//#define LIGHT YELLOW 14
//#define BRIGHT_WHITE 15

class Draw
{
	public:
        static void drawBlock(int, int, int, SHORT, SHORT);

        static void drawA(int, int, int, SHORT, SHORT);
        static void drawB(int, int, int, SHORT, SHORT);
        static void drawC(int, int, int, SHORT, SHORT);
        static void drawD(int, int, int, SHORT, SHORT);
        static void drawE(int, int, int, SHORT, SHORT);
        static void drawF(int, int, int, SHORT, SHORT);
        static void drawG(int, int, int, SHORT, SHORT);
        static void drawH(int, int, int, SHORT, SHORT);
        static void drawI(int, int, int, SHORT, SHORT);
        static void drawJ(int, int, int, SHORT, SHORT);
        static void drawK(int, int, int, SHORT, SHORT);
        static void drawL(int, int, int, SHORT, SHORT);
        static void drawM(int, int, int, SHORT, SHORT);
        static void drawN(int, int, int, SHORT, SHORT);
        static void drawO(int, int, int, SHORT, SHORT);
        static void drawP(int, int, int, SHORT, SHORT);
        static void drawQ(int, int, int, SHORT, SHORT);
        static void drawR(int, int, int, SHORT, SHORT);
        static void drawS(int, int, int, SHORT, SHORT);
        static void drawT(int, int, int, SHORT, SHORT);
        static void drawU(int, int, int, SHORT, SHORT);
        static void drawV(int, int, int, SHORT, SHORT);
        static void drawW(int, int, int, SHORT, SHORT);
        static void drawX(int, int, int, SHORT, SHORT);
        static void drawY(int, int, int, SHORT, SHORT);
        static void drawZ(int, int, int, SHORT, SHORT);

        static void drawBox(int, int, int, SHORT, SHORT);

        static void turnSound(int, int, int, int);
        static void drawLeft(int, int, int, SHORT, SHORT);
        static void drawRight(int, int, int, SHORT, SHORT);

};
