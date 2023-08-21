# include <stdio.h>

int main() {
    // input weight, height, bmi;
    float weight, height, bmi;
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    // Input the height in meters
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // calculate BMI
    bmi = weight / (height * height);

    // Display the result
    printf("Your BMI is: %.2f\n", bmi);
    

}