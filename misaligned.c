#include <stdio.h>
#include <assert.h>

int printColorMap(int Get_Max_colour ) 
{
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i=0,j=0;
    for(i = 0; i < Get_Max_colour; i++) 
    {
        for(j = 0; j < Get_Max_colour; j++) 
        {
            printf("%d ->Major color = %s & Minor color = %s\n", (i * Get_Max_colour + j), majorColor[i], minorColor[j]);
        }
    }
    return i + j;
}

int main() 
{
    int result = printColorMap(5);
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
