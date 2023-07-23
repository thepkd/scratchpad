#include <iostream>

class Test{
    private:
        int x,y;
        int mutable m_debugCount;
    public:
    Test(int x, int y);
    int GetX() const { return x;}
    void SetX(int X) { x= X;}
};