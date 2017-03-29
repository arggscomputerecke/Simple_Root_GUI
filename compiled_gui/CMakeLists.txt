
FIND_PACKAGE( ROOT  REQUIRED )



file(GLOB src_files  "*.cxx" "*.cc")



INCLUDE_DIRECTORIES(. ../extern/TGSignals/include ${ROOT_INCLUDE_DIR} ${CMAKE_CURRENT_BINARY_DIR} )


SET(dictFile guiDict.cxx)
set(Make_Dict_name MakeDict)

GENERATE_ROOT_DICT_PROJECT(${Make_Dict_name} ${CMAKE_CURRENT_LIST_DIR}/gui.hh ${CMAKE_CURRENT_LIST_DIR}/guiLinkDef.hh ${dictFile} ${CMAKE_CURRENT_LIST_DIR})




LIST(APPEND src_files ${CMAKE_CURRENT_BINARY_DIR}/${dictFile})

add_executable(simple_gui  ${src_files})


ADD_DEPENDENCIES(simple_gui ${Make_Dict_name})



target_link_libraries(simple_gui ${ROOT_LIBRARIES})



INSTALL(TARGETS simple_gui  
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib)