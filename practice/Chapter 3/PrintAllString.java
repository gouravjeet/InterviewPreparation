
static void printAllKLength(char set[], int k){
	int n=set.length;
	printAllKLengthRec(set,k);

}
static void printAllKLengthRec(char set[],String prefix,int n, int k){
	if(k==0){
		System.out.println(prefix);
		return;
	}
	for(int i=0;i<n;++i){
		String newPrefix=prefix+set[i];
		printAllKLengthRec(set,newPrefix,n,k-1);
	}
}