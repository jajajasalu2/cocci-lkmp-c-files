cocci_test_suite() {
	const struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 810 */;
	const struct fb_info *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 809 */;
	const struct atyfb_par *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 652 */;
	struct crtc *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 652 */;
	char *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 577 */[8];
	char cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 560 */[];
	char cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 554 */[]__maybe_unused;
	void __exit cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3964 */;
	const struct dmi_system_id cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3921 */[]__initconst;
	struct notifier_block cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3917 */;
	struct notifier_block *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3885 */;
	char cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3870 */[80];
	unsigned char cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3869 */;
	struct pci_driver cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3799 */;
	struct {
		u16 pci_id;
		const char *name;
		int pll,mclk,xclk,ecp_max;
		u32 features;
	} cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 375 */[];
	const struct pci_device_id cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3743 */[];
	struct atyfb_par cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3625 */;
	int __init cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3609 */;
	long cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3573 */;
	struct resource *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3508 */;
	const struct pci_device_id *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3504 */;
	struct pci_dev *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3503 */;
	unsigned long cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 341 */[FB_MAX];
	void __iomem *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3397 */;
	PLL_BLOCK_MACH64 cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3363 */;
	u8 *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3167 */;
	u8 cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3160 */[16];
	char *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3153 */;
	char cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3151 */[100];
	char cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3150 */[16];
	char cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3149 */[24];
	u32 *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3136 */;
	u16 *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3133 */;
	u16 cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 3122 */;
	bool cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 312 */;
	struct device_node *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2923 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 290 */;
	const struct fb_videomode cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 284 */;
	u_int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2828 */;
	int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 266 */(const struct atyfb_par *par);
	void cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 264 */(struct atyfb_par *par,
								    const struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 262 */(const struct crtc *crtc,
								   struct fb_var_screeninfo *var);
	int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 259 */(const struct fb_info *info,
								   const struct fb_var_screeninfo *var,
								   struct crtc *crtc);
	void cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 258 */(const struct atyfb_par *par,
								    const struct crtc *crtc);
	void cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 256 */(const struct atyfb_par *par,
								    struct crtc *crtc);
	int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 254 */(struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 246 */(struct fb_info *info,
								   struct vm_area_struct *vma);
	u_long cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 239 */;
	int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 237 */(struct fb_info *info,
								   u_int cmd,
								   u_long arg);
	int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 236 */(int blank,
								   struct fb_info *info);
	u8 cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2343 */;
	struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2334 */;
	const char *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2332 */;
	int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 232 */(u_int regno,
								   u_int red,
								   u_int green,
								   u_int blue,
								   u_int transp,
								   struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 229 */(struct fb_var_screeninfo *var,
								   struct fb_info *info);
	const int *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2278 */;
	const int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2271 */[];
	int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 227 */(struct fb_info *info,
								   int user);
	struct backlight_device *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2260 */;
	char cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2222 */[12];
	struct backlight_properties cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2219 */;
	const struct backlight_ops cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2213 */;
	unsigned int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2191 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2173 */;
	struct atyfb_par *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2171 */;
	const struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 215 */;
	struct pci_mmap_map {
		unsigned long voff;
		unsigned long poff;
		unsigned long size;
		unsigned long prot_flag;
		unsigned long prot_mask;
	} cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 207 */;
	pm_message_t cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 2058 */;
	struct vm_area_struct *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1927 */;
	u32 __user *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1903 */;
	int cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 189 */;
	struct atyclk __user *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1871 */;
	int *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 187 */;
	void cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 187 */;
	union aty_pll *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1855 */;
	struct atyclk cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1854 */;
	__u32 __user *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1845 */;
	struct fbtype __user *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1835 */;
	struct fbtype cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1823 */;
	struct atyclk {
		u32 ref_clk_per;
		u8 pll_ref_div;
		u8 mclk_fb_div;
		u8 mclk_post_div;
		u8 mclk_fb_mult;
		u8 xclk_post_div;
		u8 vclk_fb_div;
		u8 vclk_post_div;
		u32 dsp_xclks_per_row;
		u32 dsp_loop_latency;
		u32 dsp_precision;
		u32 dsp_on;
		u32 dsp_off;
	} cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1799 */;
	struct aty_interrupt *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1765 */;
	unsigned long cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 169 */;
	irqreturn_t cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1595 */;
	void *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1595 */;
	union aty_pll cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1533 */;
	struct crtc cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1532 */;
	const u32 cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 137 */[];
	u32 cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1164 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1162 */;
	const struct crtc *cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1161 */;
	const char cocci_id/* drivers/video/fbdev/aty/atyfb_base.c 1085 */[];
}
