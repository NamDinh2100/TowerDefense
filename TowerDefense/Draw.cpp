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

void Draw::drawC(int x, int y, int color, SHORT width, SHORT height)
{
    drawBlock(x, y + height, color, weight, height * 5);
    drawBlock(x + weight, y, color, weight * 3, height);
    drawBlock(x + weight, y + height * 6, color, weight * 3, height);
}
