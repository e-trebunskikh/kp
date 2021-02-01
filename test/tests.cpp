#include "../src/calc.cpp"
#include <gtest/gtest.h>

TEST (calc, oneRoomTest) {
    int category, days;
    char dop;

    category = 1;
    days = 5;
    dop = 'Y';

    int actual = user_total(category, days, dop);

    ASSERT_EQ(18120, actual);
}

TEST (calc, oneRoomTest_noService) {
    int category, days;
    char dop;

    category = 1;
    days = 5;
    dop = 'N';

    int actual = user_total(category, days, dop);

    ASSERT_EQ(16620, actual);
}

TEST (calc, noSearchRoom) {
    int category, days;
    char dop;

    category = 1000;
    days = 5;
    dop = 'N';

    int actual = user_total(category, days, dop);

    ASSERT_EQ(-1, actual);
}

TEST (calc, zeroDays) {
    int category, days;
    char dop;

    category = 1;
    days = 0;
    dop = 'N';

    int actual = user_total(category, days, dop);

    ASSERT_EQ(-1, actual);
}

TEST (calc, zeroDaysDop) {
    int category, days;
    char dop;

    category = 1;
    days = 0;
    dop = 'Y';

    int actual = user_total(category, days, dop);

    ASSERT_EQ(-1, actual);
}

TEST (calc, minusDays) {
    int category, days;
    char dop;

    category = 1;
    days = -1;
    dop = 'N';

    int actual = user_total(category, days, dop);

    ASSERT_EQ(-1, actual);
}
