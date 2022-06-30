#include <stdio.h>
#include <assert.h>

int printColorMap(int Get_Max_color_size ) 
{
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i=0,j=0;
    for(i = 0; i < Get_Max_color_size; i++) 
    {
        for(j = 0; j < Get_Max_color_size; j++) 
        {
            printf("%d ->Major color = %s & Minor color = %s\n", (i * Get_Max_color_size + j), majorColor[i], minorColor[j]);
        }
    }
    return i * j;
}

int main() 
{
    int result = printColorMap(6);
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
