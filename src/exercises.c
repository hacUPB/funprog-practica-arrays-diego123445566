#include "exercises.h"

// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int n){
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma;
}

int findMax(int arr[], int n){
    int max = arr[0]; // Se asume que el primer elemento es el mayor
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Actualiza el valor máximo si encuentra un valor mayor
        }
    }
    return max;
}

float calcAverage(int arr[], int n){
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return (float)suma / n; // El resultado debe ser un float
}

int countEvens(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Si el número es divisible por 2
            count++; // Aumentamos el contador
        }
    }
    return count; // Devolvemos la cantidad de números pares
}


int sumFirstLast(int arr[], int n) {
    if (n == 0) {
        return 0; // Si el arreglo está vacío, retorna 0
    }
    return arr[0] + arr[n - 1]; // Suma el primer y el último elemento
}


int findMin(int arr[], int n) {
    int min = arr[0]; // Se asume que el primer elemento es el menor
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Actualiza el valor mínimo si encuentra uno más pequeño
        }
    }
    return min;
}

int subtractArraysSum(int arr1[], int arr2[], int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += arr1[i] - arr2[i]; // Resta elemento a elemento
    }
    return suma; // Devuelve la suma total de las diferencias
}

int mergeArraysSum(int arr1[], int size1, int arr2[], int size2) {
    int suma = 0;
    
    // Suma los elementos del primer arreglo
    for (int i = 0; i < size1; i++) {
        suma += arr1[i];
    }
    
    // Suma los elementos del segundo arreglo
    for (int i = 0; i < size2; i++) {
        suma += arr2[i];
    }
    
    return suma; // Devuelve la suma total de los elementos fusionados
}

int productArray(int arr[], int n) {
    int producto = 1;
    for (int i = 0; i < n; i++) {
        producto *= arr[i]; // Multiplica el producto por cada elemento del arreglo
    }
    return producto; // Devuelve el producto total de los elementos
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average){
    *sum = 0; // Inicializa suma en 0

    for (int i = 0; i < n; i++) {
        *sum += arr[i]; // Acumula la suma
    }

    if (n > 0) {
        *average = (float)(*sum) / n; // Calcula el promedio
    } else {
        *average = 0; // Evita división entre cero
    }
}

