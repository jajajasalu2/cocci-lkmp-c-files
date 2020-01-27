cocci_test_suite() {
	u32 cocci_id/* drivers/video/fbdev/clps711x-fb.c 70 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/clps711x-fb.c 67 */;
	u_int cocci_id/* drivers/video/fbdev/clps711x-fb.c 44 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/clps711x-fb.c 383 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/clps711x-fb.c 377 */[];
	struct clps711x_fb_info {
		struct clk *clk;
		void __iomem *base;
		struct regmap *syscon;
		resource_size_t buffsize;
		struct fb_videomode mode;
		struct regulator *lcd_pwr;
		u32 ac_prescale;
		bool cmap_invert;
	} cocci_id/* drivers/video/fbdev/clps711x-fb.c 33 */;
	struct resource *cocci_id/* drivers/video/fbdev/clps711x-fb.c 215 */;
	struct lcd_device *cocci_id/* drivers/video/fbdev/clps711x-fb.c 213 */;
	struct clps711x_fb_info *cocci_id/* drivers/video/fbdev/clps711x-fb.c 212 */;
	struct device_node *cocci_id/* drivers/video/fbdev/clps711x-fb.c 211 */;
	struct device *cocci_id/* drivers/video/fbdev/clps711x-fb.c 210 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/clps711x-fb.c 208 */;
	struct lcd_ops cocci_id/* drivers/video/fbdev/clps711x-fb.c 202 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/clps711x-fb.c 156 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/clps711x-fb.c 150 */;
	int cocci_id/* drivers/video/fbdev/clps711x-fb.c 150 */;
	resource_size_t cocci_id/* drivers/video/fbdev/clps711x-fb.c 104 */;
}
