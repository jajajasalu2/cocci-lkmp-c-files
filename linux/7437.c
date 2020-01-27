cocci_test_suite() {
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/sunxvr2500.c 77 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/sunxvr2500.c 66 */;
	u32 *cocci_id/* drivers/video/fbdev/sunxvr2500.c 60 */;
	u32 cocci_id/* drivers/video/fbdev/sunxvr2500.c 52 */;
	unsigned cocci_id/* drivers/video/fbdev/sunxvr2500.c 48 */;
	struct s3d_info *cocci_id/* drivers/video/fbdev/sunxvr2500.c 33 */;
	int cocci_id/* drivers/video/fbdev/sunxvr2500.c 33 */;
	int __init cocci_id/* drivers/video/fbdev/sunxvr2500.c 243 */;
	void cocci_id/* drivers/video/fbdev/sunxvr2500.c 243 */;
	struct pci_driver cocci_id/* drivers/video/fbdev/sunxvr2500.c 234 */;
	const struct pci_device_id cocci_id/* drivers/video/fbdev/sunxvr2500.c 222 */[];
	struct s3d_info {
		struct fb_info *info;
		struct pci_dev *pdev;
		char __iomem *fb_base;
		unsigned long fb_base_phys;
		struct device_node *of_node;
		unsigned int width;
		unsigned int height;
		unsigned int depth;
		unsigned int fb_size;
		u32 pseudo_palette[16];
	} cocci_id/* drivers/video/fbdev/sunxvr2500.c 16 */;
	struct s3d_info cocci_id/* drivers/video/fbdev/sunxvr2500.c 133 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/sunxvr2500.c 122 */;
	const struct pci_device_id *cocci_id/* drivers/video/fbdev/sunxvr2500.c 120 */;
	struct pci_dev *cocci_id/* drivers/video/fbdev/sunxvr2500.c 119 */;
}
