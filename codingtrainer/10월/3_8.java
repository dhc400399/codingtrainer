import java.util.*;

class Main {
	
	static int n;
	static int[] ch;
	public void DFS(int L) {
		// 4가되었을때
		if(L == n+1) {
			String tmp = "";
			for(int i=1; i<=n; i++) {
				if(ch[i] == 1) {
					tmp += (i + " ");
				}
			}
			if(tmp.length() > 0) {
				System.out.println(tmp);
			}
		}else {
			// 사용한다
			ch[L] = 1;
			// 왼쪽노드
			DFS(L+1);
			// 사용하지않는다
			ch[L] = 0;
			// 오른쪽 노드
			DFS(L+1);
		}
	}
	
	public static void main(String args[]) {
		Main T = new Main();
		n=3;
		// 인덱스번호를 숫자로 생각하기
		ch = new int[n+1];
		T.DFS(1);
	}
}