# Matching process of overload resolution

1. The compiler will look for an exact type match.
2. The compiler will try using integral and floating-point promotions to get a suitable overload (for example, *int* to *long* or *float* to *double*).
3. The compiler will try to match using standard conversions like integral type to floating-point or casting a pointer-to-child into a pointer-to-parent.
4. The compiler will look for a user-defined conversion.
5. The compiler will look for a variadic function.