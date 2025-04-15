#include "exercises.h"

// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int n)
    #include <stdio.h>

    int calcSum(int arr[], int size) {
        int suma = 0;
        for (int i = 0; i < size; i++) {
            suma += arr[i];
        }
        return suma;
    }
    
    int main() {
        int numeros[] = {3, 7, 2, 9, 5};
        int tamaño = sizeof(numeros) / sizeof(numeros[0]);
        
        int resultado = calcSum(numeros, tamaño);
        printf("La suma es: %d\n", resultado);
    
        return 0;
    }
    

int findMax(int arr[], int n)
#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int numeros[] = {12, 45, 7, 89, 33};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);
    
    int maximo = findMax(numeros, tamaño);
    printf("El valor máximo es: %d\n", maximo);

    return 0;
}
float calcAverage(int arr[], int n)
#include <stdio.h>
float calcAverage(int arr[], int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += arr[i];
    }
    return (float)suma / size;
}
int main() {
    int numeros[] = {10, 20, 30, 40};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);

    float promedio = calcAverage(numeros, tamaño);
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}
int countEvens(int arr[], int n)

#include <stdio.h>

int countEvens(int arr[], int size) {
    int contador = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 6, 9};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);

    int pares = countEvens(numeros, tamaño);
    printf("Cantidad de números pares: %d\n", pares);

    return 0;
}

int sumFirstLast(int arr[], int n)

#include <stdio.h>

int sumFirstLast(int arr[], int size) {
    if (size == 0) return 0;
    return arr[0] + arr[size - 1];
}

int main() {
    int numeros[] = {8, 15, 23, 42};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);

    int suma = sumFirstLast(numeros, tamaño);
    printf("Suma del primer y último elemento: %d\n", suma);

    return 0;
}

int findMin(int arr[], int n)

#include <stdio.h>

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int numeros[] = {7, 2, 9, 4, 1};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);

    int minimo = findMin(numeros, tamaño);
    printf("El valor mínimo es: %d\n", minimo);

    return 0;
}

int subtractArraysSum(int a[], int b[], int n)
#include <stdio.h>

int subtractArraysSum(int arr1[], int arr2[], int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += (arr1[i] - arr2[i]);
    }
    return suma;
}

int main() {
    int a[] = {10, 20, 30};
    int b[] = {1, 2, 3};
    int tamaño = sizeof(a) / sizeof(a[0]);

    int resultado = subtractArraysSum(a, b, tamaño);
    printf("Suma de diferencias: %d\n", resultado);

    return 0;
}

int mergeArraysSum(int a[], int n1, int b[], int n2)

#include <stdio.h>

int mergeArraysSum(int arr1[], int size1, int arr2[], int size2) {
    int suma = 0;
    for (int i = 0; i < size1; i++) {
        suma += arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        suma += arr2[i];
    }
    return suma;
}

int main() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5};
    int suma = mergeArraysSum(a, 3, b, 2);

    printf("Suma total tras fusionar: %d\n", suma);
    return 0;
}

int productArray(int arr[], int n)

#include <stdio.h>

int productArray(int arr[], int size) {
    int producto = 1;
    for (int i = 0; i < size; i++) {
        producto *= arr[i];
    }
    return producto;
}

int main() {
    int numeros[] = {2, 3, 4};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);

    int producto = productArray(numeros, tamaño);
    printf("Producto total: %d\n", producto);

    return 0;
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average)

#include <stdio.h>

void calcSumAverage(int arr[], int size, int *suma, float *promedio) {
    *suma = 0;
    for (int i = 0; i < size; i++) {
        *suma += arr[i];
    }
    *promedio = (float)(*suma) /size;
}

int main() {
    int numeros[] = {5, 10, 15};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);
    int suma;
    float promedio;

    calcSumAverage(numeros, tamaño, &suma, &promedio);
    
    printf("Suma: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}

