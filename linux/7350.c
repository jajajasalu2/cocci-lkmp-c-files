cocci_test_suite() {
	enum cirrus_board{BT_NONE=0, BT_SD64, BT_PICCOLO, BT_PICASSO, BT_SPECTRUM, BT_PICASSO4, BT_ALPINE, BT_GD5480, BT_LAGUNA, BT_LAGUNAB,} cocci_id/* drivers/video/fbdev/cirrusfb.c 89 */;
	unsigned short cocci_id/* drivers/video/fbdev/cirrusfb.c 868 */;
	const struct cirrusfb_board_info_rec *cocci_id/* drivers/video/fbdev/cirrusfb.c 665 */;
	const struct fb_info *cocci_id/* drivers/video/fbdev/cirrusfb.c 632 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/cirrusfb.c 530 */;
	unsigned cocci_id/* drivers/video/fbdev/cirrusfb.c 479 */;
	const struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/cirrusfb.c 473 */;
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 412 */(struct fb_info *info,
							      caddr_t regbase,
							      enum cirrusfb_dbg_reg_class reg_class,
							      ...);
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 411 */(struct fb_info *info,
							      caddr_t regbase);
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 408 */(long freq,
							      int *nom,
							      int *den,
							      int *div);
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 402 */(u8 __iomem *regbase,
							      int bits_per_pixel,
							      u_short x,
							      u_short y,
							      u_short width,
							      u_short height,
							      u32 fg_color,
							      u32 bg_color,
							      u_short line_length,
							      u_char blitmode);
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 397 */(u8 __iomem *regbase,
							      int bits_per_pixel,
							      u_short curx,
							      u_short cury,
							      u_short destx,
							      u_short desty,
							      u_short width,
							      u_short height,
							      u_short line_length);
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 396 */(u8 __iomem *regbase);
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 389 */(struct cirrusfb_info *cinfo,
							      unsigned char regnum,
							      unsigned char red,
							      unsigned char green,
							      unsigned char blue);
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 387 */(struct cirrusfb_info *cinfo,
							      unsigned char val);
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 386 */(const struct cirrusfb_info *cinfo,
							      unsigned char val);
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 385 */(const struct cirrusfb_info *cinfo);
	unsigned char cocci_id/* drivers/video/fbdev/cirrusfb.c 384 */(const struct cirrusfb_info *cinfo,
								       int regnum);
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 382 */(const struct cirrusfb_info *cinfo,
							      int regnum,
							      unsigned char val);
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 381 */(struct cirrusfb_info *cinfo,
							      int on);
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 380 */(struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/cirrusfb.c 376 */(struct fb_var_screeninfo *var,
							     struct fb_info *info);
	bool cocci_id/* drivers/video/fbdev/cirrusfb.c 369 */;
	struct cirrusfb_info {
		u8 __iomem *regbase;
		u8 __iomem *laguna_mmio;
		enum cirrus_board btype;
		unsigned char SFR;
		int multiplexing;
		int doubleVCLK;
		int blank_mode;
		u32 pseudo_palette[16];
		void (*unmap)(struct fb_info *info);
	} cocci_id/* drivers/video/fbdev/cirrusfb.c 355 */;
	enum cirrusfb_dbg_reg_class{CRT, SEQ,} cocci_id/* drivers/video/fbdev/cirrusfb.c 348 */;
	const struct zorro_device_id cocci_id/* drivers/video/fbdev/cirrusfb.c 322 */[];
	const struct zorrocl cocci_id/* drivers/video/fbdev/cirrusfb.c 297 */;
	char *cocci_id/* drivers/video/fbdev/cirrusfb.c 2821 */;
	va_list cocci_id/* drivers/video/fbdev/cirrusfb.c 2818 */;
	enum cirrusfb_dbg_reg_class cocci_id/* drivers/video/fbdev/cirrusfb.c 2816 */;
	caddr_t cocci_id/* drivers/video/fbdev/cirrusfb.c 2815 */;
	struct zorrocl {
		enum cirrus_board type;
		u32 regoffset;
		u32 ramsize;
		u32 ramoffset;
		zorro_id ramid;
		zorro_id ramid2;
	} cocci_id/* drivers/video/fbdev/cirrusfb.c 277 */;
	int *cocci_id/* drivers/video/fbdev/cirrusfb.c 2738 */;
	long cocci_id/* drivers/video/fbdev/cirrusfb.c 2738 */;
	u32 cocci_id/* drivers/video/fbdev/cirrusfb.c 2701 */;
	u_char cocci_id/* drivers/video/fbdev/cirrusfb.c 2664 */;
	u_long cocci_id/* drivers/video/fbdev/cirrusfb.c 2663 */;
	u_short cocci_id/* drivers/video/fbdev/cirrusfb.c 2656 */;
	u8 __iomem *cocci_id/* drivers/video/fbdev/cirrusfb.c 2655 */;
	struct pci_device_id cocci_id/* drivers/video/fbdev/cirrusfb.c 258 */[];
	unsigned int cocci_id/* drivers/video/fbdev/cirrusfb.c 2531 */;
	struct cirrusfb_info *cocci_id/* drivers/video/fbdev/cirrusfb.c 2528 */;
	const struct cirrusfb_info *cocci_id/* drivers/video/fbdev/cirrusfb.c 2440 */;
	void cocci_id/* drivers/video/fbdev/cirrusfb.c 2440 */;
	unsigned long cocci_id/* drivers/video/fbdev/cirrusfb.c 2426 */;
	unsigned char cocci_id/* drivers/video/fbdev/cirrusfb.c 2424 */;
	int cocci_id/* drivers/video/fbdev/cirrusfb.c 2424 */;
	void __exit cocci_id/* drivers/video/fbdev/cirrusfb.c 2378 */;
	int __init cocci_id/* drivers/video/fbdev/cirrusfb.c 2357 */;
	struct zorro_driver cocci_id/* drivers/video/fbdev/cirrusfb.c 2318 */;
	const struct zorrocl *cocci_id/* drivers/video/fbdev/cirrusfb.c 2202 */;
	const struct zorro_device_id *cocci_id/* drivers/video/fbdev/cirrusfb.c 2198 */;
	struct zorro_dev *cocci_id/* drivers/video/fbdev/cirrusfb.c 2197 */;
	struct pci_driver cocci_id/* drivers/video/fbdev/cirrusfb.c 2182 */;
	unsigned long long cocci_id/* drivers/video/fbdev/cirrusfb.c 2105 */;
	enum cirrus_board cocci_id/* drivers/video/fbdev/cirrusfb.c 2101 */;
	struct cirrusfb_info cocci_id/* drivers/video/fbdev/cirrusfb.c 2094 */;
	const struct pci_device_id *cocci_id/* drivers/video/fbdev/cirrusfb.c 2081 */;
	struct pci_dev *cocci_id/* drivers/video/fbdev/cirrusfb.c 2080 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/cirrusfb.c 1959 */;
	unsigned long *cocci_id/* drivers/video/fbdev/cirrusfb.c 1904 */;
	const struct pci_dev *cocci_id/* drivers/video/fbdev/cirrusfb.c 1903 */;
	u32 *cocci_id/* drivers/video/fbdev/cirrusfb.c 1833 */;
	const struct fb_image *cocci_id/* drivers/video/fbdev/cirrusfb.c 1811 */;
	struct fb_copyarea cocci_id/* drivers/video/fbdev/cirrusfb.c 1772 */;
	const struct fb_copyarea *cocci_id/* drivers/video/fbdev/cirrusfb.c 1770 */;
	struct fb_fillrect cocci_id/* drivers/video/fbdev/cirrusfb.c 1733 */;
	const struct fb_fillrect *cocci_id/* drivers/video/fbdev/cirrusfb.c 1731 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/cirrusfb.c 1377 */;
	const struct cirrusfb_board_info_rec {
		char *name;
		long maxclock[5];
		bool init_sr07:1;
		bool init_sr1f:1;
		bool scrn_start_bit19:1;
		unsigned char sr07;
		unsigned char sr07_1bpp;
		unsigned char sr07_1bpp_mux;
		unsigned char sr07_8bpp;
		unsigned char sr07_8bpp_mux;
		unsigned char sr1f;
	} cocci_id/* drivers/video/fbdev/cirrusfb.c 111 */[];
}
