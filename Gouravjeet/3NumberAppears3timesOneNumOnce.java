
public static int FindNumberAppearingOnce(int[] numbers){
	int[] bitSum=new int[32];
	for(int i=0;i<32;++i){
		bitSum[i]=0;
	}
	for(int i=0;i<numbers.length;i++){
		int bitMask=1;
		for(int j=31;j>=0;--j){
			int bit=numbers[i] & bitMask;
			System.out.println(bit);
		}
	}
	
	return 0;
}