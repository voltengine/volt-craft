cmake_minimum_required(VERSION 3.20)
project(Voltcraft LANGUAGES CXX)

include("$ENV{VOLT_PATH}/cmake/Volt.cmake")

volt_add_module(${PROJECT_NAME})

target_compile_definitions(${PROJECT_NAME} PRIVATE
	VOLTCRAFT_EXPORTS
)

target_link_libraries(${PROJECT_NAME}
	Volt::Volt
)
