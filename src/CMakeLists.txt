file(GLOB OBJS ${PROJECT_SOURCE_DIR}/3rdparty/libuv/lib/objs/*.o)

MESSAGE(STATUS   "add uv objs")

add_library(uvcpp STATIC
		${OBJS}
		kernel/mglobal.cpp
		kernel/mstring.cpp
		kernel/mobject.cpp
		kernel/mstringlist.cpp
		kernel/mdate.cpp
		kernel/mcoreapplication.cpp
		kernel/mfile.cpp
)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/3rdparty/libuv/include)
