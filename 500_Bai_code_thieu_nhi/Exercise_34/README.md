## 1. Mô tả bài toán
Cho một mảng gồm \(n\) phần tử, trong đó mỗi phần tử biểu diễn giá cổ phiếu tại một ngày trong tương lai. Hãy tìm lợi nhuận tối đa có thể đạt được bằng cách mua và bán cổ phiếu nhiều lần.

Điều kiện: Chỉ được nắm giữ tối đa một cổ phiếu tại một thời điểm. Giao dịch tiếp theo chỉ được bắt đầu sau khi giao dịch trước đó hoàn thành.
## 2. Mô tả giải thuật
Giải thuật sử dụng biến profit để lưu tổng lợi nhuận tối đa. Ta duyệt mảng từ phần tử thứ hai, nếu giá cổ phiếu ngày hiện tại lớn hơn ngày trước đó thì cộng phần chênh lệch vào profit.

**Bước 1: Nhập dữ liệu**

Nhập số ngày n.

Nhập giá cổ phiếu của từng ngày và lưu vào mảng a.

**Bước 2: Khởi tạo biến lợi nhuận**

Gán profit = 0 để bắt đầu tính tổng lợi nhuận.

**Bước 3: Duyệt mảng và tính lợi nhuận**

Sử dụng vòng lặp với biến i, bắt đầu từ 1 và kết thúc tại n - 1.

Ở mỗi lần lặp, so sánh giá cổ phiếu ngày hiện tại a[i] với giá ngày trước đó a[i - 1].
- Nếu a[i] > a[i - 1], cộng phần chênh lệch a[i] - a[i - 1] vào profit.
- Nếu a[i] <= a[i - 1], giữ nguyên profit.
Sau khi duyệt hết mảng, profit là lợi nhuận tối đa có thể đạt được.

Bước 4: Xuất kết quả

In giá trị profit.

## Độ phức tạp thời gian: O(n)
# 3. Test case
## Test case 1
Input:
6
7 1 5 3 6 4

Output:
Loi nhuan toi da: 7

## Test case 2
Input:
5
1 2 3 4 5

Output:
Loi nhuan toi da: 4

## Test case 3
Input:
6
1 5 2 8 3 10

Output:
Loi nhuan toi da: 17

## Test case 4
Input:
1
10

Output:
Loi nhuan toi da: 0

## Test case 5
Input:
5
3 3 3 3 3

Output:
Loi nhuan toi da: 0