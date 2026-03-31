include("${PISUBMARINE_BUILD_SYSTEM}")

message("Adding library: ${PISUBMARINE_MODULE_NAME}")
add_library(${PISUBMARINE_MODULE_NAME} INTERFACE ../public/PiSubmarine/Time/ITickable.h)
target_include_directories(${PISUBMARINE_MODULE_NAME} INTERFACE "../public")
PiSubmarineInitTarget(${PISUBMARINE_MODULE_NAME})
