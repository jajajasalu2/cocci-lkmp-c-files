cocci_test_suite() {
	struct fb_info *cocci_id/* drivers/video/fbdev/sh7760fb.c 99 */;
	u_int cocci_id/* drivers/video/fbdev/sh7760fb.c 97 */;
	int cocci_id/* drivers/video/fbdev/sh7760fb.c 97 */;
	unsigned short cocci_id/* drivers/video/fbdev/sh7760fb.c 74 */;
	struct sh7760fb_platdata *cocci_id/* drivers/video/fbdev/sh7760fb.c 73 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/sh7760fb.c 575 */;
	struct completion *cocci_id/* drivers/video/fbdev/sh7760fb.c 49 */;
	irqreturn_t cocci_id/* drivers/video/fbdev/sh7760fb.c 47 */;
	struct sh7760fb_par cocci_id/* drivers/video/fbdev/sh7760fb.c 444 */;
	struct resource *cocci_id/* drivers/video/fbdev/sh7760fb.c 434 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/sh7760fb.c 431 */;
	unsigned long cocci_id/* drivers/video/fbdev/sh7760fb.c 377 */;
	void *cocci_id/* drivers/video/fbdev/sh7760fb.c 376 */;
	struct sh7760fb_par *cocci_id/* drivers/video/fbdev/sh7760fb.c 375 */;
	void cocci_id/* drivers/video/fbdev/sh7760fb.c 355 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/sh7760fb.c 344 */;
	struct sh7760fb_par {
		void __iomem *base;
		int irq;
		struct sh7760fb_platdata *pd;
		dma_addr_t fbdma;
		int rot;
		u32 pseudo_palette[16];
		struct platform_device *dev;
		struct resource *ioarea;
		struct completion vsync;
	} cocci_id/* drivers/video/fbdev/sh7760fb.c 30 */;
	struct fb_videomode *cocci_id/* drivers/video/fbdev/sh7760fb.c 199 */;
	struct fb_fix_screeninfo *cocci_id/* drivers/video/fbdev/sh7760fb.c 168 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/sh7760fb.c 165 */;
	u16 cocci_id/* drivers/video/fbdev/sh7760fb.c 122 */;
	int *cocci_id/* drivers/video/fbdev/sh7760fb.c 122 */;
	struct device *cocci_id/* drivers/video/fbdev/sh7760fb.c 121 */;
	u32 *cocci_id/* drivers/video/fbdev/sh7760fb.c 101 */;
}
