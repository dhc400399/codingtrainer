import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int n = in.nextInt();
		int m = n/2 + 1; //1부터 체크할 숫자 개수
		int answer=0, sum=0;
	
		int[] arr = new int[n];
		for(int i=0; i<m; i++) {
			arr[i] = i+1; //0번 인덱스에 1이 들어가게끔
		}
		
		int lt=0;
		for(int rt=0; rt<m; rt++) {
			sum+= arr[rt];
			if(sum == n) answer++;
			while(sum >= n) {
				sum -= arr[lt++];
				if(sum == n) answer++;
			}
		}

		System.out.print(answer);
	}
}