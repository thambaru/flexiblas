MACRO(CheckPolicy POL VAL)
    IF(POLICY ${POL})
        cmake_policy(SET ${POL} ${VAL})
    ENDIF()
ENDMACRO()
