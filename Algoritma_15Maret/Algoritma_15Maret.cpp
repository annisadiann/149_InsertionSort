

#include <iostream>
using namespace std;

int a[20];			
int n;

void input() {		
	while (true) {	
		cout << "Masukan banyaknya elemen pada array : "; 
		cin >> n;	
		if (n <= 20)
			break;  
		else {		
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n"; 		}
	}
	cout << endl;							
	cout << "===================" << endl;  
	cout << "Masukan Elemen Array" << endl; 
	cout << "===================" << endl;  

	for (int i = 0; i < n; i++) {   
		cout << "Data ke-" << (i + 1) << ": ";  
		cin >> a[i];                    
	}
}

void insertionSort() {
    int i,  temp, j;

    for (i = 1; i <= n - 1; i++) //step 1
    {
        temp = a[i]; //step 2
        j = i - 1; //step 3
        while (j >= 0 && a[j] > temp) //step 4
        {
            a[j + 1] = a[j]; //step 4a
            j = j - 1; //step 4b
        } 
        a[j + 1] = temp; //step 5
    }

} 

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl; 
	}
	cout << "Jumlah pass = " << n - 1 << endl; 
	cout << endl;
}

int main()
{

	input();
	insertionSort();
	display();
	system("pause");

	return 0;
}


