cocci_test_suite() {
	const struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/aty/aty128fb.c 97 */;
	unsigned cocci_id/* drivers/video/fbdev/aty/aty128fb.c 962 */[];
	unsigned char __iomem *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 935 */;
	void __iomem *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 927 */;
	size_t cocci_id/* drivers/video/fbdev/aty/aty128fb.c 823 */;
	u16 cocci_id/* drivers/video/fbdev/aty/aty128fb.c 820 */;
	void cocci_id/* drivers/video/fbdev/aty/aty128fb.c 549 */;
	const struct aty128fb_par *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 544 */;
	u8 cocci_id/* drivers/video/fbdev/aty/aty128fb.c 543 */;
	unsigned int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 543 */;
	volatile unsigned int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 531 */;
	u32 cocci_id/* drivers/video/fbdev/aty/aty128fb.c 531 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/aty/aty128fb.c 512 */;
	void cocci_id/* drivers/video/fbdev/aty/aty128fb.c 500 */(struct fb_info *info,
								  int power);
	u32 cocci_id/* drivers/video/fbdev/aty/aty128fb.c 497 */(u32 depth);
	void cocci_id/* drivers/video/fbdev/aty/aty128fb.c 494 */(u16 entries,
								  struct aty128fb_par *par);
	void cocci_id/* drivers/video/fbdev/aty/aty128fb.c 493 */(const struct aty128fb_par *par);
	void cocci_id/* drivers/video/fbdev/aty/aty128fb.c 491 */(struct aty128fb_par *par);
	int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 488 */(struct fb_var_screeninfo *var,
								 struct aty128fb_par *par);
	int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 486 */(struct fb_var_screeninfo *var,
								 const struct aty128fb_par *par);
	int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 479 */(struct fb_info *info,
								 u_int cmd,
								 unsigned long arg);
	int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 478 */(int blank,
								 struct fb_info *fb);
	int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 476 */(struct fb_var_screeninfo *var,
								 struct fb_info *fb);
	int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 474 */(u_int regno,
								 u_int red,
								 u_int green,
								 u_int blue,
								 u_int transp,
								 struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 473 */(struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 471 */(struct fb_var_screeninfo *var,
								 struct fb_info *info);
	struct aty128fb_par {
		struct aty128_crtc crtc;
		struct aty128_pll pll;
		struct aty128_ddafifo fifo_reg;
		u32 accel_flags;
		struct aty128_constants constants;
		void __iomem *regbase;
		u32 vram_size;
		int chip_gen;
		const struct aty128_meminfo *mem;
		int wc_cookie;
		int blitter_may_be_busy;
		int fifo_slots;
		int crt_on,lcd_on;
		struct pci_dev *pdev;
		struct fb_info *next;
		int asleep;
		int lock_blank;
		u8 red[32];
		u8 green[64];
		u8 blue[32];
		u32 pseudo_palette[16];
	} cocci_id/* drivers/video/fbdev/aty/aty128fb.c 442 */;
	struct aty128_ddafifo {
		u32 dda_config;
		u32 dda_on_off;
	} cocci_id/* drivers/video/fbdev/aty/aty128fb.c 436 */;
	struct aty128_pll {
		u32 post_divider;
		u32 feedback_divider;
		u32 vclk;
	} cocci_id/* drivers/video/fbdev/aty/aty128fb.c 430 */;
	struct aty128_crtc {
		u32 gen_cntl;
		u32 h_total,h_sync_strt_wid;
		u32 v_total,v_sync_strt_wid;
		u32 pitch;
		u32 offset,offset_cntl;
		u32 xoffset,yoffset;
		u32 vxres,vyres;
		u32 depth,bpp;
	} cocci_id/* drivers/video/fbdev/aty/aty128fb.c 419 */;
	struct aty128_constants {
		u32 ref_clk;
		u32 ppll_min;
		u32 ppll_max;
		u32 ref_divider;
		u32 xclk;
		u32 fifo_width;
		u32 fifo_depth;
	} cocci_id/* drivers/video/fbdev/aty/aty128fb.c 409 */;
	bool cocci_id/* drivers/video/fbdev/aty/aty128fb.c 398 */;
	const struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/aty/aty128fb.c 379 */;
	const struct aty128_meminfo cocci_id/* drivers/video/fbdev/aty/aty128fb.c 365 */;
	struct aty128_meminfo {
		u8 ML;
		u8 MB;
		u8 Trcd;
		u8 Trp;
		u8 Twr;
		u8 CL;
		u8 Tr2w;
		u8 LoopLatency;
		u8 DspOn;
		u8 Rloop;
		const char *name;
	} cocci_id/* drivers/video/fbdev/aty/aty128fb.c 308 */;
	struct {
		u8 clock_chip_type;
		u8 struct_size;
		u8 accelerator_entry;
		u8 VGA_entry;
		u16 VGA_table_offset;
		u16 POST_table_offset;
		u16 XCLK;
		u16 MCLK;
		u8 num_PLL_blocks;
		u8 size_PLL_blocks;
		u16 PCLK_ref_freq;
		u16 PCLK_ref_divider;
		u32 PCLK_min_freq;
		u32 PCLK_max_freq;
		u16 MCLK_ref_freq;
		u16 MCLK_ref_divider;
		u32 MCLK_min_freq;
		u32 MCLK_max_freq;
		u16 XCLK_ref_freq;
		u16 XCLK_ref_divider;
		u32 XCLK_min_freq;
		u32 XCLK_max_freq;
	}__attribute__((packed)) cocci_id/* drivers/video/fbdev/aty/aty128fb.c 281 */;
	struct pci_driver cocci_id/* drivers/video/fbdev/aty/aty128fb.c 270 */;
	void __exit cocci_id/* drivers/video/fbdev/aty/aty128fb.c 2510 */;
	char *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 2500 */;
	struct pci_dev *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 2439 */;
	pm_message_t cocci_id/* drivers/video/fbdev/aty/aty128fb.c 2370 */;
	__u32 __user *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 2315 */;
	u_long cocci_id/* drivers/video/fbdev/aty/aty128fb.c 2305 */;
	u32 *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 2253 */;
	struct aty128fb_par cocci_id/* drivers/video/fbdev/aty/aty128fb.c 2087 */;
	unsigned long cocci_id/* drivers/video/fbdev/aty/aty128fb.c 2056 */;
	char cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1910 */[50];
	struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1909 */;
	const struct pci_device_id *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1905 */;
	void *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1893 */;
	struct backlight_device *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1881 */;
	char cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1840 */[12];
	struct backlight_properties cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1837 */;
	const struct backlight_ops cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1823 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1744 */;
	struct aty128fb_par *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1741 */;
	int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1741 */;
	const struct pci_device_id cocci_id/* drivers/video/fbdev/aty/aty128fb.c 170 */[];
	int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 167 */(struct pci_dev *pdev);
	u_int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1659 */;
	int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 165 */(struct pci_dev *pdev,
								 pm_message_t state);
	void cocci_id/* drivers/video/fbdev/aty/aty128fb.c 164 */(struct pci_dev *pdev);
	int cocci_id/* drivers/video/fbdev/aty/aty128fb.c 162 */(struct pci_dev *pdev,
								 const struct pci_device_id *ent);
	struct aty128_ddafifo cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1565 */;
	struct aty128_pll cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1564 */;
	struct aty128_crtc cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1563 */;
	char *constcocci_id/* drivers/video/fbdev/aty/aty128fb.c 148 */[];
	s32 cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1438 */;
	const struct aty128_meminfo *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1434 */;
	const struct aty128_pll *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1430 */;
	struct aty128_ddafifo *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1429 */;
	const struct aty128_ddafifo *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1421 */;
	const struct aty128_constants cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1369 */;
	enum{rage_128, rage_128_pci, rage_128_pro, rage_128_pro_pci, rage_M3, rage_M3_pci, rage_M4, rage_128_ultra,} cocci_id/* drivers/video/fbdev/aty/aty128fb.c 136 */;
	unsigned char cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1331 */[];
	struct aty128_pll *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1326 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1231 */;
	const struct aty128_crtc *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1230 */;
	const struct fb_videomode cocci_id/* drivers/video/fbdev/aty/aty128fb.c 120 */;
	u8 cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1048 */[7];
	struct aty128_crtc *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1040 */;
	const struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/aty/aty128fb.c 1039 */;
}
