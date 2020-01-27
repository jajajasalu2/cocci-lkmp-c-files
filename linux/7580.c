cocci_test_suite() {
	struct mdc_cmap_regs {
		char pad1[0x200200];
		unsigned char addr;
		char pad2[6];
		unsigned char lut;
	} cocci_id/* drivers/video/fbdev/macfb.c 97 */;
	struct {
		char pad1[0x40];
		unsigned char clut_waddr;
		char pad2;
		unsigned char clut_data;
		char pad3[0x3];
		unsigned char clut_raddr;
	}__iomem *cocci_id/* drivers/video/fbdev/macfb.c 87 */;
	struct {
		unsigned char addr;
		unsigned char pad1[15];
		unsigned char lut;
		unsigned char pad2[15];
		unsigned char status;
		unsigned char pad3[7];
		unsigned long vbl_addr;
		unsigned int status2;
	}__iomem *cocci_id/* drivers/video/fbdev/macfb.c 76 */;
	struct {
		unsigned long reset;
		unsigned long pad1[3];
		unsigned char pad2[3];
		unsigned char lut;
	}__iomem *cocci_id/* drivers/video/fbdev/macfb.c 69 */;
	unsigned char *cocci_id/* drivers/video/fbdev/macfb.c 669 */;
	struct {
		unsigned char addr;
		char pad1[3];
		unsigned char lut;
		char pad2[3];
		unsigned char cntl;
	}__iomem *cocci_id/* drivers/video/fbdev/macfb.c 61 */;
	struct {
		unsigned char addr;
		unsigned char lut;
	}__iomem *cocci_id/* drivers/video/fbdev/macfb.c 56 */;
	char *cocci_id/* drivers/video/fbdev/macfb.c 544 */;
	struct nubus_rsrc *cocci_id/* drivers/video/fbdev/macfb.c 543 */;
	int __init cocci_id/* drivers/video/fbdev/macfb.c 540 */;
	void __init cocci_id/* drivers/video/fbdev/macfb.c 526 */;
	void cocci_id/* drivers/video/fbdev/macfb.c 526 */;
	int (*cocci_id/* drivers/video/fbdev/macfb.c 52 */)(unsigned int regno,
							    unsigned int red,
							    unsigned int green,
							    unsigned int blue,
							    struct fb_info *info);
	struct fb_ops cocci_id/* drivers/video/fbdev/macfb.c 499 */;
	u32 *cocci_id/* drivers/video/fbdev/macfb.c 466 */;
	unsigned cocci_id/* drivers/video/fbdev/macfb.c 432 */;
	unsigned char cocci_id/* drivers/video/fbdev/macfb.c 377 */;
	unsigned long cocci_id/* drivers/video/fbdev/macfb.c 340 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/macfb.c 338 */;
	unsigned int cocci_id/* drivers/video/fbdev/macfb.c 336 */;
	int cocci_id/* drivers/video/fbdev/macfb.c 336 */;
	struct jet_cmap_regs *cocci_id/* drivers/video/fbdev/macfb.c 310 */;
	struct toby_cmap_regs *cocci_id/* drivers/video/fbdev/macfb.c 282 */;
	struct mdc_cmap_regs *cocci_id/* drivers/video/fbdev/macfb.c 259 */;
	u32 cocci_id/* drivers/video/fbdev/macfb.c 135 */[16];
	struct fb_info cocci_id/* drivers/video/fbdev/macfb.c 134 */;
	void *cocci_id/* drivers/video/fbdev/macfb.c 133 */;
	struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/macfb.c 128 */;
	struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/macfb.c 119 */;
	struct jet_cmap_regs {
		char pad1[0xe0e000];
		unsigned char addr;
		unsigned char lut;
	} cocci_id/* drivers/video/fbdev/macfb.c 111 */;
	struct toby_cmap_regs {
		char pad1[0x90018];
		unsigned char lut;
		char pad2[3];
		unsigned char addr;
	} cocci_id/* drivers/video/fbdev/macfb.c 104 */;
}
