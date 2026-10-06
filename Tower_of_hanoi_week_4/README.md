# Bài tập Tháp Hà Nội

## 1. Mô tả bài toán

Có n đĩa được xếp trên cọc A theo thứ tự từ lớn đến nhỏ.

Yêu cầu: chuyển toàn bộ n đĩa từ cọc A sang cọc C, sử dụng cọc B làm trung gian.

Các quy tắc:

- Mỗi lần chỉ được chuyển một đĩa.
- Không được đặt đĩa lớn lên trên đĩa nhỏ.
- Có thể sử dụng cả ba cọc A, B, C.


## 2. Giải thuật đệ quy

Để chuyển n đĩa từ cọc A sang cọc C:

- Bước 1: Chuyển n - 1 đĩa từ A sang B, sử dụng C làm trung gian.
- Bước 2: Chuyển đĩa lớn nhất từ A sang C.
- Bước 3: Chuyển n - 1 đĩa từ B sang C, sử dụng A làm trung gian.

### Trường hợp cơ sở

Nếu n = 1, chuyển trực tiếp đĩa từ cọc nguồn sang cọc đích.

### Cài đặt

Thuật toán đệ quy được cài đặt trong file:

`recursive.c`


## 3. Kiểm tra chương trình

### Test case 1

Input:
1

Output: 
move disk 1 from A to C

Số bước di chuyển: 1

### Test case 2
Input:
2

Output: 
move disk 1 from A to B
move disk 2 from A to C
move disk 1 from B to B

Số bước di chuyển: 3

### Test case 3
Input:
2

Output: 
move disk 1 from A to C
move disk 2 from A to B
move disk 1 from C to B
move disk 3 from A to C
move disk 1 from B to A
move disk 2 from B to C
move disk 1 from A to C

Số bước di chuyển: 7
### Số bước di chuyển được tính theo cthuc: 2^n -1

