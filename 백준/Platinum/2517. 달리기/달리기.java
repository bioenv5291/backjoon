import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.List;
import java.util.ArrayList;
import java.util.HashMap;

class Num {
	int idx;
	int num;

	Num(int idx, int num){
		this.idx = idx;
		this.num = num;
	}
}

class Main {
	static int N;
	static Num[] arr, sorted;
	static int[] ans;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.parseInt(br.readLine());

		arr = new Num[N];
		sorted = new Num[N];
		ans = new int[N];

		for(int i=0; i<N; i++){
			int t = Integer.parseInt(br.readLine());
			arr[i] = new Num(i, t);
			ans[i] = i+1;
		}
		merge(0, N-1);
		for(int i=0; i<N; i++)
			System.out.println(ans[i]);
	}

	private static void merge(int left, int right){
		if(left >= right){
			return;
		}
		
		int mid = (left + right + 1) / 2;
		merge(left, mid-1);
		merge(mid, right);
		mergeSort(left, right);
	}

	private static void mergeSort(int left, int right){
		if(left >= right) return;
		int mid = (left + right + 1) / 2;
		int leftIdx = left;
		int rightIdx = mid;
		int cnt = left;


		while(leftIdx < mid && rightIdx <= right){            
			if(arr[leftIdx].num > arr[rightIdx].num){
				sorted[cnt++] = arr[leftIdx++];
			}
			else{
				sorted[cnt++] = arr[rightIdx];
				ans[arr[rightIdx++].idx] -= mid-leftIdx;
			}
		}
		while(leftIdx < mid) sorted[cnt++] = arr[leftIdx++];
		while(rightIdx <= right) sorted[cnt++] = arr[rightIdx++];
		for(int i=left; i<=right; i++)
			arr[i] = sorted[i];
	}	
}