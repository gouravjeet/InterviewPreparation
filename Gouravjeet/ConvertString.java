public class ConvertString{
	public static void main(String[] args){
		char[] a={'A','B','C','D','1','2','D'};
		char[] b={'C','B','A','D','D','2','1'};
		char temp;
		int n=b.length;
		int j,i=0;
		while(n>i){
			j=i;
			while(a[j]!=b[i]){
				j++;
			}
			while(j>i){
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				System.out.println(a);
				j--;
			}
			i++;
		}
	}
	
}