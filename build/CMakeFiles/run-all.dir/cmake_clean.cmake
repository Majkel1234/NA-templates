FILE(REMOVE_RECURSE
  "CMakeFiles/run-all"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/run-all.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
