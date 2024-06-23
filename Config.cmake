function(add_adtpp_library Name Files)
  add_library(adt_${Name} STATIC ${Files})

  target_include_directories(adt_${Name} PUBLIC ${PROJECT_SOURCE_DIR}/include)
  
  add_library(ADT::${Name} ALIAS adt_${Name})
endfunction()

function(add_adtpp_test_exe Name Files Libs)
  add_executable(${Name} ${Files})

  target_link_libraries(${Name} PUBLIC ${Libs})

  target_include_directories(${Name} PUBLIC ${PROJECT_SOURCE_DIR}/tests)
endfunction()


function(add_adtpp_test Name EXEFile Output)
  add_test(NAME ${Name}
  COMMAND ${EXEFile} ${Name})

  set_property(TEST ${Name}
    PROPERTY PASS_REGULAR_EXPRESSION ${Output})
endfunction()