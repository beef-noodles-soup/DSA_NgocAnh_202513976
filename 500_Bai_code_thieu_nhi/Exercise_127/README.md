# 1. Mô tả bài toán
Cho một mảng nhị phân gồm \(n\) phần tử đã được sắp xếp theo thứ tự tăng dần. Mỗi phần tử chỉ có thể là 0 hoặc 1. Hãy đếm tổng số phần tử 1 có trong mảng.
# 2. Mô tả giải thuật
Giải thuật sử dụng biến count để đếm số lượng phần tử 1 trong mảng.

**Bước 1: Nhập dữ liệu**

Nhập số lượng phần tử của mảng n.

Nhập n phần tử nhị phân đã được sắp xếp và lưu vào mảng a.

**Bước 2: Khởi tạo biến đếm**

Gán count = 0 để bắt đầu đếm số lượng phần tử 1.

**Bước 3: Duyệt mảng và đếm số phần tử 1**

Sử dụng vòng lặp với biến chỉ số i, bắt đầu từ 0 và kết thúc tại n - 1.

Ở mỗi lần lặp, kiểm tra phần tử a[i].
- Nếu a[i] == 1, tăng count lên 1.
- Nếu a[i] != 1, giữ nguyên giá trị count.
Sau khi vòng lặp kết thúc, count chính là tổng số phần tử 1 trong mảng.

**Bước 4: Xuất kết quả**

In giá trị count ra màn hình.

# Độ phức tạp thời gian: O(n)
# 3. Test case
### Test case 1
Input: 
7
0 0 0 1 1 1 1

Output:
So luong so 1: 4

### Test case 2
Input: 
5
0 0 0 0 0

Output:
So luong so 1: 0

### Test case 3
Input: 
4
1 1 1 1

Output:
So luong so 1: 4

### Test case 4
Input: 
6
0 0 1 1 1 1

Output:
So luong so 1: 4

### Test case 5
Input: 
1
0

Output:
So luong so 1: 0

### Test case 5
Input: 
1
1

Output:
So luong so 1: 1