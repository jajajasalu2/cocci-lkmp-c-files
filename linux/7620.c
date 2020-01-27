cocci_test_suite() {
	struct grvga_par *cocci_id/* drivers/video/fbdev/grvga.c 81 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/grvga.c 79 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/grvga.c 78 */;
	int cocci_id/* drivers/video/fbdev/grvga.c 78 */;
	const struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/grvga.c 68 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/grvga.c 542 */;
	struct of_device_id cocci_id/* drivers/video/fbdev/grvga.c 531 */[];
	const struct fb_videomode cocci_id/* drivers/video/fbdev/grvga.c 48 */[];
	char __iomem *cocci_id/* drivers/video/fbdev/grvga.c 468 */;
	unsigned long *cocci_id/* drivers/video/fbdev/grvga.c 466 */;
	void *cocci_id/* drivers/video/fbdev/grvga.c 452 */;
	struct grvga_par {
		struct grvga_regs *regs;
		u32 color_palette[16];
		int clk_sel;
		int fb_alloced;
	} cocci_id/* drivers/video/fbdev/grvga.c 40 */;
	struct grvga_par cocci_id/* drivers/video/fbdev/grvga.c 338 */;
	unsigned long cocci_id/* drivers/video/fbdev/grvga.c 331 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/grvga.c 327 */;
	struct grvga_regs {
		u32 status;
		u32 video_length;
		u32 front_porch;
		u32 sync_length;
		u32 line_length;
		u32 fb_pos;
		u32 clk_vector[4];
		u32 clut;
	} cocci_id/* drivers/video/fbdev/grvga.c 29 */;
	char *cocci_id/* drivers/video/fbdev/grvga.c 265 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/grvga.c 254 */;
	u32 cocci_id/* drivers/video/fbdev/grvga.c 239 */;
	struct fb_fix_screeninfo *cocci_id/* drivers/video/fbdev/grvga.c 238 */;
	u32 *cocci_id/* drivers/video/fbdev/grvga.c 229 */;
	unsigned cocci_id/* drivers/video/fbdev/grvga.c 188 */;
	struct fb_bitfield cocci_id/* drivers/video/fbdev/grvga.c 119 */;
}
