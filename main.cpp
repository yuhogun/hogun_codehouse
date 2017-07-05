//main.cpp
#include <arrayfire.h>
#include <iostream>
 
using namespace af;
void MatAdd(array mat1, array mat2) 
{ 
    std::cout << "empty function!!" << std::endl;
}
 
void MatSub(array mat1, array mat2)
{ 
    std::cout << "empty function!!" << std::endl;
}
 
void MatMul(array mat1, array mat2)
{ 
    std::cout << "empty function!!" << std::endl;
}
 
void MatDiv(array mat1, array mat2)
{ 
    std::cout << "empty function!!" << std::endl;
}
 
void MatMod(array mat1, array mat2)
{ 
    std::cout << "empty function!!" << std::endl;
}
 
int main(void)
{
    array mat1 = randu(3, 3);
    array mat2 = randu(3, 3);
 
    MatAdd(mat1, mat2);
    MatSub(mat1, mat2);
    MatMul(mat1, mat2);
    MatDiv(mat1, mat2);
    MatMod(mat1, mat2);
 
    return 0;
}

