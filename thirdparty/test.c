#include <stdio.h>
#include <stdlib.h>
#include "ctest.h"
#include "libgeometry/check.h"
#include <stdbool.h>

CTEST(input, word_chek)
{
    char* str = "circle(1 2,3)";
    bool result = name_verification(str);
    ASSERT_TRUE(result);
}
CTEST(input, word_chek2)
{
    char* str = "Circle(1 2,3)";
    bool result = name_verification(str);
    ASSERT_FALSE(result);
}
CTEST(input, word_chek3)
{
    char* str = "circle(1 2,3)";
    bool result = checking_parameters_figure(str);
    ASSERT_TRUE(result);
}
CTEST(input, word_chek4)
{
    char* str = "Circle(3 3 3)";
    bool result = checking_parameters_figure(str);
    ASSERT_FALSE(result);
}
CTEST(input, word_chek5)
{
    char* str = "Circle( 2,3";
    bool result = checking_parameters_figure(str);
    ASSERT_TRUE(result);
}
