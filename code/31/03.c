#include <stdio.h>

/**
联合体
 */

struct gift_list {
	int stock_number;	// 库存量
	double price;		// 价格
	int item_type;		// 商品类型
	union un {
		struct {
			char title[20];	// 书名
			char author[20];	// 作者
			int num_page;	// 页数
		} book;
		struct {
			char design[30];	// 设计
		} mug;
		struct {
			char design[30];	// 设计
			int colors;	// 颜色
			int sizes;	// 尺寸
		} shirt;
	} item;
};

int main(void)
{

	return 0;
}
