int my_array[4] = { 10, 20, 30, 40 }
int counter = 0;

for (counter = 0; counter < 4; counter++) {
    printf("%d\n", *(my_array + counter))
}