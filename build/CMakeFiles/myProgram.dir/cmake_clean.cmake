FILE(REMOVE_RECURSE
  "CMakeFiles/myProgram.dir/main.cpp.o"
  "myProgram.pdb"
  "myProgram"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/myProgram.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
