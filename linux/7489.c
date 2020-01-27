cocci_test_suite() {
	const struct fb_videomode cocci_id/* drivers/video/fbdev/carminefb.c 89 */[];
	struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/carminefb.c 82 */;
	void __exit cocci_id/* drivers/video/fbdev/carminefb.c 781 */;
	int __init cocci_id/* drivers/video/fbdev/carminefb.c 769 */;
	struct pci_driver cocci_id/* drivers/video/fbdev/carminefb.c 762 */;
	struct pci_device_id cocci_id/* drivers/video/fbdev/carminefb.c 754 */[];
	struct carmine_fb {
		void __iomem *display_reg;
		void __iomem *screen_base;
		u32 smem_offset;
		u32 cur_mode;
		u32 new_mode;
		struct carmine_resolution *res;
		u32 pseudo_palette[16];
	} cocci_id/* drivers/video/fbdev/carminefb.c 72 */;
	struct carmine_hw *cocci_id/* drivers/video/fbdev/carminefb.c 612 */;
	const struct pci_device_id *cocci_id/* drivers/video/fbdev/carminefb.c 610 */;
	struct pci_dev *cocci_id/* drivers/video/fbdev/carminefb.c 610 */;
	struct carmine_resolution {
		u32 htp;
		u32 hsp;
		u32 hsw;
		u32 hdp;
		u32 vtr;
		u32 vsp;
		u32 vsw;
		u32 vdp;
		u32 disp_mode;
	} cocci_id/* drivers/video/fbdev/carminefb.c 60 */;
	struct carmine_fb *cocci_id/* drivers/video/fbdev/carminefb.c 547 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/carminefb.c 546 */;
	struct fb_info **cocci_id/* drivers/video/fbdev/carminefb.c 543 */;
	struct device *cocci_id/* drivers/video/fbdev/carminefb.c 542 */;
	void __iomem *cocci_id/* drivers/video/fbdev/carminefb.c 541 */;
	int cocci_id/* drivers/video/fbdev/carminefb.c 541 */;
	struct carmine_hw {
		void __iomem *v_regs;
		void __iomem *screen_mem;
		struct fb_info *fb[MAX_DISPLAY];
	} cocci_id/* drivers/video/fbdev/carminefb.c 54 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/carminefb.c 530 */;
	char *cocci_id/* drivers/video/fbdev/carminefb.c 40 */;
	unsigned int cocci_id/* drivers/video/fbdev/carminefb.c 36 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/carminefb.c 179 */;
	__be32 *cocci_id/* drivers/video/fbdev/carminefb.c 174 */;
	unsigned cocci_id/* drivers/video/fbdev/carminefb.c 163 */;
	const struct carmine_hw *cocci_id/* drivers/video/fbdev/carminefb.c 157 */;
	u32 cocci_id/* drivers/video/fbdev/carminefb.c 145 */;
	const struct carmine_fb *cocci_id/* drivers/video/fbdev/carminefb.c 145 */;
	void cocci_id/* drivers/video/fbdev/carminefb.c 139 */;
	const struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/carminefb.c 128 */;
	struct carmine_resolution cocci_id/* drivers/video/fbdev/carminefb.c 101 */[];
}
