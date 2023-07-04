void mySort(int d[], unsigned int n)
{
	int j;
	int tempVariable;
	int i;
	
	for(i = 0; i < n; i++){
		j = i - 1; //creating comparable index
		tempVariable = d[i]; //index value that we are comparing to 
		while(j >= 0 && d[j] > tempVariable){ //comparing the two index number
			d[j+1] = d[j];// if d[j] > d[i] and j>=0, this line will run. swapping the two value 
			j--; // going down the array index and checking if there are any other values that are greater than
				 // currect value. If yes, the while loop will run again. 
		}
		d[j+1] = tempVariable;
	}
}


