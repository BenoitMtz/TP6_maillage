cmake_minimum_required(VERSION 3.15)
project(maillage_exo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(maillage_exo
        cocotte.txt
        cocotte_linux.txt
        coords.cpp
        coords.h
        couleur.cpp
        couleur.h
        maillage.cbp
        main.cpp
        styledessin.h
        svgfile.cpp
        svgfile.h
        test1.txt
        test1_linux.txt
        test2.txt
        test2_linux.txt
        util.cpp
        util.h triangle.cpp triangle.h sommet.cpp sommet.h maillage.cpp maillage.h)
