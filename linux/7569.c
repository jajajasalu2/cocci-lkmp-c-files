cocci_test_suite() {
	u32 *cocci_id/* drivers/video/fbdev/sm501fb.c 930 */;
	unsigned cocci_id/* drivers/video/fbdev/sm501fb.c 911 */;
	struct fb_bitfield *cocci_id/* drivers/video/fbdev/sm501fb.c 899 */;
	unsigned int cocci_id/* drivers/video/fbdev/sm501fb.c 898 */;
	struct sm501fb_info {
		struct device *dev;
		struct fb_info *fb[2];
		struct resource *fbmem_res;
		struct resource *regs_res;
		struct resource *regs2d_res;
		struct sm501_platdata_fb *pdata;
		unsigned long pm_crt_ctrl;
		int irq;
		int swap_endian;
		void __iomem *regs;
		void __iomem *regs2d;
		void __iomem *fbmem;
		size_t fbmem_len;
		u8 *edid_data;
	} cocci_id/* drivers/video/fbdev/sm501fb.c 81 */;
	struct sm501_mem {
		unsigned long size;
		unsigned long sm_addr;
		void __iomem *k_addr;
	} cocci_id/* drivers/video/fbdev/sm501fb.c 74 */;
	enum sm501_controller{HEAD_CRT=0, HEAD_PANEL=1,} cocci_id/* drivers/video/fbdev/sm501fb.c 63 */;
	const struct fb_videomode cocci_id/* drivers/video/fbdev/sm501fb.c 46 */;
	unsigned long cocci_id/* drivers/video/fbdev/sm501fb.c 44 */;
	char *cocci_id/* drivers/video/fbdev/sm501fb.c 43 */;
	unsigned long long cocci_id/* drivers/video/fbdev/sm501fb.c 258 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/sm501fb.c 2210 */;
	pm_message_t cocci_id/* drivers/video/fbdev/sm501fb.c 2165 */;
	const u8 *cocci_id/* drivers/video/fbdev/sm501fb.c 1956 */;
	struct device_node *cocci_id/* drivers/video/fbdev/sm501fb.c 1955 */;
	struct sm501_platdata *cocci_id/* drivers/video/fbdev/sm501fb.c 1948 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/sm501fb.c 1931 */;
	enum sm501_controller cocci_id/* drivers/video/fbdev/sm501fb.c 1892 */;
	void cocci_id/* drivers/video/fbdev/sm501fb.c 1891 */;
	struct sm501fb_par cocci_id/* drivers/video/fbdev/sm501fb.c 1875 */;
	unsigned char *cocci_id/* drivers/video/fbdev/sm501fb.c 1862 */;
	char cocci_id/* drivers/video/fbdev/sm501fb.c 1856 */[];
	struct sm501_platdata_fb cocci_id/* drivers/video/fbdev/sm501fb.c 1850 */;
	struct sm501_platdata_fbsub cocci_id/* drivers/video/fbdev/sm501fb.c 1835 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/sm501fb.c 1726 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/sm501fb.c 171 */;
	struct sm501fb_par *cocci_id/* drivers/video/fbdev/sm501fb.c 170 */;
	u32 cocci_id/* drivers/video/fbdev/sm501fb.c 168 */;
	size_t cocci_id/* drivers/video/fbdev/sm501fb.c 168 */;
	struct sm501_platdata_fbsub *cocci_id/* drivers/video/fbdev/sm501fb.c 1677 */;
	struct sm501fb_info *cocci_id/* drivers/video/fbdev/sm501fb.c 167 */;
	struct sm501_mem *cocci_id/* drivers/video/fbdev/sm501fb.c 167 */;
	struct resource *cocci_id/* drivers/video/fbdev/sm501fb.c 1526 */;
	const struct fb_fillrect *cocci_id/* drivers/video/fbdev/sm501fb.c 1388 */;
	const struct fb_copyarea *cocci_id/* drivers/video/fbdev/sm501fb.c 1302 */;
	struct attribute *cocci_id/* drivers/video/fbdev/sm501fb.c 1274 */[];
	const char *cocci_id/* drivers/video/fbdev/sm501fb.c 1179 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/sm501fb.c 117 */;
	int cocci_id/* drivers/video/fbdev/sm501fb.c 117 */;
	struct device_attribute *cocci_id/* drivers/video/fbdev/sm501fb.c 1161 */;
	struct device *cocci_id/* drivers/video/fbdev/sm501fb.c 1160 */;
	ssize_t cocci_id/* drivers/video/fbdev/sm501fb.c 1160 */;
	unsigned char cocci_id/* drivers/video/fbdev/sm501fb.c 1119 */;
	const unsigned char *cocci_id/* drivers/video/fbdev/sm501fb.c 1116 */;
	void __iomem *cocci_id/* drivers/video/fbdev/sm501fb.c 1042 */;
	struct fb_cursor *cocci_id/* drivers/video/fbdev/sm501fb.c 1038 */;
	struct sm501fb_par {
		u32 pseudo_palette[16];
		enum sm501_controller head;
		struct sm501_mem cursor;
		struct sm501_mem screen;
		struct fb_ops ops;
		void *store_fb;
		void *store_cursor;
		void __iomem *cursor_regs;
		struct sm501fb_info *info;
	} cocci_id/* drivers/video/fbdev/sm501fb.c 101 */;
}
