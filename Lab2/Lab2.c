//Duong Van Phi PC06060
#include <stdio.h>

//Lab2
int main() {
  //2.1: Cong tru hai so
  int a, b;
  printf("===TONG, HIEU 2 SO===\n");
  printf("Nhap so thu nhat: ");
  scanf("%d", & a);
  printf("Nhap so thu hai: ");
  scanf("%d", & b);
  printf("\nTong: %d\nHieu: %d", a + b, a - b);

  //2.2: Chu vi, dien tich hinh chu nhat
  int d, r;
  printf("\n\n===CHU VI, DIEN TICH HCN===\n");
  printf("Nhap chieu dai: ");
  scanf("%d", & d);
  printf("Nhap chieu rong: ");
  scanf("%d", & r);
  printf("\nChu vi: %d\nDien tich: %d", (d + r) * 2, d * r);

  //2.3: Chu vi, dien tich hinh tron
  const float pi = 3.14;

  int bk;
  printf("\n\n===CHU VI, DIEN TICH HINH TRON===\n");
  printf("Nhap ban kinh hinh tron: ");
  scanf("%d", & bk);

  printf("\nHinh tron ban kinh=%d\nChu vi: %f\nDien tich: %f", bk, 2 * pi * bk, pi * bk * bk);

  //2.4: Tinh dien trung binh Toan, Ly, Hoa

  float toan, ly, hoa;

  printf("\n\n===DIEM TRUNG BINH TOAN, LY, HOA===\n");
  printf("Nhap diem mon toan: ");
  scanf("%f", & toan);

  printf("Nhap diem mon ly: ");
  scanf("%f", & ly);

  printf("Nhap diem mon hoa: ");
  scanf("%f", & hoa);

  printf("\nDiem trung binh: %f", (toan * 3 + ly * 2 + hoa) / 6);
  
  //2.5 Chuong trinh tinh tuoi
  
  int namsinh, namhientai;
  printf("\n\n===CHUONG TRINH TINH TUOI===\n");
  printf("Nhap nam sinh cua ban: ");
  scanf("%d", &namsinh);
  printf("Nhap nam hien tai: ");
  scanf("%d", &namhientai); 
  
  printf("Nam nay ban %d tuoi!", namhientai - namsinh);
  
  return 0;
}
