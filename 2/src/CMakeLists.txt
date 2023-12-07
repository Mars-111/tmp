set(SRC_FILE main.cpp cpu.cpp disk.cpp gpu.cpp kbd.cpp ram.cpp)
set(HEADERS_PATH ${CMAKE_SOURCE_DIR}/headers)
set(HEADERS_FILE ${HEADERS_PATH}/cpu.h ${HEADERS_PATH}/disk.h ${HEADERS_PATH}/gpu.h ${HEADERS_PATH}/kbd.h ${HEADERS_PATH}/ram.h)

add_executable(BIOS_APP ${SRC_FILE} ${HEADERS_FILE})

target_include_directories(BIOS_APP PUBLIC ${CMAKE_SOURCE_DIR}/headers)

