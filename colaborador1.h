void ingresar(float (*m1)[5], float (*m2)[5])
{

cout<<"\n\nIngresar y mostrar los valores de los arreglos o matrices";

for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
	      cin>>*(*(m1+i)+j);
	}
}
	cout<<endl;
cout<<"Ingresando la segunda matriz"<<endl<<endl;
		
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
	      cin>>*(*(m2+i)+j);
	}
}
}

void mostrar (float (*m1)[5], float (*m2)[5]){
	
	for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<m1[ i ] [ j ];
	}
}
	cout<<endl;
	
	for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<m2[i][j];
	}
	cout<<endl;
	
}


}
