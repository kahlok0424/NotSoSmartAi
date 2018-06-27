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

void test_speakToAi_Given_Semething_expect_Error_input_message_detected(void)
{
  char *expectedReply = "Error input message detected!";
  char *reply = speakToAi("something");

  //TEST_ASSERT_EQUAL(getStringLength(expectedReply),getStringLength(reply));
  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
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
  char *expectedReply= "Hi,There! My name is AiMachine. What is yours?";
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

void test_speakToAi_Given_My_nama_is_Alvin_expect_Error_input_message_detected(void)
{
  char *expectedReply = "Error input message detected!";
  char *reply = speakToAi("My nama is Alvin");

  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

void test_speakToAi_Given_My_name_is_Kevin_expect_Nice_to_meet_you_Kevin(void)
{
  char *expectedReply = "Nice to meet you, Kevin";
  char *reply = speakToAi("My name is Kevin");

  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

void test_speakToAi_Given_My_name_is_LOUIS_expect_Nice_to_meet_you_Kelly(void)
{
  char *expectedReply = "Nice to meet you, Louis";
  char *reply = speakToAi("My name is LOUIS");

  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

void test_speakToAi_Given_NotBye_expect_Error_input_message_detected(void)
{
  char *expectedReply = "Error input message detected!";
  char *reply = speakToAi("NotBye");

  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

void test_speakToAi_Given_Bye_expect_Goodbye_have_a_nice_day(void)
{
  char *expectedReply = "Goodbye. Have a nice day!";
  char *reply = speakToAi("Bye");

  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

void test_speakToAi_Given_bye_expect_Goodbye_have_a_nice_day(void)
{
  char *expectedReply = "Goodbye. Have a nice day!";
  char *reply = speakToAi("bye");

  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

void test_speakToAi_Given_Goodbye_expect_Goodbye_have_a_nice_day(void)
{
  char *expectedReply = "Goodbye. Have a nice day!";
  char *reply = speakToAi("Goodbye");

  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

void test_speakToAi_Given_GOODBYE_expect_Goodbye_have_a_nice_day(void)
{
  char *expectedReply = "Goodbye. Have a nice day!";
  char *reply = speakToAi("GOODBYE");

  TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}
