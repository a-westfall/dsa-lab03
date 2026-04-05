/*
    main.cpp

    Allows users to enter genes to find possible mutations.
    Implements std::map and std::list to store and find genes.
*/

#include <iostream>
#include <map>
#include <list>
#include <string_view> 

int main() {

    // stores aChain and int pairs for known genes
    std::map<std::string_view, int> aChain = {{"ALA", 1}, {"ARG", 2}, {"ASN", 3}, {"ASP", 4}, {"CYS", 5}, {"GLN", 6}, 
                                              {"GLU", 6}, {"GLY", 7}, {"HIS", 8}, {"ILE", 9}, {"LEU", 10}, {"LYS", 11},
                                              {"MET", 12}, {"PHE", 13}, {"PRO", 14}, {"SER", 15}, {"THR", 16}, {"TRP", 17},
                                              {"TYR", 16}, {"VAL", 17}};
    
    // stores full name of amino acid using name and aChain pair
    std::list<std::pair<std::string_view, std::string_view>> aminoAcids = {
        {"ALA", "Alanine"}, {"ARG", "Arginine"}, {"ASN", "Asparagine"},
        {"ASP", "Aspartic Acid"}, {"CYS", "Cysteine"}, {"GLN", "Glutamine"},
        {"GLU", "Glutamic Acid"}, {"GLY", "Glycine"}, {"HIS", "Histidine"},
        {"ILE", "Isoleucine"}, {"LEU", "Leucine"}, {"LYS", "Lysine"},
        {"MET", "Methionine"}, {"PHE", "Phenylalanine"}, {"PRO", "Proline"},
        {"SER", "Serine"}, {"THR", "Threonine"}, {"TRP", "Tryptophan"}, 
        {"TYR", "Tyrosine"}, {"VAL", "Valine"}
    };

    return 0;
}
