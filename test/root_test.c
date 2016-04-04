#include <ctest.h>

#include <root.h>

CTEST(quadratic_equation_suite, discriminant_test) {
    // Given
    const float a = 1;
    const float b = 2;
    const float c = 1;
    
    // When
    Roots answer;
    int status;
    answer = solve(a, b, c, &status);

    // Then
    const Roots expected_answer = {-1, -1, 0};
    const int expected_status = 1;

    ASSERT_DBL_NEAR(expected_answer.x1, answer.x1);
    ASSERT_DBL_NEAR(expected_answer.discriminant, answer.discriminant);
    ASSERT_DBL_NEAR(expected_status, status);
}

