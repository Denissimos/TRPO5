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

CTEST(quadratic_equation_suite, two_roots_test) {
    // Given
    const float a = 5.4;
    const float b = 32;
    const float c = 1;

    // When

    Roots answer;
    int status;
    answer = solve(a, b, c, &status);

    // Then
    const int expected_status = 2;
    const Roots expected_answer = {-0.031416556251127374, -5.894509369674798, 1002.4};

    ASSERT_DBL_NEAR(expected_answer.discriminant, answer.discriminant);
    ASSERT_DBL_NEAR(expected_status, status);
    ASSERT_DBL_NEAR(expected_answer.x1, answer.x1);
    ASSERT_DBL_NEAR(expected_answer.x2, answer.x2);
}

CTEST(quadratic_equation_suite, negative_discriminant_test) {
    // Given
    const float a = 4;
    const float b = 1;
    const float c = 4;

    // When
    Roots answer;
    int status;
    answer = solve(a, b, c, &status);


    // Then
    const int expected_status = 0;
    const Roots expected_answer = {0, 0, -63};//как задать в константной структуре только 1 параметр?


    ASSERT_DBL_NEAR(expected_status, status);
    ASSERT_DBL_NEAR(expected_answer.discriminant, answer.discriminant);
}

CTEST(quadratic_equation_suite, non_quadratic_test) {
    // Given
    const float a = 0;
    const float b = 1;
    const float c = 4;

    // When
    Roots answer;
    int status;
    answer = solve(a, b, c, &status);

    // Then
    const int expected_status = -1;

    ASSERT_DBL_NEAR(expected_status, status);
}
