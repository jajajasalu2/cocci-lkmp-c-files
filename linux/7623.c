cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/video/fbdev/tmiofb.c 989 */;
	pm_message_t cocci_id/* drivers/video/fbdev/tmiofb.c 924 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/tmiofb.c 829 */;
	struct tmiofb_par cocci_id/* drivers/video/fbdev/tmiofb.c 694 */;
	struct resource *cocci_id/* drivers/video/fbdev/tmiofb.c 674 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/tmiofb.c 649 */;
	unsigned cocci_id/* drivers/video/fbdev/tmiofb.c 623 */;
	struct tmio_fb_data *cocci_id/* drivers/video/fbdev/tmiofb.c 572 */;
	struct fb_videomode *cocci_id/* drivers/video/fbdev/tmiofb.c 571 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/tmiofb.c 568 */;
	u32 cocci_id/* drivers/video/fbdev/tmiofb.c 526 */[16];
	u32 cocci_id/* drivers/video/fbdev/tmiofb.c 525 */;
	u32 __user *cocci_id/* drivers/video/fbdev/tmiofb.c 524 */;
	void __user *cocci_id/* drivers/video/fbdev/tmiofb.c 510 */;
	struct fb_vblank cocci_id/* drivers/video/fbdev/tmiofb.c 509 */;
	struct fb_vblank *cocci_id/* drivers/video/fbdev/tmiofb.c 483 */;
	const struct fb_fillrect cocci_id/* drivers/video/fbdev/tmiofb.c 471 */;
	const u32 cocci_id/* drivers/video/fbdev/tmiofb.c 451 */[];
	const struct fb_copyarea *cocci_id/* drivers/video/fbdev/tmiofb.c 449 */;
	const struct fb_fillrect *cocci_id/* drivers/video/fbdev/tmiofb.c 429 */;
	const u32 *cocci_id/* drivers/video/fbdev/tmiofb.c 386 */;
	int cocci_id/* drivers/video/fbdev/tmiofb.c 359 */;
	struct tmiofb_par *cocci_id/* drivers/video/fbdev/tmiofb.c 352 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/tmiofb.c 350 */;
	unsigned int cocci_id/* drivers/video/fbdev/tmiofb.c 350 */;
	int __must_check cocci_id/* drivers/video/fbdev/tmiofb.c 349 */;
	unsigned long cocci_id/* drivers/video/fbdev/tmiofb.c 267 */;
	const struct resource *cocci_id/* drivers/video/fbdev/tmiofb.c 265 */;
	const struct mfd_cell *cocci_id/* drivers/video/fbdev/tmiofb.c 262 */;
	irqreturn_t cocci_id/* drivers/video/fbdev/tmiofb.c 210 */;
	void *cocci_id/* drivers/video/fbdev/tmiofb.c 210 */;
	struct tmiofb_par {
		u32 pseudo_palette[16];
#ifdef CONFIG_FB_TMIO_ACCELL
		wait_queue_head_t wait_acc;
		bool use_polling;
#endif
		void __iomem *ccr;
		void __iomem *lcr;
	} cocci_id/* drivers/video/fbdev/tmiofb.c 188 */;
	char *cocci_id/* drivers/video/fbdev/tmiofb.c 186 */;
	void __exit cocci_id/* drivers/video/fbdev/tmiofb.c 1030 */;
	void cocci_id/* drivers/video/fbdev/tmiofb.c 1030 */;
	int __init cocci_id/* drivers/video/fbdev/tmiofb.c 1018 */;
	void __init cocci_id/* drivers/video/fbdev/tmiofb.c 1001 */;
}
