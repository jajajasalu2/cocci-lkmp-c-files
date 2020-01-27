cocci_test_suite() {
	struct arkfb_info cocci_id/* drivers/video/fbdev/arkfb.c 956 */;
	struct resource cocci_id/* drivers/video/fbdev/arkfb.c 943 */;
	struct pci_bus_region cocci_id/* drivers/video/fbdev/arkfb.c 942 */;
	const struct pci_device_id *cocci_id/* drivers/video/fbdev/arkfb.c 940 */;
	struct pci_dev *cocci_id/* drivers/video/fbdev/arkfb.c 940 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/arkfb.c 920 */;
	const struct svga_timing_regs cocci_id/* drivers/video/fbdev/arkfb.c 86 */;
	u32 *cocci_id/* drivers/video/fbdev/arkfb.c 838 */;
	u_int cocci_id/* drivers/video/fbdev/arkfb.c 802 */;
	const struct vga_regset cocci_id/* drivers/video/fbdev/arkfb.c 70 */[];
	unsigned int cocci_id/* drivers/video/fbdev/arkfb.c 594 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/arkfb.c 565 */;
	struct vgastate cocci_id/* drivers/video/fbdev/arkfb.c 526 */;
	u32 cocci_id/* drivers/video/fbdev/arkfb.c 499 */;
	u8 cocci_id/* drivers/video/fbdev/arkfb.c 464 */;
	struct arkfb_info *cocci_id/* drivers/video/fbdev/arkfb.c 463 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/arkfb.c 462 */;
	u8 *cocci_id/* drivers/video/fbdev/arkfb.c 460 */;
	void *cocci_id/* drivers/video/fbdev/arkfb.c 460 */;
	int cocci_id/* drivers/video/fbdev/arkfb.c 460 */;
	void cocci_id/* drivers/video/fbdev/arkfb.c 460 */;
	unsigned short cocci_id/* drivers/video/fbdev/arkfb.c 458 */[4];
	struct ics5342_info cocci_id/* drivers/video/fbdev/arkfb.c 441 */;
	const struct svga_fb_format cocci_id/* drivers/video/fbdev/arkfb.c 44 */[];
	dac_write_regs_t cocci_id/* drivers/video/fbdev/arkfb.c 439 */;
	dac_read_regs_t cocci_id/* drivers/video/fbdev/arkfb.c 439 */;
	struct dac_ops cocci_id/* drivers/video/fbdev/arkfb.c 432 */;
	u8 cocci_id/* drivers/video/fbdev/arkfb.c 420 */[6];
	u16 cocci_id/* drivers/video/fbdev/arkfb.c 410 */;
	const struct svga_pll cocci_id/* drivers/video/fbdev/arkfb.c 398 */;
	const u8 cocci_id/* drivers/video/fbdev/arkfb.c 374 */[DAC_MAX];
	struct ics5342_info *cocci_id/* drivers/video/fbdev/arkfb.c 371 */;
	struct ics5342_info {
		struct dac_info dac;
		u8 mode;
	} cocci_id/* drivers/video/fbdev/arkfb.c 365 */;
	u8 cocci_id/* drivers/video/fbdev/arkfb.c 323 */[2];
	struct dac_info *cocci_id/* drivers/video/fbdev/arkfb.c 321 */;
	struct dac_info {
		struct dac_ops *dacops;
		dac_read_regs_t dac_read_regs;
		dac_write_regs_t dac_write_regs;
		void *data;
	} cocci_id/* drivers/video/fbdev/arkfb.c 312 */;
	void (*cocci_id/* drivers/video/fbdev/arkfb.c 309 */)(void *data,
							      u8 *code,
							      int count);
	struct dac_ops {
		int (*dac_get_mode)(struct dac_info *info);
		int (*dac_set_mode)(struct dac_info *info, int mode);
		int (*dac_get_freq)(struct dac_info *info, int channel);
		int (*dac_set_freq)(struct dac_info *info, int channel,
				    u32 freq);
		void (*dac_release)(struct dac_info *info);
	} cocci_id/* drivers/video/fbdev/arkfb.c 301 */;
	struct arkfb_info {
		int mclk_freq;
		int wc_cookie;
		struct dac_info *dac;
		struct vgastate state;
		struct mutex open_lock;
		unsigned int ref_count;
		u32 pseudo_palette[16];
	} cocci_id/* drivers/video/fbdev/arkfb.c 29 */;
	enum{DAC_PSEUDO8_8, DAC_RGB1555_8, DAC_RGB0565_8, DAC_RGB0888_8, DAC_RGB8888_8, DAC_PSEUDO8_16, DAC_RGB1555_16, DAC_RGB0565_16, DAC_RGB0888_16, DAC_RGB8888_16, DAC_MAX,} cocci_id/* drivers/video/fbdev/arkfb.c 286 */;
	const struct fb_fillrect *cocci_id/* drivers/video/fbdev/arkfb.c 272 */;
	u32 __iomem *cocci_id/* drivers/video/fbdev/arkfb.c 238 */;
	u8 __iomem *cocci_id/* drivers/video/fbdev/arkfb.c 237 */;
	const u8 *cocci_id/* drivers/video/fbdev/arkfb.c 236 */;
	const struct fb_image *cocci_id/* drivers/video/fbdev/arkfb.c 232 */;
	struct fb_tile_ops cocci_id/* drivers/video/fbdev/arkfb.c 154 */;
	struct fb_tilecursor *cocci_id/* drivers/video/fbdev/arkfb.c 147 */;
	struct fb_tilemap *cocci_id/* drivers/video/fbdev/arkfb.c 119 */;
	char *cocci_id/* drivers/video/fbdev/arkfb.c 1189 */;
	int __init cocci_id/* drivers/video/fbdev/arkfb.c 1185 */;
	void __exit cocci_id/* drivers/video/fbdev/arkfb.c 1177 */;
	struct pci_driver cocci_id/* drivers/video/fbdev/arkfb.c 1166 */;
	const struct pci_device_id cocci_id/* drivers/video/fbdev/arkfb.c 1158 */[];
	pm_message_t cocci_id/* drivers/video/fbdev/arkfb.c 1091 */;
	void __iomem *cocci_id/* drivers/video/fbdev/arkfb.c 1004 */;
	unsigned long cocci_id/* drivers/video/fbdev/arkfb.c 1004 */;
}
