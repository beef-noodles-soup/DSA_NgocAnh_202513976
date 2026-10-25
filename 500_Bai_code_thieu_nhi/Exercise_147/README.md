# 1. Mô tả bài toán
Cho một mảng nhị phân gồm 2 phần tử, mỗi phần tử chỉ có thể là 0 hoặc 1. Biết rằng mảng có ít nhất một phần tử bằng 0. Hãy viết một câu lệnh duy nhất để đưa cả hai phần tử của mảng về 0.

Yêu cầu: Không sử dụng toán tử ba ngôi (?:) và không gán trực tiếp từng phần tử riêng biệt.
# 2. Mô tả giải thuật
Giải thuật sử dụng phép nhân hai phần tử của mảng kết hợp với phép gán liên tiếp để đưa cả hai phần tử về 0.

**Bước 1: Nhập dữ liệu**

Khai báo mảng a gồm 2 phần tử nguyên.

Nhập hai phần tử của mảng, mỗi phần tử chỉ có thể là 0 hoặc 1.

**Bước 2: Tính tích hai phần tử**

Tính tích a[0] * a[1].

Vì đề bài đảm bảo có ít nhất một phần tử bằng 0 nên tích của hai phần tử luôn bằng 0.

**Bước 3: Gán cả hai phần tử về 0**

Sử dụng câu lệnh:a[0] = a[1] = a[0] * a[1];
Phép gán được thực hiện từ phải sang trái. Đầu tiên, tích được tính bằng 0 và gán cho a[1], sau đó giá trị 0 được gán cho a[0].

Như vậy, cả hai phần tử đều bằng 0 chỉ với một câu lệnh, đáp ứng yêu cầu của đề bài.

Bước 4: Xuất kết quả

In hai phần tử của mảng sau khi thực hiện phép gán.

## Độ phức tạp thời gian: O(1) 
# Test case 
### test case 1
Input:
0 
1

Output:
Mang sau khi dua ca hai phan tu ve 0:
0 0

## Test case 2
Input:
1 
0

Output:
Mang sau khi dua ca hai phan tu ve 0:
0 0

## Test case 3
Input:
0
0

Output:
Mang sau khi dua ca hai phan tu ve 0:
0 0
