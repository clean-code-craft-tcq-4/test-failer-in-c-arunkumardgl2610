#include <stdio.h>
#include <assert.h>
#include "Stubfunctions.h"
int networkAlertStub(float celcius);
int alertFailureCount = 0;

void alertInCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlertStub(celcius);
    if (returnCode != 200) 
    {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount = alertFailureCount+1;
    }
    else
    {
        if(alertFailureCount != 0)
        {  
            alertFailureCount = alertFailureCount;
        }
        else
        {
            alertFailureCount = 0;
        }
    }
        
}

int main() {
    alertInCelcius(400.5);
    alertInCelcius(303.6);
    alertInCelcius(250.6);
    printf("%d alerts failed.\n", alertFailureCount);
    assert(alertFailureCount > 2 && alertFailureCount <=4);    //No Error should come
    printf("All is well (maybe!)\n");
    return 0;
}
