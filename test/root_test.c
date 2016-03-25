#include <ctest.h>

#include <root.h>

CTEST(quadratic_equation_suite, discriminant_test) {
    // Given
    const float a = 1;
    const float b = 2;
    const float c = 1;

    // When
    float x1;
    float x2;
    int roots;
    float discriminant = solve(a, b, c, &x1, &x2, &roots);

    // Then
    const float expected_dicriminant = 0;
    const float expected_x1 = -1;
    const float expected_x2 = -1;

    ASSERT_DBL_NEAR(expected_dicriminant, discriminant);
    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_DBL_NEAR(expected_x2, x2);
}

CTEST(quadratic_equation_suite, two_roots_test) {
    // Given
    const float a = 5.4;
    const float b = 32;
    const float c = 1;

    // When
    float x1;
    float x2;
    int roots;
    float discriminant = solve(a, b, c, &x1, &x2, &roots);

    // Then
    const int expected_roots = 2;
    const float expected_dicriminant = 1002.4;

    ASSERT_DBL_NEAR(expected_dicriminant, discriminant);
    ASSERT_DBL_NEAR(expected_roots, roots);
}

CTEST(quadratic_equation_suite, one_root_test) {
    // Given
    const float a = 2;
    const float b = -16;
    const float c = 32;

    // When
    float x1;
    float x2;
    int roots;
    float discriminant = solve(a, b, c, &x1, &x2, &roots);

    // Then
    const int expected_roots = 1;
    const float expected_dicriminant = 0;

    ASSERT_DBL_NEAR(expected_dicriminant, discriminant);
    ASSERT_DBL_NEAR(expected_roots, roots);
}

CTEST(quadratic_equation_suite, negative_discriminant_test) {
    // Given
    const float a = 4;
    const float b = 1;
    const float c = 4;

    // When
    float x1;
    float x2;
    int roots;
    float discriminant = solve(a, b, c, &x1, &x2, &roots);

    // Then
    const float expected_dicriminant = -63;
    const int expected_roots = 0;

    ASSERT_DBL_NEAR(expected_roots, roots);
    ASSERT_DBL_NEAR(expected_dicriminant, discriminant);
}