/*
    main.cpp

    Allows users to enter genes to find possible mutations.
    Implements std::map and std::list to store and find genes.
*/

#include <iostream>
#include <map>
#include <list>
#include <string>
#include <algorithm>

int main() {

    // stores aChain and int pairs for known genes
    std::map<std::string, int> aChain = {{"ALA", 1}, {"ARG", 2}, {"ASN", 3}, {"ASP", 4}, {"CYS", 5}, {"GLN", 6}, 
                                              {"GLU", 6}, {"GLY", 7}, {"HIS", 8}, {"ILE", 9}, {"LEU", 10}, {"LYS", 11},
                                              {"MET", 12}, {"PHE", 13}, {"PRO", 14}, {"SER", 15}, {"THR", 16}, {"TRP", 17},
                                              {"TYR", 16}, {"VAL", 17}};
    
    // stores full name of amino acid using name and aChain pair
    std::list<std::pair<std::string, std::string>> aminoAcids = {
        {"ALA", "Alanine"}, {"ARG", "Arginine"}, {"ASN", "Asparagine"},
        {"ASP", "Aspartic Acid"}, {"CYS", "Cysteine"}, {"GLN", "Glutamine"},
        {"GLU", "Glutamic Acid"}, {"GLY", "Glycine"}, {"HIS", "Histidine"},
        {"ILE", "Isoleucine"}, {"LEU", "Leucine"}, {"LYS", "Lysine"},
        {"MET", "Methionine"}, {"PHE", "Phenylalanine"}, {"PRO", "Proline"},
        {"SER", "Serine"}, {"THR", "Threonine"}, {"TRP", "Tryptophan"}, 
        {"TYR", "Tyrosine"}, {"VAL", "Valine"}
    };

    // UI for gene entering
    std::string input;
    std::cout << "Enter a codon or exit to quit: ";
    while (std::cin >> input && input != "exit") {

        // check for invalid entry
        while (input.length() != 3) {
            std::cout << "Error. Codon should have exactly 3 letters.\n";
            std::cout << "Enter another codon or 'exit': ";
            std::cin >> input;
        }

        // make input uppercase
        transform(input.begin(), input.end(), input.begin(), ::toupper);

        // search for codon
        if (aChain.find(input) == aChain.end()) {
            std::cout << "\nMutation Found. Codon " << input << " does not exist.\n";
        } else {
            for (auto pair : aminoAcids) {
                if (pair.first == input) {
                    std::cout << "\nCodon " << input << " found. Full name is: " << pair.second << '\n';
                }
            }
        }

        std::cout << "Enter another codon or 'exit': ";
    }

    return 0;
}
