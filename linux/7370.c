cocci_test_suite() {
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/tridentfb.c 990 */;
	unsigned char cocci_id/* drivers/video/fbdev/tridentfb.c 911 */;
	unsigned int cocci_id/* drivers/video/fbdev/tridentfb.c 909 */;
	unsigned long cocci_id/* drivers/video/fbdev/tridentfb.c 836 */;
	u8 cocci_id/* drivers/video/fbdev/tridentfb.c 826 */;
	const struct fb_copyarea *cocci_id/* drivers/video/fbdev/tridentfb.c 669 */;
	const struct fb_image *cocci_id/* drivers/video/fbdev/tridentfb.c 639 */;
	u32 *cocci_id/* drivers/video/fbdev/tridentfb.c 631 */;
	char *cocci_id/* drivers/video/fbdev/tridentfb.c 63 */;
	const struct fb_fillrect *cocci_id/* drivers/video/fbdev/tridentfb.c 617 */;
	struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/tridentfb.c 52 */;
	int cocci_id/* drivers/video/fbdev/tridentfb.c 357 */;
	u32 cocci_id/* drivers/video/fbdev/tridentfb.c 355 */;
	struct tridentfb_par *cocci_id/* drivers/video/fbdev/tridentfb.c 354 */;
	void cocci_id/* drivers/video/fbdev/tridentfb.c 354 */;
	unsigned cocci_id/* drivers/video/fbdev/tridentfb.c 342 */;
	const char *cocci_id/* drivers/video/fbdev/tridentfb.c 339 */;
	struct tridentfb_par {
		void __iomem *io_virt;
		u32 pseudo_pal[16];
		int chip_id;
		int flatpanel;
		void (*init_accel)(struct tridentfb_par *, int, int);
		void (*wait_engine)(struct tridentfb_par *);
		void (*fill_rect)(struct tridentfb_par *par, u32, u32, u32,
				  u32, u32, u32);
		void (*copy_rect)(struct tridentfb_par *par, u32, u32, u32,
				  u32, u32, u32);
		void (*image_blit)(struct tridentfb_par *par, const char *,
				   u32, u32, u32, u32, u32, u32);
		unsigned char eng_oper;
		bool ddc_registered;
		struct i2c_adapter ddc_adapter;
		struct i2c_algo_bit_data ddc_algo;
	} cocci_id/* drivers/video/fbdev/tridentfb.c 32 */;
	void *cocci_id/* drivers/video/fbdev/tridentfb.c 255 */;
	void __exit cocci_id/* drivers/video/fbdev/tridentfb.c 1823 */;
	int __init cocci_id/* drivers/video/fbdev/tridentfb.c 1811 */;
	u16 cocci_id/* drivers/video/fbdev/tridentfb.c 179 */;
	struct pci_driver cocci_id/* drivers/video/fbdev/tridentfb.c 1765 */;
	const struct pci_device_id cocci_id/* drivers/video/fbdev/tridentfb.c 1738 */[];
	const struct fb_videomode *cocci_id/* drivers/video/fbdev/tridentfb.c 1645 */;
	u8 *cocci_id/* drivers/video/fbdev/tridentfb.c 1636 */;
	struct tridentfb_par cocci_id/* drivers/video/fbdev/tridentfb.c 1474 */;
	bool cocci_id/* drivers/video/fbdev/tridentfb.c 1468 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/tridentfb.c 1464 */;
	const struct pci_device_id *cocci_id/* drivers/video/fbdev/tridentfb.c 1460 */;
	struct pci_dev *cocci_id/* drivers/video/fbdev/tridentfb.c 1459 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/tridentfb.c 1446 */;
}
