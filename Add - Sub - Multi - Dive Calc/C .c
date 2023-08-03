#include <stdio.h>
//makiii xi
    int 
    main() {
    int opt, qua, add, sub, div;
    int aopt, sopt, mopt, dopt;
    int a1, a2, a3, a4, asum;
    int s1, s2, s3, s4, ssum;
    int m1, m2, m3, m4, msum;
    int d1, d2, dsum, drem;

    printf("Select Calculator Type\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &opt);

    switch (opt) {
        case 1:
            printf("Enter the number of Given\n");
            scanf("%d", &aopt);

            switch (aopt) {
                case 2:
                    printf("Enter First Given Number\n");
                    scanf("%d", &a1);
                    printf("Enter Second Given Number\n");
                    scanf("%d", &a2);

                    asum = a1 + a2;
                    printf("\nThe First Given number is '%d'\n", a1);
                    printf("The Second Given number is '%d'\n", a2);
                    printf("The answer from the given number(s): %d\n", asum);
                    break;

                case 3:
                    printf("Enter First Given Number\n");
                    scanf("%d", &a1);
                    printf("Enter Second Given Number\n");
                    scanf("%d", &a2);
                    printf("Enter Third Given Number\n");
                    scanf("%d", &a3);

                    asum = a1 + a2 + a3;
                    printf("\nThe First Given number is '%d'\n", a1);
                    printf("The Second Given number is '%d'\n", a2);
                    printf("The Third Given number is '%d'\n", a3);
                    printf("The answer from the given number(s): %d\n", asum);
                    break;

                case 4:
                    printf("Enter First Given Number\n");
                    scanf("%d", &a1);
                    printf("Enter Second Given Number\n");
                    scanf("%d", &a2);
                    printf("Enter Third Given Number\n");
                    scanf("%d", &a3);
                    printf("Enter Fourth Given Number\n");
                    scanf("%d", &a4);

                    asum = a1 + a2 + a3 + a4;
                    printf("\nThe First Given number is '%d'\n", a1);
                    printf("The Second Given number is '%d'\n", a2);
                    printf("The Third Given number is '%d'\n", a3);
                    printf("The Fourth Given number is '%d'\n", a4);
                    printf("The answer from the given number(s): %d\n", asum);
                    break;
// SHAUn
                default:
                    printf("Invalid choice\n");
                    break;
            }
            break;

        case 2:
            printf("Enter the number of Given\n");
            scanf("%d", &sopt);

            switch (sopt) {
                case 2:
                    printf("Enter First Given Number\n");
                    scanf("%d", &s1);
                    printf("Enter Second Given Number\n");
                    scanf("%d", &s2);

                    ssum = s1 - s2;
                    printf("\nThe First Given number is '%d'\n", s1);
                    printf("The Second Given number is '%d'\n", s2);
                    printf("The answer from the given number(s): %d\n", ssum);
                    break;

                case 3:
                    printf("Enter First Given Number\n");
                    scanf("%d", &s1);
                    printf("Enter Second Given Number\n");
                    scanf("%d", &s2);
                    printf("Enter Third Given Number\n");
                    scanf("%d", &s3);

                    ssum = s1 - s2 - s3;
                    printf("\nThe First Given number is '%d'\n", s1);
                    printf("The Second Given number is '%d'\n", s2);
                    printf("The Third Given number is '%d'\n", s3);
                    printf("The answer from the given number(s): %d\n", ssum);
                    break;
//LOUISE
                case 4:
                    printf("Enter First Given Number\n");
                    scanf("%d", &s1);
                    printf("Enter Second Given Number\n");
                    scanf("%d", &s2);
                    printf("Enter Third Given Number\n");
                    scanf("%d", &s3);
                    printf("Enter Fourth Given Number\n");
                    scanf("%d", &s4);

                    ssum = s1 - s2 - s3 - s4;
                    printf("\nThe First Given number is '%d'\n", s1);
                    printf("The Second Given number is '%d'\n", s2);
                    printf("The Third Given number is '%d'\n", s3);
                    printf("The Fourth Given number is '%d'\n", s4);
                    printf("The answer from the given number(s): %d\n", ssum);
                    break;

                default:
                    printf("Invalid choice\n");
                    break;
            }

            break;

        case 3:
            printf("Enter the number of Given\n");
            scanf("%d", &mopt);

            switch (mopt) {
                case 2:
                    printf("Enter First Given Number\n");
                    scanf("%d", &m1);
                    printf("Enter Second Given Number\n");
                    scanf("%d", &m2);

                    msum = m1 * m2;
                    printf("\nThe First Given number is '%d'\n", m1);
                    printf("The Second Given number is '%d'\n", m2);
                    printf("The answer from the given number(s): %d\n", msum);
                    break;

                case 3:
                    printf("Enter First Given Number\n");
                    scanf("%d", &m1);
                    printf("Enter Second Given Number\n");
                    scanf("%d", &m2);
                    printf("Enter Third Given Number\n");
                    scanf("%d", &m3);
//RAZON
                    msum = m1 * m2 * m3;
                    printf("\nThe First Given number is '%d'\n", m1);
                    printf("The Second Given number is '%d'\n", m2);
                    printf("The Third Given number is '%d'\n", m3);
                    printf("The answer from the given number(s): %d\n", msum);
                    break;

                case 4:
                    printf("Enter First Given Number\n");
                    scanf("%d", &m1);
                    printf("Enter Second Given Number\n");
                    scanf("%d", &m2);
                    printf("Enter Third Given Number\n");
                    scanf("%d", &m3);
                    printf("Enter Fourth Given Number\n");
                    scanf("%d", &m4);

                    msum = m1 * m2 * m3 * m4;
                    printf("\nThe First Given number is '%d'\n", m1);
                    printf("The Second Given number is '%d'\n", m2);
                    printf("The Third Given number is '%d'\n", m3);
                    printf("The Fourth Given number is '%d'\n", m4);
                    printf("The answer from the given number(s): %d\n", msum);
                    break;

                default:
                    printf("Invalid choice\n");
                    break;
            }
            break;

        case 4:
            printf("Enter the number of Given\n");
            scanf("%d", &dopt);

            switch (dopt) {
                case 2:
                    printf("Enter First Given Number\n");
                    scanf("%d", &d1);
                    printf("Enter Second Given Number\n");
                    scanf("%d", &d2);

                    dsum = d1 / d2;
                    drem = d1 % d2;
                    printf("\nThe First Given number is '%d'\n", d1);
                    printf("The Second Given number is '%d'\n", d2);
                    printf("The answer from the given number(s): %d\n", dsum);
                    printf("The remainder from the given number(s): %d\n", drem);
                    break;

                default:
                    printf("Invalid choice\n");
                    break;
            }
            break;
//RUMBAOA
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
