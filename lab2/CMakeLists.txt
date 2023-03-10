project(lab2)
file(GLOB_RECURSE lab2_SRC
     "./src/*.h"
     "./src/*.cc"
)

add_executable(lab2 ${lab2_SRC})


find_package(matplot++ CONFIG REQUIRED)
    target_link_libraries(lab2 PRIVATE Matplot++::cimg std::filesystem Matplot++::matplot Matplot++::nodesoup)


target_include_directories(lab2 PRIVATE ${MATPLOTLIB_CPP_INCLUDE_DIRS})
