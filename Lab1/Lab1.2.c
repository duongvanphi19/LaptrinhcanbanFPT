// Duong Van Phi PC06060
#include <stdio.h>

int main() {
  char MSSV[7];
  char Hoten[20];
  char Gioitinh[10];
  char Ngaysinh[10];
  char Email[20];
  char Quequan[20];
  char Nganh[20];
  char Chuyennganh[20];
  char Sdt[10];

  printf("===== NHAP THONG TIN SINH VIEN =====\n\n");
  // nhap ma so sinh vien
  printf("Nhap ma so sinh vien: ");
  scanf("%s", &MSSV);
  // nhap ho ten sinh vien
  printf("Nhap ho ten: ");
  scanf("%s", &Hoten);
  // nhap gioi tinh
  printf("Nhap gioi tinh: ");
  scanf("%s", &Gioitinh);
  // nhap ngay sinh
  printf("Nhap ngay sinh: ");
  scanf("%s", &Ngaysinh);
  // nhap email
  printf("Nhap email: ");
  scanf("%s", &Email);
  // nhap que quan
  printf("Nhap que quan: ");
  scanf("%s", &Quequan);
  // nhap nganh
  printf("Nhap nganh: ");
  scanf("%s", &Nganh);
  // nhap chuyen nghanh
  printf("Nhap chuyen nganh: ");
  scanf("%s", &Chuyennganh);
  // nhap so dien thoai
  printf("Nhap so dien thoai: ");
  scanf("%s", &Sdt);

  printf("\n===== THONG TIN SINH VIEN DA NHAP =====\n");
  // in thong tin sinh vien ra man hinh
  printf("\nMSSV: %s", MSSV);
  printf("\nHo ten: %s", Hoten);
  printf("\nGioi tinh: %s", Gioitinh);
  printf("\nNgay sinh: %s", Ngaysinh);
  printf("\nEmail: %s", Email);
  printf("\nQue quan: %s", Quequan);
  printf("\nNganh: %s", Nganh);
  printf("\nChuyen nghanh: %s", Chuyennganh);
  printf("\nSo dien thoai: %s", Sdt);

  printf("Neu muon theo nghe thi khi moi hoc lap trinh, co cam thay kho khan, chan nan hay co gang nhieu hon chu dung bo cuoc, dung cup tiet, tu lam bai tap chu dung copy cua ban");

  return 0;
}
