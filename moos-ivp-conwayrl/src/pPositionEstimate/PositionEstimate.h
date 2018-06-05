/************************************************************/
/*    NAME: Ryan Conway                                              */
/*    ORGN: MIT                                             */
/*    FILE: PositionEstimate.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef PositionEstimate_HEADER
#define PositionEstimate_HEADER

#include "MOOS/libMOOS/MOOSLib.h"

class PositionEstimate : public CMOOSApp
{
 public:
   PositionEstimate();
   ~PositionEstimate();

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
