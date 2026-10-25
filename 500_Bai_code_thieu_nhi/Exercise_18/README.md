# 1. Mô tả bài toán

Cho một mảng gồm n số nguyên. Hãy di chuyển tất cả các phần tử bằng 0 về cuối mảng, đồng thời giữ nguyên thứ tự tương đối của các phần tử khác 0.

# 2. Mô tả giải thuật

Giải thuật sử dụng hai biến chỉ số i và j để đưa các phần tử khác 0 về đầu mảng, sau đó đưa các phần tử bằng 0 về cuối mà không cần sử dụng thêm mảng phụ.

**Bước 1: Nhập dữ liệu**

Nhập số lượng phần tử của mảng n.

Nhập n số nguyên và lưu vào mảng a.

**Bước 2: Khởi tạo biến chỉ số**

Gán j = 0, trong đó j là vị trí tiếp theo cần đặt một phần tử khác 0.

**Bước 3: Duyệt các phần tử của mảng**

Sử dụng vòng lặp với biến chỉ số i, bắt đầu từ 0 và kết thúc tại n - 1.

Ở mỗi lần lặp, kiểm tra phần tử a[i].

**Bước 4: Di chuyển các phần tử khác 0**

Nếu a[i] khác 0, thực hiện các thao tác sau:

- Gán giá trị a[i] vào biến tạm temp.
- Hoán đổi giá trị a[i] và a[j] bằng biến temp.
- Tăng j lên 1 để xác định vị trí tiếp theo cần đặt phần tử khác 0.

Nếu a[i] bằng 0, không thực hiện thao tác hoán đổi và tiếp tục xét phần tử tiếp theo.

Sau khi vòng lặp kết thúc, tất cả các phần tử khác 0 nằm ở đầu mảng theo đúng thứ tự tương đối ban đầu, còn các phần tử 0 nằm ở cuối mảng.

**Bước 5: Xuất kết quả**

Duyệt mảng từ vị trí 0 đến n - 1 và in ra các phần tử sau khi di chuyển các số 0 về cuối.

## Độ phức tạp thời gian: O(n)

# 3. Test case

### Test case 1

Input:
8
0 1 0 3 12 0 5 0

Output:
Mang sau khi dua cac so 0 ve cuoi:
1 3 12 5 0 0 0 0

### Test case 2

Input:
5
1 2 3 4 5

Output:
Mang sau khi dua cac so 0 ve cuoi:
1 2 3 4 5

### Test case 3

Input:
4
0 0 0 0

Output:
Mang sau khi dua cac so 0 ve cuoi:
0 0 0 0

### Test case 4

Input:
6
0 -1 0 2 -3 0

Output:
Mang sau khi dua cac so 0 ve cuoi:
-1 2 -3 0 0 0

### Test case 5

Input:
1
0

Output:
Mang sau khi dua cac so 0 ve cuoi:
0

### Test case 6

Input:
7
0 4 0 0 2 0 6

Output:
Mang sau khi dua cac so 0 ve cuoi:
4 2 6 0 0 0 0