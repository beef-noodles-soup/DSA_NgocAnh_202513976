# 1. Mô tả bài toán
Cho một mảng số nguyên, tìm bộ ba phần tử có tích lớn nhất.
# 2. Mô tả giải thuật
Ý tưởng: Duyệt tất cả các bộ ba phần tử khác nhau trong mảng, tính tích của từng bộ ba và tìm bộ ba có tích lớn nhất.


 **Bước 1**
Nhập số phần tử n và các phần tử của mảng.
 **Bước 2:** 
Khởi tạo max bằng tích của ba phần tử đầu tiên. Lưu ba phần tử này vào x, y, z.
 **Bước 3:** 
Sử dụng ba vòng lặp lồng nhau để lần lượt chọn ba phần tử a[i], a[j], a[k], với điều kiện i < j < k.
 **Bước 4:** 
Tính tích của ba phần tử. Nếu tích lớn hơn max, cập nhật max và lưu lại bộ ba tương ứng.
**Bước 5:**
 In ra bộ ba có tích lớn nhất và giá trị tích lớn nhất.
# Độ phức tạp: O(n^3)
# Test case 
### test case 1
Input:
5
1 2 3 4 5

Output:
Bo ba co tich lon nhat: 3 4 5
Tich lon nhat: 60

### test case 2
Input:
6
-10 -10 1 2 3 4

Output:
Bo ba co tich lon nhat: -10 -10 4
Tich lon nhat: 400

### test case 3
Input:
4
-5 -4 -3 -2

Output:
Bo ba co tich lon nhat: -4 -3 -2
Tich lon nhat: -24

### test case 4
Input:
5
2 2 2 2 2

Output:
Bo ba co tich lon nhat: 2 2 2
Tich lon nhat: 8