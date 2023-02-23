#include <iostream>

using namespace std;
class PointOP
{
    private:
        int opcnt;

    public:
        PointOP(const int cnt) : opcnt(cnt)
        {}

        Point PointAdd(const Point& pnt1, const Point& pnt2)
        {
            opcnt++;
            return Point(pnt1.x + pnt2.x, pnt1.y+pnt2.y);
        }
};

class Point
{
    private:
        int x;
        int y;
    public:
        Point(const int &xpos, const int &ypos) : x(xpos), y(ypos)
        {}
        friend Point PointOP:: PointAdd(const Point&, const Point&);
        //friend Point PointOP:: PointSub(const Point&, const Point&);
        friend void ShowPointPos(const Point&);
};



int main()
{
    const Point pnt1(2,3);
    const Point pnt2(10, 10);
    const PointOP op1(2);

    op1.PointAdd(pnt1, pnt2);

    return 0;
}