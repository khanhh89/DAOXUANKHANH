#include<stdio.h>
int main(){
	int arr[100];
	int n,choice,position,value,max = 0;
	int vitri=0;
	do {
		printf("Menu.\n");	
		printf("1.Nhap so phan tu va gia tri cac phan tu.\n");
		printf("2.In ra cac phan tu trong mang.\n");
		printf("3.Dem so luong cac so nguyen to trong mang.\n");
		printf("4.Tim gia tri nho thu hai trong mang.\n");
		printf("5.Them mot phan tu ngau nhien vao mang, vi tri do nguoi dung nhap");
		printf("6.Xoa phan tu tai vi tri cu the.\n");
		printf("7.Sap xep mang theo thu tu giam dan.\n");
		printf("8.Tim kiem phan tu do nguoi dung nhap.\n");
		printf("9.Xoa toan bo phan tu trung lap trong mang.\n");
		printf("10.Dao nguoc cac phan tu co trong mang.\n");
		printf("11.Thoat.\n");
		printf("Nhap lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu can nhap: ");
				scanf("%d",&n);
				printf("Nhap gia tri cac phan tu:\n");
				for(int i=0;i<n;i++){
					printf("arr[%d]: ",i);
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				printf("In ra gia tri dang quan ly: ");
				for(int i=0;i<n;i++){
					printf("%3d",arr[i]);
				}
				printf("\n");
				break;
			case 3:
				int songuyento;
				printf("\nSo nguyen to co trong mang : \n");
				for(int i=0;i<n;i++){
				if( arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0){
				songuyento = arr[i];
				printf("%3d",songuyento);
					}
				}
				break;
			case 4:
				break;
			
			case 5:
				printf("Nhap vi tri muon them: ");
				scanf("%d",&position);
				printf("Nhap gia tri muon them: ");
				scanf("%d",&value);
				if(position<0||position>n){
					printf("Vi tri muon them khong hop le\n");
				}else{
					for(int i=n;i>position;i--){
						arr[i]=arr[i-1];
					}
					arr[position]=value;
					n++;
				}	
				break;
			case 6: 
				printf("Nhap vao vi tri ban muon xoa: ");
				scanf("%d", &position);
				if(position <0 ||position>n){
				printf("So ban nhap khong hop le. Vui long thu lai!");
				}
				for(int i =position; i<n-1;i++){
					arr[i]=arr[i+1];
				}
				n--;
				for(int i =0; i<n;i++){
				printf("%d\t", arr[i]);
				}
				printf("\n");
				break;
			case 7:
			for (int i=0;i<n-1;i++){
				for(int j=0;j<n-i-1;j++){
					if(arr[j] < arr[j+1]){
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
					}
				}
				}	
				printf("Mang da duoc sap xep: ");
				for(int i=0 ;i<n;i++){
				printf("%3d",arr[i]);
				}
				printf("\n");
				break;
			case 8:
				int x;
				printf("Nhap gia tri can tim: ");
					scanf("%d",&x);
					for(int i=0;i<n;i++){
					if(arr[i]==x){
					printf("Phan tu %d o vi tri: %d",x,i);
					vitri=1;
					break;
					}
				}
				if(vitri=0){
				printf("khong tim thay phan tu");
				}
			break;
			case 11: 
			     break;
			default :
				printf("lua chon khong hop le");		
		}
	}
	while(choice!=12);
	return 0;
}
	

