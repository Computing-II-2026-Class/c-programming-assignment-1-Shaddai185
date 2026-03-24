KATONGOLE SHADDAI KISA
2500801380: 25/BIE/01380/PE

#include <stdio.h>

int main() {
    float distance, fuel, efficiency;

    printf("Enter distance travelled (km): ");
    scanf("%f", &distance);

    printf("Enter fuel used (l): ");
    scanf("%f", &fuel);

    efficiency = distance / fuel;

    printf("\nFuel efficiency: %.2f km/l\n", efficiency);

    return 0;
}
