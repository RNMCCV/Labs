#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

void invert(int *Arr, int size){
	int t;
	if (size%2==0){
		for (int i=0;i<size/2;i++){
			t=Arr[i];
			Arr[i]=Arr[size-1-i];
			Arr[size-1-i]=t;
		}
	}
	else {
		for (int i=0;i<((size/2)+1);i++){
			t = Arr[i];
			Arr[i]=Arr[size-1-i];
			Arr[size-1-i]=t;
		}
	}
}

void ub(int *Arr, int size) {
	int t;
	for (int i=0;i<size-1;i++)
		for (int j=0;j<size-i-1;j++)
			if (Arr[j]<Arr[j+1]){
				t=Arr[j];
				Arr[j]=Arr[j+1];
				Arr[j+1]=t;
			}
}

void voz(int *Arr, int size){
	int t;
	for(int i=0;i<size-1;i++)
		for (int j=0;j<size-i-1;j++)
			if (Arr[j]>Arr[j+1]){
				t=Arr[j];
				Arr[j]=Arr[j+1];
				Arr[j+1]=t;
			}
}

void (*func(int *Arr, int size))(int *Arr, int size){
	int sum=0;
	for (int i=0;i<size;i++)
		sum+=Arr[i];
	if (sum==Arr[0])
		return invert;
	else if(sum<Arr[0])
		return ub;
	else
		return voz;
}

int main(){
	setlocale(LC_ALL, "Russian");
	int n, *A;
	cout<<"������� ���-�� ��������� � �������: ";
	cin>>n;
	A = new int[n];
	cout<<"������� �������� �������"<<endl;
	for (int i=0;i<n;i++){
		cout<<"A["<<i<<"] = ";
		cin>>A[i];
	}
	func(A, n)(A, n);
	cout<<endl;
	cout<<"������ ����� ���������:"<<endl;
	for (int i=0;i<n;i++)
		cout<<A[i]<<" ";
	delete[]A;
	return 0;
}
