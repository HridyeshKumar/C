int main(){
    // If the size is oitted, the compiler uses the number of values 
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    // No initialisation.
    float p1[1000];

    //To initialize an array to all zeros,initialize only the first value.
    // All 1000 values initialized to zero.
    float p2[1000]={0.0};

    // Initial values of pressure(variable) undefined.
    float pressure[10];

    // Remaining characters zero.
    char greeting[100]="Hello";

    // Array size is 6(final zero on strings).
    char goodbye[]="Adios";

    return 0;
}