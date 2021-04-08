#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}
TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}
TEST(EchoTest, Burrito) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "I love Burritos"; test_val[2] = "I love Burritos";
    EXPECT_EQ("I love Burritos I love Burritos", echo(3,test_val));
}
TEST(EchoTest, Yeet) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "ya ya YEET"; test_val[2] = "yaya YEET";
    EXPECT_EQ("ya ya YEET yaya YEET", echo(3,test_val));
}
TEST(EchoTest, Valorant) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "I hate"; test_val[2] = "Viper buff";
    EXPECT_EQ("I hate Viper buff", echo(3,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
