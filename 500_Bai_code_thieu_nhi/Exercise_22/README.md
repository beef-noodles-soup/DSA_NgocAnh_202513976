# 1. Mô tả bài toán

Cho một mảng gồm n số nguyên. Hãy tìm tổng lớn nhất của một dãy con liên tiếp không rỗng trong mảng.

## 2. Mô tả giải thuật

Giải thuật Kadane sử dụng hai biến sum và max để tìm tổng lớn nhất của dãy con liên tiếp trong mảng mà không cần kiểm tra tất cả các dãy con có thể có.

**Bước 1: Nhập dữ liệu**

Nhập số lượng phần tử của mảng n.

Nhập n số nguyên và lưu vào mảng a.

**Bước 2: Khởi tạo giá trị ban đầu**

Gán sum = a[0] và max = a[0].

Trong đó, sum là tổng lớn nhất của dãy con liên tiếp kết thúc tại vị trí hiện tại, còn max là tổng lớn nhất tìm được trong toàn bộ quá trình duyệt mảng.

**Bước 3: Duyệt các phần tử của mảng**

Sử dụng vòng lặp với biến chỉ số i, bắt đầu từ 1 và kết thúc tại n - 1.

Ở mỗi lần lặp, xét phần tử a[i] và thực hiện các bước tiếp theo.

**Bước 4: Cập nhật tổng của dãy con hiện tại**

Nếu sum < 0, gán sum = a[i] để bắt đầu một dãy con mới từ phần tử hiện tại, vì việc giữ lại tổng âm trước đó sẽ làm giảm tổng của dãy con.

Ngược lại, nếu sum >= 0, cộng a[i] vào sum để tiếp tục dãy con hiện tại.

**Bước 5: Cập nhật tổng lớn nhất**

Nếu sum > max, gán max = sum.

Sau đó, tiếp tục xét các phần tử còn lại của mảng cho đến khi kết thúc vòng lặp.

**Bước 6: Xuất kết quả**

In ra giá trị max, là tổng lớn nhất của một dãy con liên tiếp không rỗng trong mảng.

## Độ phức tạp thời gian: O(n)

### 3. Test case

## Test case 1

Input:
8
-2 -3 4 -1 -2 1 5 -3


Output:
Tong lon nhat cua day con: 7

## Test case 2

Input:
5
1 2 3 4 5


Output:
Tong lon nhat cua day con: 15


## Test case 3

Input:
5
-2 -3 -1 -5 -4


Output:
Tong lon nhat cua day con: -1


## Test case 4

Input:
5
-5 4 -1 2 -6


Output:
Tong lon nhat cua day con: 5


## Test case 5

Input:

1
-7


Output:

Tong lon nhat cua day con: -7


## Test case 6

Input:

5
-2 0 -1 0 -3


Output:
Tong lon nhat cua day con: 0
