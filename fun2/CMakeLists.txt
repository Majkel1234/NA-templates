

add_library(fun2Lib fun2.cpp)
add_custom_target(run-fun2
	DEPENDS fun2Lib
	COMMAND ./fun2
)

add_dependencies(run-all run-fun2)
