cocci_test_suite() {
	int cocci_id/* drivers/video/fbdev/valkyriefb.c 98 */(char *);
	int cocci_id/* drivers/video/fbdev/valkyriefb.c 97 */(void);
	struct fb_info_valkyrie {
		struct fb_info info;
		struct fb_par_valkyrie par;
		struct cmap_regs __iomem *cmap_regs;
		unsigned long cmap_regs_phys;
		struct valkyrie_regs __iomem *valkyrie_regs;
		unsigned long valkyrie_regs_phys;
		__u8 __iomem *frame_buffer;
		unsigned long frame_buffer_phys;
		int sense;
		unsigned long total_vram;
		u32 pseudo_palette[16];
	} cocci_id/* drivers/video/fbdev/valkyriefb.c 76 */;
	struct fb_par_valkyrie {
		int vmode,cmode;
		int xres,yres;
		int vxres,vyres;
		struct valkyrie_regvals *init;
	} cocci_id/* drivers/video/fbdev/valkyriefb.c 69 */;
	int cocci_id/* drivers/video/fbdev/valkyriefb.c 67 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/valkyriefb.c 538 */;
	int __init cocci_id/* drivers/video/fbdev/valkyriefb.c 538 */;
	struct fb_par_valkyrie *cocci_id/* drivers/video/fbdev/valkyriefb.c 528 */;
	struct valkyrie_regs cocci_id/* drivers/video/fbdev/valkyriefb.c 515 */;
	struct fb_fix_screeninfo *cocci_id/* drivers/video/fbdev/valkyriefb.c 510 */;
	struct fb_info_valkyrie cocci_id/* drivers/video/fbdev/valkyriefb.c 462 */;
	struct valkyrie_regvals *cocci_id/* drivers/video/fbdev/valkyriefb.c 460 */;
	const struct fb_info *cocci_id/* drivers/video/fbdev/valkyriefb.c 457 */;
	struct fb_info_valkyrie *cocci_id/* drivers/video/fbdev/valkyriefb.c 406 */;
	struct resource cocci_id/* drivers/video/fbdev/valkyriefb.c 331 */;
	struct device_node *cocci_id/* drivers/video/fbdev/valkyriefb.c 330 */;
	char *cocci_id/* drivers/video/fbdev/valkyriefb.c 311 */;
	unsigned long cocci_id/* drivers/video/fbdev/valkyriefb.c 309 */;
	void __init cocci_id/* drivers/video/fbdev/valkyriefb.c 273 */;
	struct adb_request cocci_id/* drivers/video/fbdev/valkyriefb.c 261 */;
	unsigned char *cocci_id/* drivers/video/fbdev/valkyriefb.c 258 */;
	void cocci_id/* drivers/video/fbdev/valkyriefb.c 258 */;
	u32 *cocci_id/* drivers/video/fbdev/valkyriefb.c 242 */;
	volatile struct cmap_regs __iomem *cocci_id/* drivers/video/fbdev/valkyriefb.c 224 */;
	u_int cocci_id/* drivers/video/fbdev/valkyriefb.c 219 */;
	struct fb_par_valkyrie cocci_id/* drivers/video/fbdev/valkyriefb.c 169 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/valkyriefb.c 160 */;
	volatile struct valkyrie_regs __iomem *cocci_id/* drivers/video/fbdev/valkyriefb.c 132 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/valkyriefb.c 116 */;
	void cocci_id/* drivers/video/fbdev/valkyriefb.c 114 */(struct fb_fix_screeninfo *fix,
								struct fb_info_valkyrie *p);
	void cocci_id/* drivers/video/fbdev/valkyriefb.c 113 */(struct fb_par_valkyrie *par,
								struct fb_fix_screeninfo *fix);
	int cocci_id/* drivers/video/fbdev/valkyriefb.c 112 */(struct fb_info *info,
							       struct fb_info_valkyrie *p);
	int cocci_id/* drivers/video/fbdev/valkyriefb.c 109 */(struct fb_var_screeninfo *var,
							       struct fb_par_valkyrie *par,
							       const struct fb_info *fb_info);
	void cocci_id/* drivers/video/fbdev/valkyriefb.c 108 */(unsigned char *params);
	int cocci_id/* drivers/video/fbdev/valkyriefb.c 107 */(struct fb_info_valkyrie *p);
	int cocci_id/* drivers/video/fbdev/valkyriefb.c 105 */(int blank_mode,
							       struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/valkyriefb.c 103 */(u_int regno,
							       u_int red,
							       u_int green,
							       u_int blue,
							       u_int transp,
							       struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/valkyriefb.c 102 */(struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/valkyriefb.c 100 */(struct fb_var_screeninfo *var,
							       struct fb_info *info);
}
