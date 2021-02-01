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


TEST (calc, H_oneRoomSport) {
    int category, days;
    char sport, culture;

    category = 1;
    days = 5;
    sport = 'Y';
    culture = 'N';

    int actual = user_total_holidays(category, days, sport, culture);

    ASSERT_EQ(25000, actual);
}

TEST (calc, H_oneRoomCult) {
    int category, days;
    char sport, culture;

    category = 1;
    days = 5;
    sport = 'N';
    culture = 'Y';

    int actual = user_total_holidays(category, days, sport, culture);

    ASSERT_EQ(24000, actual);
}

TEST (calc, H_oneRoomSportCult) {
    int category, days;
    char sport, culture;

    category = 1;
    days = 5;
    sport = 'Y';
    culture = 'Y';

    int actual = user_total_holidays(category, days, sport, culture);

    ASSERT_EQ(26500, actual);
}

TEST (calc, H_oneRoomTest_noService) {
    int category, days;
    char sport, culture;

    category = 1;
    days = 5;
    sport = 'N';
    culture = 'N';

    int actual = user_total_holidays(category, days, sport, culture);

    ASSERT_EQ(22500, actual);
}

TEST (calc, H_noSearchRoom) {
    int category, days;
    char sport, culture;

    category = 1000;
    days = 5;
    sport = 'N';
    culture = 'N';

    int actual = user_total_holidays(category, days, sport, culture);

    ASSERT_EQ(-1, actual);
}

TEST (calc, H_zeroDays) {
    int category, days;
    char sport, culture;

    category = 1;
    days = 0;
    sport = 'N';
    culture = 'N';

    int actual = user_total_holidays(category, days, sport, culture);

    ASSERT_EQ(-1, actual);
}

TEST (calc, H_zeroDaysDop) {
    int category, days;
    char sport, culture;

    category = 1;
    days = 0;
    sport = 'Y';
    culture = 'Y';

    int actual = user_total_holidays(category, days, sport, culture);

    ASSERT_EQ(-1, actual);
}

TEST (calc, H_minusDays) {
    int category, days;
    char sport, culture;

    category = 1;
    days = -1;
    sport = 'N';
    culture = 'N';

    int actual = user_total_holidays(category, days, sport, culture);

    ASSERT_EQ(-1, actual);
}