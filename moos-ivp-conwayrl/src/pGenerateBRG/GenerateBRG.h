/************************************************************/
/*    NAME: Ryan Conway                                              */
/*    ORGN: MIT                                             */
/*    FILE: GenerateBRG.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef GenerateBRG_HEADER
#define GenerateBRG_HEADER

#include "MOOS/libMOOS/MOOSLib.h"

class GenerateBRG : public CMOOSApp
{
 public:
   GenerateBRG();
   ~GenerateBRG();

 protected: // Standard MOOSApp functions to overload  
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();

 protected:
   void RegisterVariables();

 private: // Configuration variables

 private: // State variables
};

#endif 
