#include <stdio.h>
#include <assert.h>

char size(int shoulder_length, int Body_length) //Length in CM
{
    char sizeName = '\0';
    
    if((shoulder_length < 38)  && (Body_length <60))
    {
        sizeName = 'S';
    } 
    else if((shoulder_length >= 38 && shoulder_length < 42) && (Body_length >= 60 && Body_length < 72))
    {
        sizeName = 'M';
    } 
    else if((shoulder_length >= 42) && (Body_length >= 72) )
    {
        sizeName = 'L';
    }
    return sizeName;
}

int main() {
    assert(size(38,60) == 'S'); 
    assert(size(37,60) == 'S'); //Tshirt size is derived based on shoulder length and body length.
    assert(size(40,65) == 'M');
    assert(size(42,60) == 'S'); 
    assert(size(43,74) == 'L');
    printf("All is well (maybe!)\n");
    return 0;
}
