cocci_test_suite() {
	const struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/ssd1307fb.c 95 */;
	struct ssd1307fb_array {
		u8 type;
		u8 data[0];
	} cocci_id/* drivers/video/fbdev/ssd1307fb.c 90 */;
	struct i2c_driver cocci_id/* drivers/video/fbdev/ssd1307fb.c 810 */;
	const struct i2c_device_id cocci_id/* drivers/video/fbdev/ssd1307fb.c 801 */[];
	struct ssd1307fb_par {
		unsigned area_color_enable:1;
		unsigned com_invdir:1;
		unsigned com_lrremap:1;
		unsigned com_seq:1;
		unsigned lookup_table_set:1;
		unsigned low_power:1;
		unsigned seg_remap:1;
		u32 com_offset;
		u32 contrast;
		u32 dclk_div;
		u32 dclk_frq;
		const struct ssd1307fb_deviceinfo *device_info;
		struct i2c_client *client;
		u32 height;
		struct fb_info *info;
		u8 lookup_table[4];
		u32 page_offset;
		u32 prechargep1;
		u32 prechargep2;
		struct pwm_device *pwm;
		u32 pwm_period;
		struct gpio_desc *reset;
		struct regulator *vbat_reg;
		u32 vcomh;
		u32 width;
	} cocci_id/* drivers/video/fbdev/ssd1307fb.c 62 */;
	struct fb_deferred_io *cocci_id/* drivers/video/fbdev/ssd1307fb.c 596 */;
	struct device_node *cocci_id/* drivers/video/fbdev/ssd1307fb.c 595 */;
	char cocci_id/* drivers/video/fbdev/ssd1307fb.c 593 */[12];
	const struct i2c_device_id *cocci_id/* drivers/video/fbdev/ssd1307fb.c 590 */;
	struct i2c_client *cocci_id/* drivers/video/fbdev/ssd1307fb.c 589 */;
	void *cocci_id/* drivers/video/fbdev/ssd1307fb.c 571 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/ssd1307fb.c 568 */[];
	struct ssd1307fb_deviceinfo cocci_id/* drivers/video/fbdev/ssd1307fb.c 542 */;
	struct ssd1307fb_deviceinfo {
		u32 default_vcomh;
		u32 default_dclk_div;
		u32 default_dclk_frq;
		int need_pwm;
		int need_chargepump;
	} cocci_id/* drivers/video/fbdev/ssd1307fb.c 54 */;
	const struct backlight_ops cocci_id/* drivers/video/fbdev/ssd1307fb.c 535 */;
	struct backlight_device *cocci_id/* drivers/video/fbdev/ssd1307fb.c 529 */;
	struct ssd1307fb_par cocci_id/* drivers/video/fbdev/ssd1307fb.c 52 */;
	u_int cocci_id/* drivers/video/fbdev/ssd1307fb.c 49 */;
	struct pwm_args cocci_id/* drivers/video/fbdev/ssd1307fb.c 303 */;
	struct list_head *cocci_id/* drivers/video/fbdev/ssd1307fb.c 294 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/ssd1307fb.c 283 */;
	const struct fb_image *cocci_id/* drivers/video/fbdev/ssd1307fb.c 276 */;
	const struct fb_copyarea *cocci_id/* drivers/video/fbdev/ssd1307fb.c 269 */;
	void cocci_id/* drivers/video/fbdev/ssd1307fb.c 269 */;
	const struct fb_fillrect *cocci_id/* drivers/video/fbdev/ssd1307fb.c 262 */;
	struct ssd1307fb_par *cocci_id/* drivers/video/fbdev/ssd1307fb.c 254 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/ssd1307fb.c 252 */;
	int cocci_id/* drivers/video/fbdev/ssd1307fb.c 252 */;
	unsigned long cocci_id/* drivers/video/fbdev/ssd1307fb.c 225 */;
	loff_t *cocci_id/* drivers/video/fbdev/ssd1307fb.c 222 */;
	size_t cocci_id/* drivers/video/fbdev/ssd1307fb.c 222 */;
	const char __user *cocci_id/* drivers/video/fbdev/ssd1307fb.c 221 */;
	ssize_t cocci_id/* drivers/video/fbdev/ssd1307fb.c 221 */;
	unsigned int cocci_id/* drivers/video/fbdev/ssd1307fb.c 162 */;
	u8 *cocci_id/* drivers/video/fbdev/ssd1307fb.c 161 */;
	struct ssd1307fb_array cocci_id/* drivers/video/fbdev/ssd1307fb.c 116 */;
	u8 cocci_id/* drivers/video/fbdev/ssd1307fb.c 112 */;
	u32 cocci_id/* drivers/video/fbdev/ssd1307fb.c 112 */;
	struct ssd1307fb_array *cocci_id/* drivers/video/fbdev/ssd1307fb.c 112 */;
	const struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/ssd1307fb.c 105 */;
}
