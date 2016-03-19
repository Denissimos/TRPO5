#include <ctest.h>

#include <root.h>

CTEST(distance_suite, simple_test) {
    // Given
    const int a = 1;
    const int b = 2;
    const int c = 1;

    // When
    float x1;
    float x2;
    const double discriminant = solve(a, b, c, &x1, &x2);

    // Then
    const double expected_dicriminant = 0;
    const float expected_x1 = -1;
    const float expected_x2 = -1;

    ASSERT_DBL_NEAR(expected_dicriminant, discriminant);
    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_DBL_NEAR(expected_x2, x2);
}