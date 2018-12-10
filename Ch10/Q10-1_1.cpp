#include <iostream>
using std::cout;
using std::endl;

class Point
{
  private:
    int xpos, ypos;

  public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

    void ShowPosition() const
    {
        cout << '[' << xpos << ", " << ypos << ']' << endl;
    }

    Point &operator+=(const Point &pos1)
    {
        xpos += pos1.xpos;
        ypos += pos1.ypos;
        return *this;
    }

    Point &operator-=(const Point pos1)
    {
        xpos -= pos1.xpos;
        ypos -= pos1.ypos;
        return *this;
    }

    friend Point operator-=(const Point &, const Point &);
    friend bool operator==(const Point &, const Point &);
    friend bool operator!=(const Point &, const Point &);
};

Point operator-=(const Point &pos1, const Point &pos2)
{
    Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
    return pos;
}

bool operator==(const Point &pos1, const Point &pos2)
{
    if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
        return true;
    else
        return false;
}

bool operator!=(const Point &pos1, const Point &pos2)
{
    return !(pos1 == pos2);
}

int main(void)
{
    Point pos1(20, 30);
    Point pos2(5, 7);
    Point pos3(5, 7);

    (pos1 -= pos2).ShowPosition(); // 객체를 반환하므로 함수호출 가능
    (pos2 += pos3).ShowPosition(); // 반환형이 참조형이므로 함수호출 가능

    if (pos2 == pos3)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    (pos2 -= pos3).ShowPosition(); // 반환형이 참조형이므로 함수호출 가능

    if (pos2 != pos3)
        cout << "not equal" << endl;
    else
        cout << "equal" << endl;

    return 0;
}