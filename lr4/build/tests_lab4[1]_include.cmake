if(EXISTS "/mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr4/build/tests_lab4[1]_tests.cmake")
  include("/mnt/c/Users/abdyk/Desktop/долги/ООП/MAI_OOP_LABS/lr4/build/tests_lab4[1]_tests.cmake")
else()
  add_test(tests_lab4_NOT_BUILT tests_lab4_NOT_BUILT)
endif()
