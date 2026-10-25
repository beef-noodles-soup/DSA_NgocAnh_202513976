# 1. Mô tả bài toán

Cho một mảng gồm n số nguyên. Hãy sắp xếp lại các phần tử sao cho tất cả các số âm nằm ở đầu mảng và các số không âm nằm ở cuối mảng, trong thời gian tuyến tính O(n).

# 2. Mô tả giải thuật

Giải thuật sử dụng hai con trỏ left và right để phân chia mảng thành hai nhóm: số âm và số không âm. Các phần tử được hoán đổi trực tiếp trên mảng mà không cần sử dụng thêm mảng phụ.

**Bước 1: Nhập dữ liệu**

Nhập số lượng phần tử của mảng n.

Nhập n số nguyên và lưu vào mảng a.

**Bước 2: Khởi tạo hai con trỏ**

Gán left = 0 để trỏ đến phần tử đầu tiên của mảng.

Gán right = n - 1 để trỏ đến phần tử cuối cùng của mảng.

**Bước 3: Duyệt và phân chia mảng**

Sử dụng vòng lặp while với điều kiện left < right. Trong mỗi lần lặp, thực hiện các thao tác sau.

**Bước 4: Tìm phần tử cần hoán đổi**

Di chuyển left sang phải khi a[left] là số âm, vì phần tử này đã nằm đúng nhóm.

Di chuyển right sang trái khi a[right] là số không âm, vì phần tử này đã nằm đúng nhóm.

Sau hai thao tác trên, nếu left < right, a[left] là số không âm và a[right] là số âm, nên hai phần tử đang nằm sai nhóm.

**Bước 5: Hoán đổi các phần tử**

Sử dụng biến tạm temp để hoán đổi giá trị a[left] và a[right].

Sau khi hoán đổi, tăng left lên 1 và giảm right đi 1 để tiếp tục kiểm tra các phần tử tiếp theo.

Lặp lại quá trình cho đến khi hai con trỏ gặp nhau hoặc vượt qua nhau.

**Bước 6: Xuất kết quả**

Duyệt mảng từ vị trí 0 đến n - 1 và in ra các phần tử sau khi phân chia.

Sau khi kết thúc, tất cả các số âm nằm ở đầu mảng và các số không âm nằm ở cuối mảng.

## Độ phức tạp thời gian: O(n)

## Độ phức tạp bộ nhớ phụ: O(1)

# 3. Test case

### Test case 1

Input:
7
-12 11 -13 -5 6 -7 5

Output:
Mang sau khi tach so am va so khong am:
-12 -7 -13 -5 6 5 11

### Test case 2

Input:
5
1 2 3 4 5

Output:
Mang sau khi tach so am va so khong am:
1 2 3 4 5

### Test case 3

Input:
4
-1 -2 -3 -4

Output:
Mang sau khi tach so am va so khong am:
-1 -2 -3 -4

### Test case 4

Input:
6
0 -3 5 -2 0 4

Output:
Mang sau khi tach so am va so khong am:
-2 -3 5 0 0 4

### Test case 5

Input:
5
-1 2 -3 4 -5

Output:
Mang sau khi tach so am va so khong am:
-1 -5 -3 4 2

### Test case 6

Input:
1
-7

Output:
Mang sau khi tach so am va so khong am:
-7