/* Foo function */
int8_t foo( uint16_t param0, uint8_t param1 )
{
    // ... foo() function code ...
    return returnValue;
}
 
/* Booth data management */
#include "booth.h"
extern uint16_t dataArray[ARRAY_SIZE];
 
/** @brief bar function having an effect on dataArray */
uint8_t bar( uint16_t *ptrToStuff )
{
    // ... bar() function code ...
    return returnCode ;
}

