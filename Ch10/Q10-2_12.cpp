#include <iostream>
using std::cout;
using std::endl;

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

    // 문제 1 : pos2의 멤버변수는 pos1의 멤버변수 값과
    //         다른 부호이 값으로 초기화되로록 오버로딩
    Point operator-()
    {
        Point pos(-xpos, -ypos);
        return pos;
    }

    // 문제 2
    friend Point operator~(const Point &);
};

Point operator~(const Point &ref)
{
    Point pos(ref.ypos, ref.xpos);
    return pos;
}

int main(void)
{
    Point pos1(1, -2);
    pos1.ShowPosition();

    Point pos2 = -pos1;
    pos2.ShowPosition();
    (~pos2).ShowPosition();
    pos2.ShowPosition();

    return 0;
}
