// 函数的定义
static int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {
		return 1;
	} else {
		return 0;
	}
}

// 全局变量
static int g_val = 2024;
