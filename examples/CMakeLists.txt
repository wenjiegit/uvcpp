ADD_EXECUTABLE(loop_test loop_demo/main.cpp)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/src/global
		${PROJECT_SOURCE_DIR}/src/io
		${PROJECT_SOURCE_DIR}/src/json
		${PROJECT_SOURCE_DIR}/src/kernel
		${PROJECT_SOURCE_DIR}/src/network
		${PROJECT_SOURCE_DIR}/src/process
		${PROJECT_SOURCE_DIR}/src/thread
		${PROJECT_SOURCE_DIR}/src/xml
)

LINK_DIRECTORIES(${PROJECT_BINARY_DIR}/src/)
TARGET_LINK_LIBRARIES(loop_test pthread rt uvcpp)
