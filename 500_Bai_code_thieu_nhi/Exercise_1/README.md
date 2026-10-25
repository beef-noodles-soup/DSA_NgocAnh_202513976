# 1. Mô tả bài toán

Cho một mảng gồm các số nguyên và một giá trị tổng cần tìm sum. Hãy tìm tất cả các cặp phần tử có tổng bằng sum.

Mỗi cặp phải gồm hai phần tử nằm ở hai vị trí khác nhau trong mảng.

## 2. Mô tả giải thuật

Giải thuật sử dụng hai vòng lặp lồng nhau để kiểm tra tất cả các cặp phần tử có thể có trong mảng.

Bước 1: Nhập dữ liệu

Nhập số lượng phần tử của mảng n.

Nhập n số nguyên và lưu vào mảng a.

Nhập giá trị tổng cần tìm sum.

Bước 2: Chọn phần tử thứ nhất

Sử dụng vòng lặp ngoài với biến chỉ số i, bắt đầu từ 0 và kết thúc tại n - 2.

Ở mỗi lần lặp, chọn phần tử a[i] làm phần tử thứ nhất của cặp cần kiểm tra.

Bước 3: Chọn phần tử thứ hai

Với mỗi giá trị i, sử dụng vòng lặp trong với biến chỉ số j, bắt đầu từ i + 1 và kết thúc tại n - 1.

Cách chọn này bảo đảm hai phần tử nằm ở hai vị trí khác nhau và mỗi cặp chỉ được kiểm tra một lần, tránh kiểm tra lại cặp theo thứ tự ngược lại.

Bước 4: Kiểm tra tổng của hai phần tử

Với mỗi cặp phần tử a[i] và a[j], kiểm tra điều kiện:

a[i] + a[j] == sum

Nếu điều kiện đúng, in ra hai phần tử và tổng của chúng.

Nếu điều kiện sai, tiếp tục kiểm tra cặp phần tử tiếp theo.

Bước 5: Kết thúc

Tiếp tục thực hiện các vòng lặp cho đến khi tất cả các cặp phần tử cần xét đã được kiểm tra. Sau đó, kết thúc chương trình.

Nếu không tồn tại cặp phần tử nào thỏa mãn điều kiện, chương trình không in ra cặp nào.
## Độ phức tạp thời gian: O(n²)


## 3. Test case

### Test case 1
Input:
 5
 2 7 11 3 8
 10

Output:
2 + 8 = 10
7 + 3 = 10
### Test case 2
Input:
5
-4 6 -2 9 1
2

Output:
-4 + 6 = 2
### Test case 3
Input:
4
1 2 4 8
20

Output:

#### Test case 4
Input:
5
3 3 4 3 5
6

Outout:
3 + 3 = 6
3 + 3 = 6
3 + 3 = 6