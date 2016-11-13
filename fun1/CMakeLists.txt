

add_library(fun1Lib fun1.cpp)
add_custom_target(run-fun1
	DEPENDS fun1Lib
	COMMAND ./fun1
)

add_dependencies(run-all run-fun1)
