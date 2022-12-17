import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner kb = new Scanner(System.in);
        Main m = new Main();

        int n1 = kb.nextInt();
        int [] arr1 = new int[n1];
        for (int i = 0; i < n1; i++) {
            arr1[i] = kb.nextInt();
        }

        int n2 = kb.nextInt();
        int [] arr2 = new int[n2];
        for (int i = 0; i < n2; i++) {
            arr2[i] = kb.nextInt();
        }

        List<Integer> answer = m.solution(n1, n2, arr1, arr2);

        answer.forEach(item -> {
            System.out.print(item + " ");
        });
    }

    public List<Integer> solution(int n1, int n2, int[] arr1, int[] arr2) {
        List<Integer> answer = new ArrayList<>();

        int arr1Index = 0;
        int arr2Index = 0;

        // 배열의 인덱스1, 인덱스2를 선언하고 answer list에 넣어준 배열의 값만 해당배열인덱스를 증감한다.
        while (arr1Index < n1 && arr2Index < n2) {
            answer.add(arr1[arr1Index] < arr2[arr2Index] ? arr1[arr1Index++] : arr2[arr2Index++]);
        }

        // 배열의 나머지 데이터를 모두 넣어준다. 데이터를 모두 넣어준 배열이라면 해당for문을 실행하지 않음.
        for (int i = arr1Index; i < n1; i++) {
            answer.add(arr1[i]);
        }

        // 배열의 나머지 데이터를 모두 넣어준다. 데이터를 모두 넣어준 배열이라면 해당for문을 실행하지 않음.
        for (int i = arr2Index; i < n2; i++) {
            answer.add(arr2[i]);
        }

        return answer;
    }
}