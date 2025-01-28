#include <iostream>

void pp(int & i)
{
     std::cout << &i << " " << i << " " << sizeof(i) << "\n";
}
int main()
{
    int a = 7;
    int b = 25;
    int * pa = &a;
    int * pb = &b;

   // *(pb-1) = 17;
   // *(pb) = 17;
   // *(&a) = 17
    pp(a);
    pp(b);


}