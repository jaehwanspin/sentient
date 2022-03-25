set(SENTIENT_CLI_SRC
    main.cpp)
add_executable(sntc ${SENTIENT_CLI_SRC})
target_link_libraries(sntc ${CONAN_LIBS})