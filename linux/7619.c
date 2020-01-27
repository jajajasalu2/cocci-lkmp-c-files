cocci_test_suite() {
	struct fb_ops cocci_id/* drivers/video/fbdev/platinumfb.c 99 */;
	int cocci_id/* drivers/video/fbdev/platinumfb.c 91 */(struct fb_var_screeninfo *var,
							      struct fb_info_platinum *pinfo,
							      int check_only);
	void cocci_id/* drivers/video/fbdev/platinumfb.c 90 */(struct fb_info_platinum *pinfo);
	int cocci_id/* drivers/video/fbdev/platinumfb.c 88 */(struct fb_info_platinum *pinfo);
	int cocci_id/* drivers/video/fbdev/platinumfb.c 87 */(int video_mode,
							      int color_mode);
	int cocci_id/* drivers/video/fbdev/platinumfb.c 81 */(struct fb_var_screeninfo *var,
							      struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/platinumfb.c 80 */(struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/platinumfb.c 79 */(int blank_mode,
							      struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/platinumfb.c 77 */(u_int regno,
							      u_int red,
							      u_int green,
							      u_int blue,
							      u_int transp,
							      struct fb_info *info);
	void __exit cocci_id/* drivers/video/fbdev/platinumfb.c 693 */;
	char *cocci_id/* drivers/video/fbdev/platinumfb.c 682 */;
	int __init cocci_id/* drivers/video/fbdev/platinumfb.c 679 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/platinumfb.c 669 */;
	struct of_device_id cocci_id/* drivers/video/fbdev/platinumfb.c 661 */[];
	unsigned int cocci_id/* drivers/video/fbdev/platinumfb.c 604 */;
	unsigned long long cocci_id/* drivers/video/fbdev/platinumfb.c 553 */;
	volatile __u8 *cocci_id/* drivers/video/fbdev/platinumfb.c 535 */;
	struct device_node *cocci_id/* drivers/video/fbdev/platinumfb.c 532 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/platinumfb.c 530 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/platinumfb.c 439 */;
	struct fb_info_platinum {
		struct fb_info *info;
		int vmode,cmode;
		int xres,yres;
		int vxres,vyres;
		int xoffset,yoffset;
		struct {
			__u8 red,green,blue;
		} palette[256];
		u32 pseudo_palette[16];
		volatile struct cmap_regs __iomem *cmap_regs;
		unsigned long cmap_regs_phys;
		volatile struct platinum_regs __iomem *platinum_regs;
		unsigned long platinum_regs_phys;
		__u8 __iomem *frame_buffer;
		volatile __u8 __iomem *base_frame_buffer;
		unsigned long frame_buffer_phys;
		unsigned long total_vram;
		int clktype;
		int dactype;
		struct resource rsrc_fb,rsrc_reg;
	} cocci_id/* drivers/video/fbdev/platinumfb.c 43 */;
	int cocci_id/* drivers/video/fbdev/platinumfb.c 41 */;
	struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/platinumfb.c 343 */;
	struct fb_info_platinum *cocci_id/* drivers/video/fbdev/platinumfb.c 342 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/platinumfb.c 340 */;
	void cocci_id/* drivers/video/fbdev/platinumfb.c 314 */;
	unsigned cocci_id/* drivers/video/fbdev/platinumfb.c 287 */;
	struct platinum_regvals *cocci_id/* drivers/video/fbdev/platinumfb.c 269 */;
	volatile struct cmap_regs __iomem *cocci_id/* drivers/video/fbdev/platinumfb.c 268 */;
	volatile struct platinum_regs __iomem *cocci_id/* drivers/video/fbdev/platinumfb.c 267 */;
	u32 *cocci_id/* drivers/video/fbdev/platinumfb.c 206 */;
	u_int cocci_id/* drivers/video/fbdev/platinumfb.c 182 */;
}
