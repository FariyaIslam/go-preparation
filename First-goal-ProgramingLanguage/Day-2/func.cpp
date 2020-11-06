#include<iostream>
using namespace std;


int sum(int x, int y)
{
    return x+y;
}
float avg(float s, float t)
{
    float u= (s+t)/2.0;
    return u;
}

int main()
{
    int a=10, b=20;
    cout << sum(a,b) << endl;
    cout << avg(6,10);
    return 0;
}
