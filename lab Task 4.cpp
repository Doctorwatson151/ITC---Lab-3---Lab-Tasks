#include <iostream>
using namespace std;

int main() {
    
    int rollNo = 1045;
    int semester = 1;
    char section = 'B';
    float cgpa = 3.5;
    int totalFee = 45000;
    int feePaid = 20000;

    
    cout << "Roll No: " << rollNo << endl;
    cout << "Semester: " << semester << endl;
    cout << "Section: " << section << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Total Fee: " << totalFee << endl;
    cout << "Fee Paid: " << feePaid << endl << endl;

    
    semester = semester + 1;
    feePaid = feePaid + 5000;

    
    int remainingFee = totalFee - feePaid;
    int feePercentage = (feePaid * 100.0) / totalFee;

    
    cout << "Semester: " << semester << endl;
    cout << "Fee Paid: " << feePaid << endl;
    cout << "Remaining Fee: " << remainingFee << endl;
    cout << "Fee Paid Percentage: " << feePercentage << "%" << endl;



    /*int x;

    cout << x << endl;*/

    //problem: the programme gives error due to use of uninnatialized varibale. 

    return 0;
}