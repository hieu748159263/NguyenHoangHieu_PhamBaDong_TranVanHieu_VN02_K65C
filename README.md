# Bài tập lớn môn C Programming Introduction nhóm 2

Thành viên: Nguyễn Hoàng Hiếu, Phạm Bá Đồng, Trần Văn Hiếu <br />
Phân công:
- Nguyễn Hoàng Hiếu: Bài 4 + soạn file readme
- Phạm Bá Đồng: Bài 2
- Trần Văn Hiếu: Bài 1, 3
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
#### 1. Quy hoạch động
- Thuật toán quy hoạch động được thực hiện theo công thức F(j) = max{F(j-weight[i])+point[i]}, trong đó j là khối lượng balo có thể đựng, weight[i] là khối lượng của vật có chỉ số i có giá trị là point[i]. <br />
- Sau đó sẽ truy vết số lượng đồ vật ở trong balo theo công thức F(w) == F(w-weight[i]) + point[i].
#### 2. Tham lam
- Thuật toán tham lam sẽ dựa trên điểm của mỗi vật theo công thức value = weight/point,trong đó value chính là điểm của mỗi đò vật,weight và point chính là khối lượng và giá trị của vật đó.<br />
- Đầu tiên ta sẽ thực hiện với vât có điểm cao nhất,giả sử là vật A có điểm là B.<br />
  - Nếu vật A có khối lượng vượt qua balo thì ta sẽ xét đến vật có điểm cao nhất ngoài A.<br />
  - Nếu vật A có khối lượng nhỏ hơn khối lượng balo,ta sẽ cho vật A vào balo và giảm khối lượng tối đa balo đựng được theo khối lượng vật A.<br />
- Cứ làm tương tự như vậy đến khi không thể thực hiện được nữa.
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
### Mục tiêu
Viết chương trình quản lý sinh viên gồm các tính năng xem danh sách SV, nhập tên SV, tìm SV theo tên và thoát chương trình.
### Kết quả
Chức năng 1: Xem danh sách SV <br /><br />
<img src="https://user-images.githubusercontent.com/81409248/124285947-a40ff600-db78-11eb-9960-a25a0f343c37.png" width="45%"></img> <img src="https://user-images.githubusercontent.com/81409248/124285952-a5412300-db78-11eb-8731-ccffb6e1e3d0.png" width="45%"> <br /><br />
Chức năng 2: Nhập tên SV <br />
</img> <img src="https://user-images.githubusercontent.com/81409248/124285956-a5d9b980-db78-11eb-8d19-73e0d1980e24.png" width="45%"></img> <img src="https://user-images.githubusercontent.com/81409248/124285961-a70ae680-db78-11eb-980b-7adf1fcea9cf.png" width="45%"> <br /><br />
Chức năng 3: Tìm SV theo tên <br /><br />
</img> <img src="https://user-images.githubusercontent.com/81409248/124285966-a7a37d00-db78-11eb-9cae-6b9c6baaf12c.png" width="45%"></img> <img src="https://user-images.githubusercontent.com/81409248/124285975-a96d4080-db78-11eb-96a5-3ac2af260803.png" width="45%"> <br /><br />
Chức năng 4: Thoát chương trình <br /><br />
</img> <img src="https://user-images.githubusercontent.com/81409248/124285981-ab370400-db78-11eb-954f-a8f93826fc32.png" width="45%"></img> 
## Bài 4: Chương trình chia bài tiến lên cho 4 người
### Mục tiêu
In ra màn hình kết quả gồm: các lá mà mỗi người chơi có và các tứ quý người chơi sở hữu.
### Thuật toán
#### 1. Chia bài
- Khời tạo mảng bool[13][4] để đánh dấu các quân bài đã được chia ra, biến dem = 0 để đếm số lá bài đã chia ra, mảng chiabai[4][13] để in kết quả chia bài
- Mỗi lá bài chia ra tương ứng với một lần gọi hàm rand() % 52. Mỗi lần random ra số x tương ứng với vị trí hàng i = x/4, cột j = x % 4 trong mảng bool
  - Nếu ô bool[i][j] có giá trị 0 (lá bài này chưa được chia) 
    - Thì gán bool[i][j] bằng 1 và tăng biến dem. Gán chiabai[a][b] (tương ứng với lá bài b+1 của người chơi a+1) bằng x.
  - Nếu o bool[i][j] có giá trị 1 thì tăng biến x thêm 1 và quay lại xét bool[i][j]. Nếu tăng đến cuối mảng mà vẫn gặp ô 1 thì quay về x = 0.
- Quá trình lặp lại cho đến khi dem = 52.
- In kết quả chia bài dùng mảng chiabai[a][b]. Với mỗi giá trị x = chiabai[a][b] tương ứng với hàng i = x/4, cột j = x % 4 trong bảng các quân bài. Từ đó dùng 2 hàm inKetQua1 và inKetQua2, xuất được từng lá bài mà người chơi có ra màn hình.
#### 2. Kiểm tra tứ quý
- Khởi tạo: mảng checkTuQuy[13][4], biến coTuQuy = 0
- Với mỗi giá trị x = chiabai[a][b] tương ứng với hàng i = x/4, cột j = x % 4 trong bảng checkTuQuy. Sau đó gán checkTuQuy[i][j] = a, nghĩa là lá bài ở vị trí hàng i cột j trong bảng bài thuộc về người chơi a+1.
- Sau đó với mỗi hàng i trong mảng checkTuQuy, kiểm tra xem 4 lá bài trong hàng đó có thuộc về người chơi a+1 không. Nếu có thì in ra thông báo và gán biến coTuQuy = 1.
- Cuối cùng, nếu biến coTuQuy = 0, in ra thông báo không người chơi nào có tứ quý.
### Kết quả
Output 1: <br /><br />
<img src="https://user-images.githubusercontent.com/81409248/124221090-3688a900-db29-11eb-848a-76061ef95dcd.png" width="90%"></img> <br /><br />
Output 2: <br /><br />
<img src="https://user-images.githubusercontent.com/81409248/124221093-37b9d600-db29-11eb-9f6f-6309874784cd.png" width="90%"></img> 
