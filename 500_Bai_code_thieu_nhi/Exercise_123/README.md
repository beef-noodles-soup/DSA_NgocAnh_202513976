## 1. Mô tả bài toán
Cho một mảng số nguyên đã được sắp xếp theo thứ tự tăng dần và có thể chứa các phần tử trùng lặp. Hãy đếm số lần xuất hiện của một số nguyên x trong mảng. Nếu x không xuất hiện trong mảng, thông báo không tìm thấy phần tử.
## 2. Mô tả giải thuật
Giải thuật sử dụng biến count để đếm số lần xuất hiện của phần tử cần tìm x trong mảng.

**Bước 1: Nhập dữ liệu**

Nhập số lượng phần tử của mảng n.

Nhập n phần tử nguyên đã được sắp xếp theo thứ tự tăng dần và lưu vào mảng a.

Nhập số nguyên x cần tìm.

**Bước 2: Khởi tạo biến đếm**

Gán count = 0 để bắt đầu đếm số lần xuất hiện của x.

**Bước 3: Duyệt mảng và đếm số lần xuất hiện**

Sử dụng vòng lặp với biến chỉ số i, bắt đầu từ 0 và kết thúc tại n - 1.

Ở mỗi lần lặp, kiểm tra phần tử a[i].
- Nếu a[i] == x, tăng count lên 1.
- Nếu a[i] != x, giữ nguyên giá trị count.
Sau khi vòng lặp kết thúc, count chính là số lần xuất hiện của x trong mảng.

**Bước 4: Kiểm tra kết quả**
- Nếu count > 0, in ra số lần xuất hiện của phần tử x.
- Nếu count == 0, thông báo không tìm thấy phần tử.
**Bước 5: Xuất kết quả**

In kết quả đếm được hoặc thông báo không tìm thấy phần tử.

## Độ phức tạp thời gian: O(n)

## 3. Test case
### Test case 1
Input:
8
1 2 2 2 3 4 4 5
2

Output:
So lan xuat hien: 3

### Test case 2
Input:
5
1 2 3 4 5
4

Output:
So lan xuat hien: 1

### Test case 3
Input:
6
1 2 2 3 4 5
7

Output:
Khong tim thay phan tu

### Test case 4
Input:
5
3 3 3 3 3
3

Output:
So lan xuat hien: 5

### Test case 5
Input:
1
5
5

Output:
So lan xuat hien: 1

### Test case 5
Input:
1
5
2

Output:
Khong tim thay phan tu

