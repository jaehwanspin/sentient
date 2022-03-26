set(SENTIENT_CLI_SRC
    main.cpp)
add_executable(sentientc ${SENTIENT_CLI_SRC})
target_link_libraries(sentientc ${CONAN_LIBS})