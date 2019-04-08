#include <iostream>

void swap(int *x,int *y);

int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;

    std::cout<<"The original value of a before swap is: "<< a <<std::endl;
    std::cout<<"The original value of b before swap is: "<< b <<std::endl;

    int *PointerA = &a;
    int *PointerB = &b;

    swap(PointerA,PointerB);

    std::cout<<"\n"<<std::endl;
    std::cout<<"The value of a after swap is:"<<*PointerA<<std::endl;
    std::cout<<"The value of b after swap is:"<<*PointerB<<std::endl;

    return 0;
}
void swap(int *x,int *y) { /*  temporary variable of the same type as the two arguments, for swap.
                                * Assign one of the argument's value to it. */
    int temp = *y;
    *y = *x;
     *x = temp ;
}