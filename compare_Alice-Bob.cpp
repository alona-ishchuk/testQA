#include <iostream>
using namespace std;

int main() {
	int n =3;
	int a[n], b[n];
	int alice=0; int bob=0;
	
	// Filling array Alice
	for (int i=0; i<n; i++) 
	{
	cin >> a[i];
	}
	
	//Filling array Bob
	for (int i=0; i<n; i++) 
	{
	cin >> b[i];
	} 
	
	//Comparison Alice's points to Bob's points
 for (int i=0; i<n; i++){
	if(a[i]>b[i]) //If Alice's points are higher Bob's points
	{	alice++;} // Alice gets a point to one's final result
	
			else if(a[i]<b[i]) // if Bob's points are higher Alice's points
		{bob++;} //Bob gets a point to one's final result
	}
	
	//Print final score
	cout<< alice << " | "<< bob;

	return 0;
}


