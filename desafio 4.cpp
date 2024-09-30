#include"bits/stdc++.h"

using namespace std;

// 4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
// • SP – R$67.836,43
// • RJ – R$36.678,66
// • MG – R$29.229,88
// • ES – R$27.165,48
// • Outros – R$19.849,53

double calaculetedInvoicing(unordered_map<string, double> table){
    double allPercentage = 0;
    for(auto it = table.begin(); it!= table.end(); ++it) {
        allPercentage += it->second;
    }
    return allPercentage;
}

unordered_map<string, double> calaculetedPercentage(unordered_map<string, double> table, double total){
    unordered_map<string, double> Percentage;
    for(auto it = table.begin(); it!= table.end(); ++it) {
        Percentage[it->first] = ((it->second / total) * 100);
    }
    return Percentage;
}
int main() {
    unordered_map<string, double> table;
    table["SP"] = 67836.43;
    table["RJ"] = 36678.66;
    table["MG"] = 29229.88;
    table["ES"] = 27165.48;
    table["Outros"] = 19849.53;

    double allPercentage = calaculetedInvoicing(table);
    unordered_map<string, double> Percentage = calaculetedPercentage(table, allPercentage);

    for(auto it = Percentage.begin(); it!= Percentage.end(); ++it) {
        cout << it->first << " R$" << table[it->first] << " percentual de : " << it->second << "%\n";
    }
    
}
