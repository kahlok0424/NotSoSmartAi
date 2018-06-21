#include "unity.h"
#include "Ai.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Ai_StringCompare_Given_Hello_and_Hello_expect_1(void)
{
    TEST_ASSERT_EQUAL(stringCompare("Hello","Hello"), 1);
}

void test_Ai_StringCompare_Given_I_am_Good_and_i_am_good_expect_1(void)
{
    TEST_ASSERT_EQUAL(stringCompare("I am Good","I am good"), 1);
}

void test_Ai_StringCompare_Given_Hello_and_Bye_expect_0(void)
{
    TEST_ASSERT_EQUAL(stringCompare("Hello","Bye"), 1);
}

void test_Ai_StringCompare_Given_Hello_and_Hell_expect_0(void)
{
    TEST_ASSERT_EQUAL(stringCompare("Hello","Hell"), 0);
}

void test_Ai_StringCompare_Given_SameLength_and_Different1_expect_0(void)
{
    TEST_ASSERT_EQUAL(stringCompare("SameLength","Different1"), 0);
}

void test_speakToAi_Given_Hello_expect_Hi_There_My_name_is_AiMachine_What_is_yours(void)
{
  char *expectedReply = "Hi,There! My name is AiMachine. What is yours?";
  char *reply = speakToAi("Hello");

  TEST_ASSERT_EQUAL(getStringLength(reply),getStringLength(expectedReply));
  TEST_ASSERT_EQUAL_STRING(reply, expectedReply);
}
