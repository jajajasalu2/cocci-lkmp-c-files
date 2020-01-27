cocci_test_suite() {
	struct par_info cocci_id/* drivers/video/fbdev/cyber2000fb.c 758 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/cyber2000fb.c 755 */;
	const u_long cocci_id/* drivers/video/fbdev/cyber2000fb.c 665 */;
	u_long cocci_id/* drivers/video/fbdev/cyber2000fb.c 664 */;
	struct par_info *cocci_id/* drivers/video/fbdev/cyber2000fb.c 661 */;
	struct cfb_info {
		struct fb_info fb;
		struct display_switch *dispsw;
		unsigned char __iomem *region;
		unsigned char __iomem *regs;
		u_int id;
		u_int irq;
		int func_use_count;
		u_long ref_ps;
		u_int divisors[4];
		struct {
			u8 red,green,blue;
		} palette[NR_PALETTE];
		u_char mem_ctl1;
		u_char mem_ctl2;
		u_char mclk_mult;
		u_char mclk_div;
		u_char ramdac_ctrl;
		u_char ramdac_powerdown;
		u32 pseudo_palette[16];
		spinlock_t reg_b0_lock;
#ifdef CONFIG_FB_CYBER2000_DDC
		bool ddc_registered;
		struct i2c_adapter ddc_adapter;
		struct i2c_algo_bit_data ddc_algo;
#endif
#ifdef CONFIG_FB_CYBER2000_I2C
		struct i2c_adapter i2c_adapter;
		struct i2c_algo_bit_data i2c_algo;
#endif
	} cocci_id/* drivers/video/fbdev/cyber2000fb.c 58 */;
	const u_char cocci_id/* drivers/video/fbdev/cyber2000fb.c 434 */[];
	struct par_info {
		u_char clock_mult;
		u_char clock_div;
		u_char extseqmisc;
		u_char co_pixfmt;
		u_char crtc_ofl;
		u_char crtc[19];
		u_int width;
		u_int pitch;
		u_int fetch;
		u_char ramdac;
	} cocci_id/* drivers/video/fbdev/cyber2000fb.c 414 */;
	u_int cocci_id/* drivers/video/fbdev/cyber2000fb.c 261 */;
	u32 cocci_id/* drivers/video/fbdev/cyber2000fb.c 261 */;
	struct fb_bitfield *cocci_id/* drivers/video/fbdev/cyber2000fb.c 261 */;
	const struct fb_image *cocci_id/* drivers/video/fbdev/cyber2000fb.c 232 */;
	unsigned long cocci_id/* drivers/video/fbdev/cyber2000fb.c 192 */;
	void __exit cocci_id/* drivers/video/fbdev/cyber2000fb.c 1884 */;
	const struct fb_copyarea *cocci_id/* drivers/video/fbdev/cyber2000fb.c 188 */;
	char *cocci_id/* drivers/video/fbdev/cyber2000fb.c 1869 */;
	int __init cocci_id/* drivers/video/fbdev/cyber2000fb.c 1864 */;
	struct pci_driver cocci_id/* drivers/video/fbdev/cyber2000fb.c 1848 */;
	struct pci_device_id cocci_id/* drivers/video/fbdev/cyber2000fb.c 1832 */[];
	pm_message_t cocci_id/* drivers/video/fbdev/cyber2000fb.c 1812 */;
	u32 *cocci_id/* drivers/video/fbdev/cyber2000fb.c 172 */;
	char cocci_id/* drivers/video/fbdev/cyber2000fb.c 1717 */[16];
	const struct pci_device_id *cocci_id/* drivers/video/fbdev/cyber2000fb.c 1714 */;
	struct pci_dev *cocci_id/* drivers/video/fbdev/cyber2000fb.c 1713 */;
	unsigned char __iomem *cocci_id/* drivers/video/fbdev/cyber2000fb.c 1662 */;
	const struct fb_fillrect *cocci_id/* drivers/video/fbdev/cyber2000fb.c 156 */;
	char cocci_id/* drivers/video/fbdev/cyber2000fb.c 1500 */[40];
	struct cfb_info *cocci_id/* drivers/video/fbdev/cyber2000fb.c 136 */;
	unsigned int cocci_id/* drivers/video/fbdev/cyber2000fb.c 136 */;
	char cocci_id/* drivers/video/fbdev/cyber2000fb.c 1350 */[];
	void cocci_id/* drivers/video/fbdev/cyber2000fb.c 135 */;
	const struct fb_videomode cocci_id/* drivers/video/fbdev/cyber2000fb.c 1335 */;
	void *cocci_id/* drivers/video/fbdev/cyber2000fb.c 1205 */;
	unsigned char cocci_id/* drivers/video/fbdev/cyber2000fb.c 1178 */;
	struct cyberpro_info *cocci_id/* drivers/video/fbdev/cyber2000fb.c 1123 */;
	int cocci_id/* drivers/video/fbdev/cyber2000fb.c 1123 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/cyber2000fb.c 1063 */;
	struct cfb_info cocci_id/* drivers/video/fbdev/cyber2000fb.c 1006 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/cyber2000fb.c 1004 */;
}
