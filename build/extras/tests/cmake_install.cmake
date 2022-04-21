# Install script for directory: C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/lib/ArduinoJson/extras/tests

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/ArduinoJson")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/catch/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/FailingBuilds/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/IntegrationTests/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/JsonArray/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/JsonDeserializer/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/JsonDocument/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/JsonObject/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/JsonSerializer/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/JsonVariant/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/MemoryPool/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/Misc/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/MixedConfiguration/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/MsgPackDeserializer/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/MsgPackSerializer/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/Numbers/cmake_install.cmake")
  include("C:/Users/jean-philippe.goi/Documents/PlatformIO/Projects/ESP32_SD_Test_Pins/build/extras/tests/TextFormatter/cmake_install.cmake")

endif()

