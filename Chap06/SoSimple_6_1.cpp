#include <iostream>

using namespace std;


class SoSimple
{
    private:
        int num;
        
    public:
        SoSimple(int n) : num(n)
        {}
        SoSimple& AddNum(int n)
        {
            //num+=n;
            cout<<num<<"\n";
            return *this;
        }
        void ShowData() const
        {
            cout<<"num : " << num << endl;
        }
};

class SoSimple2
{
    private:
        int num;
    public:
        SoSimple2(int n) : num(n)
        {

        }

        void SimpleFunc()
        {
            cout<<" No Const Func eyyyy\n";
        }
        void SimpleFunc() const
        {
            cout<< "Yes Const Func Eyyyy\n";
        }
};

int main()
{
    const SoSimple obj(15);
    //obj.AddNum(3);
    obj.ShowData();

    SoSimple2 obj2(10);
    const SoSimple2 obj3(12);

    obj2.SimpleFunc();
    obj3.SimpleFunc();
}