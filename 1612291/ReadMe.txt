========================================================================
		BÀI TẬP 03 – THUỘC TÍNH VÀ PHƯƠNG THỨC CỦA ĐỐI TƯỢNG
========================================================================

1. Thông tin cá nhân:
MSSV: 1612291	
Họ tên: Nguyễn Thị Ngân Khánh


2. Chức năng:
	
	CFraction.h & CFraction.cpp
	
	Thiết kế lớp:
	class CFraction:
	- mNume: int	//tử 
	- mDeno: int	//mẫu
	# CFraction()
	# ~CFraction()
	+ Toán tử nhập và toán tử xuất: >>, <<
	+ Toán tử tăng giảm (trước và sau): ++, --
	+ Toán tử đảo dấu: -
	+ Toán tử nghịch đảo: ~
	+ Toán tử tính toán: +, -, *, /, +=, -=, *=, /=
	+ Toán tử so sánh: >, >=, <, <=, ==, !=
	+ Toán tử ép kiểu sang số nguyên.
	+ Toán tử ép kiểu sang số thực.
	+ Toán tử ép kiểu sang kiểu hỗn số.

	struct SMixFraction //hỗn số, cho yêu cầu ép kiểu hỗn số


	1612291.cpp

	Hàm main():
	- Nhập 2 phân số, 1 số nguyên
		+ kiểm tra điều kiện, mẫu khác 0
		+ báo lỗi và buộc nhập lại khi nhập sai
	- Xuất (qua tối giản) 2 phân số
		+ rút gọn phân số
		+ rút gọn khi tử, mẫu số cùng dương hoặc cùng âm
		+ rút gọn khi mẫu bằng +/-1
	- Đảo dấu, nghich đảo: ~, -
	- Tăng giảm (trước và sau): ++, --
	- Tính toán: +, -, *, /, +=, -=, *=, /=
	- Ép kiểu sang số nguyên.
	- Ép kiểu sang số thực.
	- Ép kiểu sang kiểu hỗn số.


/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named [!output PROJECT_NAME].pch and a precompiled types file named StdAfx.obj.

/////////////////////////////////////////////////////////////////////////////
Note:
Yêu cầu "Cho phép đếm và trả về số lượng đối tượng phân số hiện tại" khó hiểu, nên đã không được làm
/////////////////////////////////////////////////////////////////////////////
