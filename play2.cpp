#include <iostream>

void pp(int & i)
{
     std::cout << &i << " " << i << " " << sizeof(i) << "\n";
}
int main()
{
    int arr[10] ={0};
    int * heaparr = new int [10];

    for (size_t i=0; i<10; i++){

        pp(arr[i]);
    }

    for (size_t i=0; i<10; i++){

        pp(heaparr[i]);
    }
  



}