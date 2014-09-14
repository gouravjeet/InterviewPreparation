// we need to rotate the matrix by 90 degree

public void rotate(int [][] matrix, int n){
	for(int layer=0;layer<n/2;++layer){
		int forst=layer;
		int last=n-1-layer;
		for(int i=first;i<last;++i){
			int offset=i=first;
			int top=matrix[first][i];

			matrix[first][i]=matrix[last-offset][first];
			matrix[last-offset][first]=matrix[last][last-offset];
			matrix[last][last-offset]=matrix[i][last];
			matrix[i][last]=top;

		}
	}
}