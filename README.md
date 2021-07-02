# Bài tập lớn môn C Programming Introduction

## Bài 1
### Mục tiêu
Tính tổ hợp chập k của n, dữ liệu đọc từ file TOHOP.INP và ghi kết quả ra file TOHOP.OUT.
### Mô tả các mẫu test
TOHOP.INP | TOHOP.OUT| 
--- | --- | 
9 5 | 126 |
15 6 | 5005 |
2 1 | 2 |
20 6 | 38760 | 
10 7 | 120 | 
37 22 | 9364199760 | 
5 0 | 1 | 
15 12 | 455 | 
39 4 | 82251 | 
28 5 | 5005 | 

## Bài 2: Bài toán cái balô
### Mục tiêu
Tìm cách lựa chọn các đồ vật đựng vào balô sao cho tổng trọng lượng không vượt quá số cho trước và tổng giá trị là lớn nhất.
### Thuật toán
#### Quy hoạch động :
Thuật toán quy hoạch động được thực hiện theo công thức F(j) = max{F(j-weight[i])+point[i]},trong đó j là khối lượng balo có thể đựng,weight[i] là khối lượng của vật có chỉ số i có giá trị là point[i].
Sau đó sẽ truy vết số lượng đồ vật ở trong balo theo công thức F(w) == F(w-weight[i]) + point[i].
#### Tham lam :
Thuật toán tham lam sẽ dựa trên điểm của mỗi vật theo công thức value = weight/point,trong đó value chính là điểm của mỗi đò vật,weight và point chính là khối lượng và giá trị của vật đó.
Đầu tiên ta sẽ thực hiện với vât có điểm cao nhất,giả sử là vật A có điểm là B.
Nếu vật A có khối lượng vượt qua balo thì ta sẽ xét đến vật có điểm cao nhất ngoài A.
Nếu vật A có khối lượng nhỏ hơn khối lượng balo,ta sẽ cho vật A vào balo và giảm khối lượng tối đa balo đựng được theo khối lượng vật A.
Cứ làm tương tự như vậy đến khi ko thể thực hiện được nữa.
### Mô tả các mẫu test
BAG.INP | Kết quả| 
--- | --- | 
5 60 | 144
7 17 A | A 8
2 4 B | B 2
6 13 C |
4 5 D |
1 2 E |

BAG.INP | Kết quả| 
--- | --- | 
5 62| 152
14 22 A|B 6
10 25 B|C 2
1 1 C
4 6 D
8 15 E

BAG.INP | Kết quả| 
--- | --- | 
4 20|40
2 3 A|B 1
13 30 B|A 3
5 6 C|D 1
1 1 D|

## Bài 3: Chương trình quản lý sinh viên
### Mục tiêu:
Viết chương trình quản lý sinh viên gồm các tính năng xem danh sách SV, nhập tên SV, tìm SV theo tên và thoát chương trình.
### Thuật toán

## Bài 4: Chương trình chia bài tiến lên cho 4 người
### Mục tiêu:
In ra màn hình kết quả gồm: các lá mà mỗi người chơi có và các tứ quý người chơi sở hữu.
### Thuật toán

### Kết quả
Output 1: <br /><br />
<img src="https://user-images.githubusercontent.com/81409248/124221090-3688a900-db29-11eb-848a-76061ef95dcd.png" width="90%"></img> <br /><br />
Output 2: <br /><br />
<img src="https://user-images.githubusercontent.com/81409248/124221093-37b9d600-db29-11eb-9f6f-6309874784cd.png" width="90%"></img> 

////
- Phần đầu thì giới thiệu thành viên trong nhóm này xong phân cong
- Vào các bài cụ thể thì có thể trình bày bài này làm gì, ý tưởng thuật toán, mẫu test, v.v..























