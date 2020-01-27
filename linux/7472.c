cocci_test_suite() {
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/chipsfb.c 93 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/chipsfb.c 82 */;
	int cocci_id/* drivers/video/fbdev/chipsfb.c 80 */(int blank,
							   struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/chipsfb.c 78 */(u_int regno,
							   u_int red,
							   u_int green,
							   u_int blue,
							   u_int transp,
							   struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/chipsfb.c 77 */(struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/chipsfb.c 75 */(struct fb_var_screeninfo *var,
							   struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/chipsfb.c 74 */(struct pci_dev *dp,
							   const struct pci_device_id *);
	int cocci_id/* drivers/video/fbdev/chipsfb.c 72 */(void);
	void __exit cocci_id/* drivers/video/fbdev/chipsfb.c 511 */;
	int __init cocci_id/* drivers/video/fbdev/chipsfb.c 501 */;
	struct pci_driver cocci_id/* drivers/video/fbdev/chipsfb.c 490 */;
	struct pci_device_id cocci_id/* drivers/video/fbdev/chipsfb.c 483 */[];
	pm_message_t cocci_id/* drivers/video/fbdev/chipsfb.c 450 */;
	unsigned short cocci_id/* drivers/video/fbdev/chipsfb.c 353 */;
	unsigned long cocci_id/* drivers/video/fbdev/chipsfb.c 352 */;
	const struct pci_device_id *cocci_id/* drivers/video/fbdev/chipsfb.c 349 */;
	struct pci_dev *cocci_id/* drivers/video/fbdev/chipsfb.c 349 */;
	const struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/chipsfb.c 311 */;
	const struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/chipsfb.c 294 */;
	int cocci_id/* drivers/video/fbdev/chipsfb.c 277 */;
	void cocci_id/* drivers/video/fbdev/chipsfb.c 275 */;
	struct chips_init_reg cocci_id/* drivers/video/fbdev/chipsfb.c 185 */[];
	struct chips_init_reg {
		unsigned char addr;
		unsigned char data;
	} cocci_id/* drivers/video/fbdev/chipsfb.c 167 */;
	u_int cocci_id/* drivers/video/fbdev/chipsfb.c 150 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/chipsfb.c 145 */;
}
