cocci_test_suite() {
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/sunxvr1000.c 73 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/sunxvr1000.c 62 */;
	u32 *cocci_id/* drivers/video/fbdev/sunxvr1000.c 56 */;
	u32 cocci_id/* drivers/video/fbdev/sunxvr1000.c 48 */;
	unsigned cocci_id/* drivers/video/fbdev/sunxvr1000.c 44 */;
	struct gfb_info *cocci_id/* drivers/video/fbdev/sunxvr1000.c 29 */;
	int cocci_id/* drivers/video/fbdev/sunxvr1000.c 29 */;
	int __init cocci_id/* drivers/video/fbdev/sunxvr1000.c 192 */;
	void cocci_id/* drivers/video/fbdev/sunxvr1000.c 192 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/sunxvr1000.c 183 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/sunxvr1000.c 176 */[];
	struct gfb_info {
		struct fb_info *info;
		char __iomem *fb_base;
		unsigned long fb_base_phys;
		struct device_node *of_node;
		unsigned int width;
		unsigned int height;
		unsigned int depth;
		unsigned int fb_size;
		u32 pseudo_palette[16];
	} cocci_id/* drivers/video/fbdev/sunxvr1000.c 13 */;
	struct gfb_info cocci_id/* drivers/video/fbdev/sunxvr1000.c 122 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/sunxvr1000.c 118 */;
	struct device_node *cocci_id/* drivers/video/fbdev/sunxvr1000.c 117 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/sunxvr1000.c 115 */;
}
