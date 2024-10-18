
#include"Draw.h"

void Draw::drawBox(int x, int y, int color, SHORT width, SHORT height)
{
    Controller::gotoXY(x, y);
    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y, BLACK, BLACK, " ");

    int i = 0;
    for (; i < height; i++)
    {
        Controller::creatColorBlock(x, y + i, BLACK, BLACK, "  ");
        Controller::creatColorBlock(x + width, y + i, BLACK, 0, "  ");
    }

    Controller::gotoXY(x + 1, y + i);
    for (i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y + height - 1, 0, 0, " ");
}

void Draw::drawLeft(int x, int y, int color, SHORT width, SHORT height) 
{
    for (int i = 0; i < width / 2 - 2; i++) 
    {
        Controller::creatColorBlock(x + i, y + 1, color, color, " ");
        Controller::creatColorBlock(x + i, y + height - 2, color, color, " ");
    }

    for (int i = 2; i < height - 2; i++) {
        for (int j = 0; j < width / 2; j++) {
            Controller::creatColorBlock(x - 2 + j, y + i, color, color, " ");
        }
    }
}

void Draw::drawRight(int x, int y, int color, SHORT width, SHORT height) {
    for (int i = width / 2; i < width; i++) {
        Controller::creatColorBlock(x + i, y + 1, color, color, " ");
        Controller::creatColorBlock(x + i, y + height - 2, color, color, " ");
    }

    for (int i = 2; i < height - 2; i++) {
        for (int j = width / 2 - 2; j < width; j++) {
            Controller::creatColorBlock(x + 2 + j, y + i, color, color, " ");
        }
    }
}

void Draw::turnSound(int x, int y, int width, int height) 
{
    Controller::gotoXY(x, y);
    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y, 0, 0, " ");

    Controller::creatColorBlock(x - 2, y + 1, 0, 0, "  ");
    
    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y + 1, 7, 7, " ");
    Controller::creatColorBlock(x + width, y + 1, 0, 0, "  ");
    
    for (int i = 1; i <= height - 4; i++) 
    {
        Controller::creatColorBlock(x - 4, y + i + 1, 0, 0, "  ");
        for (int j = 0; j < width + 4; j++)
            Controller::creatColorBlock(x - 2 + j, y + 1 + i, 7, 7, " ");

        Controller::creatColorBlock(x + width + 2, y + 1 + i, 0, 0, "  ");
    }

    Controller::creatColorBlock(x - 2, y + height - 2, 0, 0, "  ");
    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y + height - 2, 7, 7, " ");
    Controller::creatColorBlock(x + width, y + height - 2, 0, 0, "  ");

    for (int i = 0; i < width; i++)
        Controller::creatColorBlock(x + i, y + height - 1, 0, 0, " ");

    for (int i = 1; i < height; i++)
        Controller::creatColorBlock(x - 2 + (width / 2), y + i, 0, 0, "  ");
}

void Draw::drawBlock(int x, int y, int color, SHORT width, SHORT height)
{
    Controller::setBackgroundColor(color);

    for (SHORT i = 0; i < height; ++i)
    {
        Controller::gotoXY(x, y + i);
        for (SHORT j = 0; j < width; ++j)
        {
            cout << " ";
        }
    }
}

void Controller::drawA(int x, int y, int color, SHORT weight, SHORT height)
{
    drawBlock(x, y + height, color, weight, height * 6);
    drawBlock(x + weight, y, color, weight * 2, height);
    drawBlock(x + weight, y + (3 * height), color, weight * 2, height);
    drawBlock(x + (weight * 3), y + height, color, weight, height * 6);
}

void Draw::drawB(int x, int y, int color, SHORT weight, SHORT height)
{
    drawBlock(x, y, color, weight, 7 * height);
    drawBlock(x + weight, y, color, weight * 2, height);
    drawBlock(x + weight, y + height * 3, color, weight * 2, height);
    drawBlock(x + weight, y + height * 6, color, weight * 2, height);
    drawBlock(x + weight * 3, y + height, color, weight, height * 2);
    drawBlock(x + weight * 3, y + height * 4, color, weight, height * 2);
}

void Draw::drawC(int x, int y, int color, SHORT weight, SHORT height)
{
    drawBlock(x, y + height, color, weight, height * 5);
    drawBlock(x + weight, y, color, weight * 3, height);
    drawBlock(x + weight, y + height * 6, color, weight * 3, height);
}
