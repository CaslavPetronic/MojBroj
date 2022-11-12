// MojBroj.cpp

#define NUM_INPUTS 6
#define NUM_OPERATORS 4

#include <iostream>
#include <algorithm>

typedef struct result {

}result;


bool OnePermutationAllVariations(int* perm, int N, int* Operands, int goal, result* R) {
    int q;
    int M = N - 1;
    int* Var = new int[M];
    for (int i = 0; i < k; i++)
        Var[i] = 0;

    do {
        /*
            Here implement comparation and calculation
        */

        q = M-1;
        while (q >= 0) {
            Var[q]++;
            if (Var[q] == n) {
                Var[q] = 0;
                q--;
            }
            else
                break;
        }


    } while (q >= 0);
    delete[] Var;
    return false;
}

result* FindSolution(int* Operands, int goal) {

    result* R = new result;
    
    //
    
    


    return R;
}


int main()
{
    std::cout << "Hello World!\n";
}

