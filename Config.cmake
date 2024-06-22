function(add_adtpp_library Name Files)
  add_library(adt_${Name} STATIC ${Files})

  target_include_directories(adt_${Name} PUBLIC ${PROJECT_SOURCE_DIR}/include)
  
  add_library(ADT::${Name} ALIAS adt_${Name})
endfunction()