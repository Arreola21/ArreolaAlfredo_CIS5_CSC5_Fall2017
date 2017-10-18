/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alfredoarreola
 *purpose: Find the min and max values of user input 
 * Created on October 9, 2017, 2:15 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int a , b ;//The users number input 
    int calc; //the calculation of min and max 
    
    cout<<"This program  calculate the bigger value of two numbers "<<endl; 
    cout<<"Input a value between 0-100000"<<endl; 
    cin >> a; 
    cout<<"Input a second value to compare to the last inputed variable between 0-1000000"<<endl; 
    cin>>b; 
    if( a==b ){
        
        cout<<"Please input two different numbers "<<endl; 
    }
    if( a > b ){
        calc = a ; 
    }
    else{
        calc = b; 
    }
    cout<<"The number "<< calc <<" is bigger number out of "<< a << " and "<< b <<endl; 
  
    return 0;
}

