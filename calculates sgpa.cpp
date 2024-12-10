#include <stdio.h>
#include <iostream>
using namespace std;

int main() { 
//3.calculates sgpa
    int credit_hours[5], grade_points[5];
    float sgpa;
    int total_credit_hours = 0, total_grade_points = 0;

    // Input credit hours and grade points for 5 courses
    for (int i = 0; i < 5; i++) {
        printf("Enter the credit hour and achieved grade points for your course %d: ", i + 1);
        scanf("%d %d", &credit_hours[i], &grade_points[i]);
        
        // Calculate totals
        total_credit_hours += credit_hours[i];
        total_grade_points += credit_hours[i] * grade_points[i];
    }

    // Calculate SGPA
    sgpa = static_cast<float>(total_grade_points) / total_credit_hours;

    // Output SGPA
    printf("Your SGPA is: %.2f\n", sgpa);

    return 0;
}

