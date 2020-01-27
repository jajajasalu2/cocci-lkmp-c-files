cocci_test_suite() {
	struct xilinxfb_platform_data {
		u32 rotate_screen;
		u32 screen_height_mm;
		u32 screen_width_mm;
		u32 xres,yres;
		u32 xvirt,yvirt;
		u32 fb_phys;
	} cocci_id/* drivers/video/fbdev/xilinxfb.c 86 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/xilinxfb.c 495 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/xilinxfb.c 485 */[];
	struct xilinxfb_platform_data cocci_id/* drivers/video/fbdev/xilinxfb.c 415 */;
	const u32 *cocci_id/* drivers/video/fbdev/xilinxfb.c 413 */;
	unsigned long long cocci_id/* drivers/video/fbdev/xilinxfb.c 357 */;
	void __iomem *cocci_id/* drivers/video/fbdev/xilinxfb.c 299 */;
	struct resource *cocci_id/* drivers/video/fbdev/xilinxfb.c 272 */;
	struct device *cocci_id/* drivers/video/fbdev/xilinxfb.c 268 */;
	struct xilinxfb_platform_data *cocci_id/* drivers/video/fbdev/xilinxfb.c 265 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/xilinxfb.c 263 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/xilinxfb.c 250 */;
	struct xilinxfb_drvdata *cocci_id/* drivers/video/fbdev/xilinxfb.c 230 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/xilinxfb.c 228 */;
	int cocci_id/* drivers/video/fbdev/xilinxfb.c 227 */;
	u32 *cocci_id/* drivers/video/fbdev/xilinxfb.c 201 */;
	unsigned int cocci_id/* drivers/video/fbdev/xilinxfb.c 198 */;
	u32 cocci_id/* drivers/video/fbdev/xilinxfb.c 182 */;
	void cocci_id/* drivers/video/fbdev/xilinxfb.c 167 */;
	struct xilinxfb_drvdata cocci_id/* drivers/video/fbdev/xilinxfb.c 160 */;
	struct xilinxfb_drvdata {
		struct fb_info info;
		phys_addr_t regs_phys;
		void __iomem *regs;
#ifdef CONFIG_PPC_DCR
		dcr_host_t dcr_host;
		unsigned int dcr_len;
#endif
		void *fb_virt;
		dma_addr_t fb_phys;
		int fb_alloced;
		u8 flags;
		u32 reg_ctrl_default;
		u32 pseudo_palette[PALETTE_ENTRIES_NO];
	} cocci_id/* drivers/video/fbdev/xilinxfb.c 134 */;
	const struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/xilinxfb.c 120 */;
	const struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/xilinxfb.c 113 */;
	const struct xilinxfb_platform_data cocci_id/* drivers/video/fbdev/xilinxfb.c 103 */;
}
