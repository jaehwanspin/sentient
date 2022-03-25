set(SENTIENT_CLI_SRC
    main.cpp)
add_executable(sntc ${BLACK_WINTER_CLI_SRC})
target_link_libraries(sntc ${CONAN_LIBS})