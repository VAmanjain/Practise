#include <stdio.h>
#include <stdlib.h>

// Structure to represent a term in the polynomial
typedef struct Term {
    int coeff; // Coefficient of the term
    int x_exp; // Exponent of x
    int y_exp; // Exponent of y
    int z_exp; // Exponent of z
    struct Term *next; // Pointer to the next term in the polynomial
} Term;

// Function to create a new term in the polynomial
Term *createTerm(int coeff, int x_exp, int y_exp, int z_exp) {
    Term *newTerm = (Term *)malloc(sizeof(Term));
    if (newTerm != NULL) {
        newTerm->coeff = coeff;
        newTerm->x_exp = x_exp;
        newTerm->y_exp = y_exp;
        newTerm->z_exp = z_exp;
        newTerm->next = NULL;
    }
    return newTerm;
}

// Function to insert a term at the end of the polynomial
void insertTerm(Term **poly, int coeff, int x_exp, int y_exp, int z_exp) {
    Term *newTerm = createTerm(coeff, x_exp, y_exp, z_exp);
    if (*poly == NULL) {
        *poly = newTerm;
    } else {
        Term *temp = *poly;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newTerm;
    }
}

// Function to add two polynomials and store the result in a new polynomial
Term *addPolynomials(Term *poly1, Term *poly2) {
    Term *result = NULL;
    while (poly1 != NULL || poly2 != NULL) {
        int coeff = 0, x_exp = 0, y_exp = 0, z_exp = 0;
        
        if (poly1 != NULL && poly2 != NULL) {
            if (poly1->x_exp == poly2->x_exp && poly1->y_exp == poly2->y_exp && poly1->z_exp == poly2->z_exp) {
                coeff = poly1->coeff + poly2->coeff;
                x_exp = poly1->x_exp;
                y_exp = poly1->y_exp;
                z_exp = poly1->z_exp;
                poly1 = poly1->next;
                poly2 = poly2->next;
            } else if ((poly1->x_exp <= poly2->x_exp && poly1->y_exp <= poly2->y_exp && poly1->z_exp <= poly2->z_exp) || poly2 == NULL) {
                coeff = poly1->coeff;
                x_exp = poly1->x_exp;
                y_exp = poly1->y_exp;
                z_exp = poly1->z_exp;
                poly1 = poly1->next;
            } else if ((poly1->x_exp >= poly2->x_exp && poly1->y_exp >= poly2->y_exp && poly1->z_exp >= poly2->z_exp) || poly1 == NULL) {
                coeff = poly2->coeff;
                x_exp = poly2->x_exp;
                y_exp = poly2->y_exp;
                z_exp = poly2->z_exp;
                poly2 = poly2->next;
            }
        } else if (poly1 != NULL) {
            coeff = poly1->coeff;
            x_exp = poly1->x_exp;
            y_exp = poly1->y_exp;
            z_exp = poly1->z_exp;
            poly1 = poly1->next;
        } else if (poly2 != NULL) {
            coeff = poly2->coeff;
            x_exp = poly2->x_exp;
            y_exp = poly2->y_exp;
            z_exp = poly2->z_exp;
            poly2 = poly2->next;
        }

        insertTerm(&result, coeff, x_exp, y_exp, z_exp);
    }
    return result;
}

// Function to display a polynomial
void displayPolynomial(Term *poly) {
    while (poly != NULL) {
        printf("%dx^%dy^%dz^%d ", poly->coeff, poly->x_exp, poly->y_exp, poly->z_exp);
        if (poly->next != NULL) {
            printf("+ ");
        }
        poly = poly->next;
    }
    printf("\n");
}

int main() {
    // Representing polynomial P(x, y, z) = 6x^2y^2z - 4yz^5 + 3x^3yz + 2xy^5z - 2xyz^3
    Term *poly1 = NULL;
    insertTerm(&poly1, 6, 2, 2, 1);
    insertTerm(&poly1, -4, 0, 1, 5);
    insertTerm(&poly1, 3, 3, 1, 1);
    insertTerm(&poly1, 2, 1, 5, 1);
    insertTerm(&poly1, -2, 1, 1, 3);

    printf("Polynomial P(x, y, z): ");
    displayPolynomial(poly1);

    // Representing polynomial POLY2(x, y, z) = x^2y^2z - 2yz^5 + 4x^3yz + xy^5z - xyz^3
    Term *poly2 = NULL;
    insertTerm(&poly2, 1, 2, 2, 1);
    insertTerm(&poly2, -2, 0, 1, 5);
    insertTerm(&poly2, 4, 3, 1, 1);
    insertTerm(&poly2, 1, 1, 5, 1);
    insertTerm(&poly2, -1, 1, 1, 3);

    printf("Polynomial POLY2(x, y, z): ");
    displayPolynomial(poly2);

    // Adding the polynomials and storing the result in POLYSUM(x, y, z)
    Term *polySum = addPolynomials(poly1, poly2);
    printf("Sum of the polynomials POLY1(x, y, z) and POLY2(x, y, z): ");
    displayPolynomial(polySum);

    return 0;
}
