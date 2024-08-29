#include<iostream>
using namespace std ;
int main (){

    int size ;
	
	cout << "Enter size : " ;
	cin >> size ;
	
    int arr[size][size] ;
		
	for(int i = 0; i < size; i++ ){
			
		for( int j = 0; j < size; j++ ){
			cin >> arr[i][j] ;
		}
		
	}

	cout << "\nOriginal is : " << endl ;

	for(int i = 0; i < size; i++ ){

		for( int j = 0; j < size; j++ ){
			cout << arr[i][j] << " " ;
		}

	cout << endl ;
	
    }

	cout << "\nTranspose is : " << endl ;


    for(int i = 0; i < size; i++ ){
			
		for( int j = i; j < size; j++ ){
			
            int temp = arr[i][j] ;
            arr[i][j] = arr[j][i] ;
            arr[j][i] = temp ;

		}
		
	}

    for(int i = 0; i < size; i++ ){

		for( int j = 0; j < size; j++ ){
			cout << arr[i][j] << " " ;
		}

	cout << endl ;
	
    }

    cout << "\nRotate is : " << endl ;

    for( int i = 0; i < size; i++ ){

        int j = 0 ;
        int k = size - 1 ; // k = 2

        while( j < k ){

            // hum yaha row ko same rakhan gy but colomns 
            // ko swap karty rahan gy .

            arr[i][j] = arr[i][j] + arr[i][k] ;
            arr[i][k] = arr[i][j] - arr[i][k] ;
            arr[i][j] = arr[i][j] - arr[i][k] ;

            j++ ;
            k--;

        } 

    }

    for(int i = 0; i < size; i++ ){

		for( int j = 0; j < size; j++ ){
			cout << arr[i][j] << " " ;
		}

	cout << endl ;
	
    }

    return 0 ;
}
