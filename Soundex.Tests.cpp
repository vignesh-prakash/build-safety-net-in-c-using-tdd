#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, Test_Name_With_Single_Character ) {
 //AAA
  char soundex[5];
 generateSoundex("R", soundex);
 ASSERT_STREQ(soundex,"R000");
}

TEST(SoudexTestsuite, Test_Name_With_All_Vowels) {
 //AAA
  char soundex[5];
 generateSoundex("AEIO", soundex);
 ASSERT_STREQ(soundex,"A000");
}

TEST(SoudexTestsuite, Test_Name_With_Duplicate_Characters) {
 //AAA
  char soundex[5];
 generateSoundex("Robbert", soundex);
 ASSERT_STREQ(soundex,"R163");
}

TEST(SoudexTestsuite, Test_Name_With_All_Consonants) {
 //AAA
  char soundex[5];
 generateSoundex("Pqrs", soundex);
 ASSERT_STREQ(soundex,"P262");
}

TEST(SoudexTestsuite, Test_Name_With_Special_Character) {
 //AAA
  char soundex[5];
 generateSoundex("O'Hara", soundex);
 ASSERT_STREQ(soundex,"Oa60");
}

TEST(SoudexTestsuite, Test_Name_With_Same_Character) {
 //AAA
  char soundex[5];
 generateSoundex("VVVV", soundex);
 ASSERT_STREQ(soundex,"V100");
}

TEST(SoudexTestsuite, Test_Name_With_Digits_And_Characters) {
 //AAA
  char soundex[5];
 generateSoundex("soundex123", soundex);
 ASSERT_STREQ(soundex,"S532");
}

TEST(SoudexTestsuite, Test_Name_With_Length_Morethan_Four_Characters) {
 //AAA
  char soundex[5];
 generateSoundex("Bengaluru", soundex);
 ASSERT_STREQ(soundex,"B524");
}

TEST(SoudexTestsuite, Test_Name_With_Length_Lessthan_Four_Characters) {
 //AAA
  char soundex[5];
 generateSoundex("Abd", soundex);
 ASSERT_STREQ(soundex,"A130");
}
