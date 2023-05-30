#include <stdio.h>
#include <math.h>

int main()
{
    int N, pos = 2, elevado;
    
    scanf(" %i", &N);
    
    if (N % 2 == 0){
        while (pos <= N){
          elevado = pow(pos, 2);
          
          printf("%i^2 = %i\n", pos, elevado);
          
          pos = pos + 2;  
        }
    }

    return 0;
}
