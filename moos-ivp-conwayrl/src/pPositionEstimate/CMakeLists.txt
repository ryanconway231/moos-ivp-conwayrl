#--------------------------------------------------------
# The CMakeLists.txt for:                       pPositionEstimate
# Author(s):                              Ryan Conway
#--------------------------------------------------------

SET(SRC
  PositionEstimate.cpp
  PositionEstimate_Info.cpp
  main.cpp
)

ADD_EXECUTABLE(pPositionEstimate ${SRC})

TARGET_LINK_LIBRARIES(pPositionEstimate
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread)

