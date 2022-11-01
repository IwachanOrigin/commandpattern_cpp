
set(MAIN_SRC
  main.cpp
  command.h
  command.cpp
  graphic.h
  graphic.cpp
  linecommand.h
  linecommand.cpp
  movecommand.h
  movecommand.cpp
  point.h
  point.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

