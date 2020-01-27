cocci_test_suite() {
	struct simplefb_params {
		u32 width;
		u32 height;
		u32 stride;
		struct simplefb_format *format;
	} cocci_id/* drivers/video/fbdev/simplefb.c 92 */;
	struct simplefb_format cocci_id/* drivers/video/fbdev/simplefb.c 90 */[];
	struct fb_ops cocci_id/* drivers/video/fbdev/simplefb.c 81 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/simplefb.c 73 */;
	void cocci_id/* drivers/video/fbdev/simplefb.c 70 */(struct simplefb_par *par);
	int __init cocci_id/* drivers/video/fbdev/simplefb.c 534 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/simplefb.c 525 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/simplefb.c 519 */[];
	u32 cocci_id/* drivers/video/fbdev/simplefb.c 48 */;
	u32 *cocci_id/* drivers/video/fbdev/simplefb.c 47 */;
	u_int cocci_id/* drivers/video/fbdev/simplefb.c 44 */;
	struct simplefb_par cocci_id/* drivers/video/fbdev/simplefb.c 428 */;
	struct resource *cocci_id/* drivers/video/fbdev/simplefb.c 408 */;
	struct simplefb_params cocci_id/* drivers/video/fbdev/simplefb.c 405 */;
	const struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/simplefb.c 35 */;
	char cocci_id/* drivers/video/fbdev/simplefb.c 341 */[32];
	struct regulator *cocci_id/* drivers/video/fbdev/simplefb.c 317 */;
	struct property *cocci_id/* drivers/video/fbdev/simplefb.c 316 */;
	const struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/simplefb.c 28 */;
	int cocci_id/* drivers/video/fbdev/simplefb.c 266 */;
	struct simplefb_par *cocci_id/* drivers/video/fbdev/simplefb.c 264 */;
	void cocci_id/* drivers/video/fbdev/simplefb.c 264 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/simplefb.c 245 */;
	struct clk *cocci_id/* drivers/video/fbdev/simplefb.c 209 */;
	struct device_node *cocci_id/* drivers/video/fbdev/simplefb.c 208 */;
	struct simplefb_platform_data *cocci_id/* drivers/video/fbdev/simplefb.c 148 */;
	const char *cocci_id/* drivers/video/fbdev/simplefb.c 104 */;
	struct simplefb_params *cocci_id/* drivers/video/fbdev/simplefb.c 100 */;
	struct simplefb_par {
		u32 palette[PSEUDO_PALETTE_SIZE];
#if defined CONFIG_OF && defined CONFIG_COMMON_CLK
		bool clks_enabled;
		unsigned int clk_count;
		struct clk **clks;
#endif
#if defined CONFIG_OF && defined CONFIG_REGULATOR
		bool regulators_enabled;
		u32 regulator_count;
		struct regulator **regulators;
#endif
	} cocci_id/*  1 */;
}
