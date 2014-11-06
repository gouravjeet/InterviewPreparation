public void reverseSpiral(char[][] input){
	int matrixSize=input.length;
	int level=0;
	int levelStop;
	if(matrixSize%2==0){
		levelStop=input.length/2;
	}
	else{
		levelStop=input.length/2+1;
	}
	while(level<=levelStop){
		int mSize=matrixSize-1-level;
		for(int i=mSize;i>level;i--){
			System.out.println(input[level][i]);
		}
		for(int i=level;i<mSize;i++){
			System.out.println(input[i][level]);
		}
		for(int i=level;i<mSize;i++){
			System.out.println(input[mSize][i]);
		}
		for(int i=mSize;i>level;i--){
			System.out.println(input[i][mSize]);
		}
		level++;
	}
}