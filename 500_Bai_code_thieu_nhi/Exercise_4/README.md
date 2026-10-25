# 1. Mô tả bài toán

Cho một mảng gồm n phần tử, trong đó mỗi phần tử chỉ có thể là 0 hoặc 1. Hãy sắp xếp mảng theo thứ tự tăng dần trong thời gian tuyến tính O(n).

# 2. Mô tả giải thuật

Giải thuật sử dụng biến count để đếm số lượng phần tử 0 trong mảng, sau đó ghi lại các phần tử 0 ở đầu mảng và các phần tử 1 ở phía sau.

**Bước 1: Nhập dữ liệu**

Nhập số lượng phần tử của mảng n.

Nhập n phần tử, mỗi phần tử chỉ có thể là 0 hoặc 1, và lưu vào mảng a.

**Bước 2: Khởi tạo biến đếm**

Gán count = 0 để bắt đầu đếm số lượng phần tử 0 trong mảng.

**Bước 3: Đếm số lượng phần tử 0**

Sử dụng vòng lặp với biến chỉ số i, bắt đầu từ 0 và kết thúc tại n - 1.

Ở mỗi lần lặp, kiểm tra phần tử a[i].

Nếu a[i] bằng 0, tăng count lên 1.

Sau khi vòng lặp kết thúc, count chính là số lượng phần tử 0 trong mảng.

**Bước 4: Ghi các phần tử 0**

Sử dụng vòng lặp từ vị trí 0 đến count - 1, gán các phần tử tương ứng của mảng bằng 0.

**Bước 5: Ghi các phần tử 1** 

Sử dụng vòng lặp từ vị trí count đến n - 1, gán các phần tử tương ứng của mảng bằng 1.

Sau bước này, tất cả các phần tử 0 nằm ở đầu mảng và tất cả các phần tử 1 nằm ở phía sau.

**Bước 6: Xuất kết quả**

Duyệt mảng từ đầu đến cuối và in ra các phần tử sau khi sắp xếp.

## Độ phức tạp thời gian: O(n)

# 3. Test case

### Test case 1

Input:
7
1 0 1 1 0 0 1

Output:
Mang sau khi sap xep:
0 0 0 1 1 1 1

### Test case 2

Input:
4
0 0 0 0

Output:
Mang sau khi sap xep:
0 0 0 0

### Test case 3

Input:
5
1 1 1 1 1

Output:
Mang sau khi sap xep:
1 1 1 1 1

### Test case 4

Input:
6
1 0 1 0 1 0

Output:
Mang sau khi sap xep:
0 0 0 1 1 1

### Test case 5

Input:
1
0

Output:
Mang sau khi sap xep:
0

### Test case 6

Input:
1
1

Output:
Mang sau khi sap xep:
1