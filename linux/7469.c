cocci_test_suite() {
	char __iomem *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 959 */;
	struct mbxfb_info cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 901 */;
	struct mbxfb_platform_data *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 891 */;
	struct mbxfb_info *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 890 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 886 */;
	pm_message_t cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 848 */;
	const struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 82 */;
	u32 cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 800 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 721 */;
	void cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 721 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 674 */;
	void __user *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 614 */;
	__u32 cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 609 */;
	struct mbxfb_reg cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 607 */;
	struct mbxfb_alphaCtl cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 606 */;
	struct mbxfb_planeorder cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 605 */;
	struct mbxfb_overlaySetup cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 604 */;
	unsigned long cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 602 */;
	struct mbxfb_info {
		struct device *dev;
		struct resource *fb_res;
		struct resource *fb_req;
		struct resource *reg_res;
		struct resource *reg_req;
		void __iomem *fb_virt_addr;
		unsigned long fb_phys_addr;
		void __iomem *reg_virt_addr;
		unsigned long reg_phys_addr;
		int (*platform_probe)(struct fb_info *fb);
		int (*platform_remove)(struct fb_info *fb);
		u32 pseudo_palette[MAX_PALETTES];
#ifdef CONFIG_FB_MBX_DEBUG
		struct dentry *debugfs_dir;
#endif
	} cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 57 */;
	struct mbxfb_alphaCtl *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 512 */;
	struct mbxfb_planeorder *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 470 */;
	void __iomem *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 36 */;
	struct mbxfb_overlaySetup *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 334 */;
	int cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 315 */;
	ushort cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 237 */;
	struct pixclock_div cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 184 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 182 */;
	u32 *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 171 */;
	u_int cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 165 */;
	u8 cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 124 */;
	struct pixclock_div *cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 122 */;
	unsigned int cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 121 */;
	struct pixclock_div {
		u8 m;
		u8 n;
		u8 p;
	} cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 115 */;
	const struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 105 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/mbx/mbxfb.c 1039 */;
}
