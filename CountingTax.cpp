#include<iostream>
using namespace std;

int main()
{
    double Sales = 95000;
    cout<<"Sales: $"<<Sales<<endl;

    const double stateTaxRate = 0.04;
    double stateTax = stateTaxRate*Sales;
    cout<<"State Tax: $"<<stateTax<<endl;

    const double countyTaxRate = 0.02;
    double countyTax = countyTaxRate*Sales;
    cout<<"County Tax: $"<<countyTax<<endl;

    double totalTax = stateTax+countyTax;
    cout<<"Total Tax: $"<<totalTax;
    
    return 0;
}

/*int main()
{
    double Sales = 95000;
    double StateTax = Sales*0.04;
    double CountyTax = Sales*0.02;
    double Tax = StateTax + CountyTax;
    cout<<"Sales: "<<Sales<<endl
        <<"State Tax: $"<<StateTax<<endl
        <<"County Tax: $"<<CountyTax<<endl
        <<"Total Tax: $"<<Tax;
    return 0;
}*/