#include <iostream>
#include <iomanip>
#include<cmath>
#include<fstream>

using namespace std;

int main(){
    ifstream source;

    int count = 0;
    float sum1 ,sum2;

    string textline;
    source.open("score.txt");
    while(getline(source,textline))
    {
        sum1 += atof(textline.c_str());
        count++;
        sum2 += pow(atof(textline.c_str()),2);
    }
    
    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum1/count << endl;
    cout << "Standard deviation = " << sqrt((sum2/count)-pow((sum1/count),2)) << endl;
}