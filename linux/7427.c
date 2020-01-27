cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/video/fbdev/ep93xx-fb.c 592 */;
	struct ep93xx_fbi cocci_id/* drivers/video/fbdev/ep93xx-fb.c 473 */;
	char *cocci_id/* drivers/video/fbdev/ep93xx-fb.c 467 */;
	struct resource *cocci_id/* drivers/video/fbdev/ep93xx-fb.c 466 */;
	struct ep93xxfb_mach_info *cocci_id/* drivers/video/fbdev/ep93xx-fb.c 463 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/ep93xx-fb.c 461 */;
	void cocci_id/* drivers/video/fbdev/ep93xx-fb.c 454 */;
	unsigned int cocci_id/* drivers/video/fbdev/ep93xx-fb.c 421 */;
	dma_addr_t cocci_id/* drivers/video/fbdev/ep93xx-fb.c 420 */;
	char __iomem *cocci_id/* drivers/video/fbdev/ep93xx-fb.c 419 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/ep93xx-fb.c 417 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/ep93xx-fb.c 405 */;
	unsigned int *cocci_id/* drivers/video/fbdev/ep93xx-fb.c 354 */;
	struct ep93xx_fbi *cocci_id/* drivers/video/fbdev/ep93xx-fb.c 324 */;
	struct vm_area_struct *cocci_id/* drivers/video/fbdev/ep93xx-fb.c 310 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/ep93xx-fb.c 290 */;
	int cocci_id/* drivers/video/fbdev/ep93xx-fb.c 117 */;
	struct ep93xx_fbi {
		struct ep93xxfb_mach_info *mach_info;
		struct clk *clk;
		struct resource *res;
		void __iomem *mmio_base;
		unsigned int pseudo_palette[256];
	} cocci_id/* drivers/video/fbdev/ep93xx-fb.c 109 */;
}
