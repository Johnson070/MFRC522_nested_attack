/*30-03-17*****************************************************************************************************
***************************************************************************************************************
**                                                                                                           **
**                                                 main.cpp                                                  **
**                                                                                                           **
***************************************************************************************************************
**************************************************************************************************************/

#include "MFrec.h"

int main()
{
 
    MFrec com;
	
    //  (command, exploit addr (block with known key), attack addr (key to recover), opt key for exploit bloc)
    com.crackKey( AUTHENT_A, 63, 6 );

    com.stop();
    
    return 0;

}
