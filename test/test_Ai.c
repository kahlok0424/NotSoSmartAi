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
    TEST_ASSERT_EQUAL(1 ,stringCompare("Hello","Hello"));
}

void test_Ai_StringCompare_Given_I_am_Good_and_i_am_good_expect_1(void)
{
    TEST_ASSERT_EQUAL(1 ,stringCompare("I am Good","i am good"));
}

void test_Ai_StringCompare_Given_Hello_and_Bye_expect_0(void)
{
    TEST_ASSERT_EQUAL(0,stringCompare("Hello","Bye"));
}

void test_Ai_StringCompare_Given_Hello_and_Hell_expect_0(void)
{
    TEST_ASSERT_EQUAL(0 ,stringCompare("Hello","Hell"));
}

void test_Ai_StringCompare_Given_SameLength_and_Different1_expect_0(void)
{
    TEST_ASSERT_EQUAL(0 ,stringCompare("SameLength","Different1"));
}

void test_speakToAi_Given_hi_expect_hi_There_My_name_is_AiMachine_What_is_yours(void)
{
  char *expectedReply = "Hi,There! My name is AiMachine. What is yours?";
  char *reply = speakToAi("hi");

  TEST_ASSERT_EQUAL(getStringLength(expectedReply),getStringLength(reply));
  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

void test_speakToAi_Given_Hi_expect_hi_There_My_name_is_AiMachine_What_is_yours(void)
{
  char *expectedReply = "Hi,There! My name is AiMachine. What is yours?";
  char *reply = speakToAi("Hi");

  TEST_ASSERT_EQUAL(getStringLength(expectedReply),getStringLength(reply));
  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

void test_speakToAi_Given_hello_expect_hi_There_My_name_is_AiMachine_What_is_yours(void)
{
  char *expectedReply = "Hi,There! My name is AiMachine. What is yours?";
  char *reply = speakToAi("hello");

  TEST_ASSERT_EQUAL(getStringLength(expectedReply),getStringLength(reply));
  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

void test_speakToAi_Given_Hello_expect_hi_There_My_name_is_AiMachine_What_is_yours(void)
{
  char *expectedReply = "Hi,There! My name is AiMachine. What is yours?";
  char *reply = speakToAi("Hello");

  TEST_ASSERT_EQUAL(getStringLength(expectedReply),getStringLength(reply));
  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

void test_speakToAi_Given_hey_expect_hi_There_My_name_is_AiMachine_What_is_yours(void)
{
  char *expectedReply = "Hi,There! My name is AiMachine. What is yours?";
  char *reply = speakToAi("hey");

  TEST_ASSERT_EQUAL(getStringLength(expectedReply),getStringLength(reply));
  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

void test_speakToAi_Given_Hey_expect_hi_There_My_name_is_AiMachine_What_is_yours(void)
{
  char *expectedReply = "Hi,There! My name is AiMachine. What is yours?";
  char *reply = speakToAi("Hey");

  TEST_ASSERT_EQUAL(getStringLength(expectedReply),getStringLength(reply));
  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}
