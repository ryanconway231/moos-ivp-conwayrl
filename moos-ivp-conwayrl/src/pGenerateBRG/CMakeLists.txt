#--------------------------------------------------------
# The CMakeLists.txt for:                       pGenerateBRG
# Author(s):                              Ryan Conway
#--------------------------------------------------------

SET(SRC
  GenerateBRG.cpp
  GenerateBRG_Info.cpp
  main.cpp
)

ADD_EXECUTABLE(pGenerateBRG ${SRC})

TARGET_LINK_LIBRARIES(pGenerateBRG
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread)

