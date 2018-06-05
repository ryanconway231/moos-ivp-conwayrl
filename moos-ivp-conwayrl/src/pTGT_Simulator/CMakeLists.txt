#--------------------------------------------------------
# The CMakeLists.txt for:                       pTGT_Simulator
# Author(s):                              Ryan Conway
#--------------------------------------------------------

SET(SRC
  TGT_Simulator.cpp
  TGT_Simulator_Info.cpp
  main.cpp
)

ADD_EXECUTABLE(pTGT_Simulator ${SRC})

TARGET_LINK_LIBRARIES(pTGT_Simulator
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread)

