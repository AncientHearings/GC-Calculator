// GC Content Calculator

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {

    string dna;

    cout << "Enter the DNA sequence here: ";

    cin >> dna;

    int G_count = 0;
    int C_count = 0;
    const size_t total_bases = dna.length();
    for (const char base: dna) {
        if (base == 'C') {
            C_count += 1;
        }
        else if (base == 'G') {
            G_count += 1;
        }
    }

    const double GC_percentage = ((G_count + C_count) / static_cast<double>(total_bases)) * 100;

    cout << "GC Percentage: " << GC_percentage << endl;

    return 0;

