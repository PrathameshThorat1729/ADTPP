echo -n "Enter Name of Data Structure : "
read name

mkdir -p include/ADTPP/$name
mkdir -p src/$name
mkdir -p tests/$name

####################
##### Create Header File #####
####################

echo "#ifndef ADTPP_${name^^}_HPP
#define ADTPP_${name^^}_HPP

#include \"ADTPP/ADTTypedef.hpp\"

namespace adt
{
  class $name
  {
  public:
    $name();

    ~$name();
  }; // class $name
} // namespace adt

#endif // ADTPP_${name^^}_HPP" > include/ADTPP/$name/$name.hpp


####################
##### Create Source File #####
####################

echo "#include \"ADTPP/$name/$name.hpp\"

namespace adt
{
  $name::$name()
  {
  }

  $name::~$name()
  {
  }
} // namespace adt" > src/$name/$name.cpp

####################
##### Create Source Makefiles #####
####################

echo "set($name"FileList"
  ${CMAKE_CURRENT_SOURCE_DIR}/$name.cpp)

add_adtpp_library($name \${$name"FileList"})" > src/$name/CMakeLists.txt

####################
##### Create Test Source #####
####################

echo "#include<iostream>

#include \"ADTPP/$name/$name.hpp\"
#include \"ADTPPTest.hpp\"
using namespace std;

int main(int argc, char** args)
{
  TEST(\"$name"SampleTest"\")
  {
    cout << \"Sample Test\";
  }

  return 0;
}" > tests/$name/$name"Test".cpp

####################
##### Create Test Makefiles #####
####################

echp "add_adtpp_test_exe($name"Test" ${CMAKE_CURRENT_SOURCE_DIR}/$name"Test".cpp ADT::$name)

add_adtpp_test($name"SampleTest" $name"Test" \"Sample Test\")" > tests/$name/CMakeLists.txt

####################
##### Append to Main Makefiles #####
####################

echo "
add_subdirectory(src/$name)
add_subdirectory(tests/$name)" >> CMakeLists.txt