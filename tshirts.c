#include <stdio.h>
#include <assert.h>

char size(int shoulder_cms, int length_cms) 
{
    char sizeName = '\0';
    
    if((shoulder_cms < 38)  && (length_cms <60))
    {
        sizeName = 'S';
    } 
    else if((shoulder_cms >= 38 && shoulder_cms < 42) && (length_cms >= 60 && length_cms < 72))
    {
        sizeName = 'M';
    } 
    else if((shoulder_cms >= 42) && (length_cms >= 72) )
    {
        sizeName = 'L';
    }
    return sizeName;
}

int main() {
    assert(size(37,60) == 'S');
    assert(size(40,65) == 'M');
    assert(size(43,74) == 'L');
    printf("All is well (maybe!)\n");
    return 0;
}
