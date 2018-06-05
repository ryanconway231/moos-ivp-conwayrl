/************************************************************/
/*    NAME: Ryan Conway                                              */
/*    ORGN: MIT                                             */
/*    FILE: TGT_Simulator.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef TGT_Simulator_HEADER
#define TGT_Simulator_HEADER

#include "MOOS/libMOOS/MOOSLib.h"

class TGT_Simulator : public CMOOSApp
{
 public:
   TGT_Simulator();
   ~TGT_Simulator();

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
