#include <iostream>

using namespace std;

class _Points_to_data_{

private:
    int xpos, ypos;
public:
    void Init(int x, int y)
    {
        xpos = x;
        ypos = y;
    }
    void ShowPointInfo() const
    {
        cout<< " :: " << xpos << "    "   " :: " << ypos << "\n";
    }
};

class Circle {

private:
    int radian;
    _Points_to_data_ center;

public:

    void Init(int x, int y, int r)
    {
        radian = r;
        center.Init(x, y);
    }
    void printCenter()
    {
        center.ShowPointInfo();
    }
};

class Ring {

private:
    Circle outer;
    Circle inner;

public:

    void Init(int inx, int iny, int inr, int outx, int outy, int outr)
    {
        inner.Init(inx, iny, inr);
        outer.Init(outx, outy, outr);
    }
    void ShowRingInfo()
    {
        outer.printCenter();
        inner.printCenter();
    }

};



int main()
{
    Ring ring;
    ring.Init(1,1,4,2, 2,9);
    ring.ShowRingInfo();
    return 0;
}