cocci_test_suite() {
	u8 cocci_id/* drivers/video/backlight/lp8788_bl.c 76 */;
	struct lp8788_bl_config *cocci_id/* drivers/video/backlight/lp8788_bl.c 74 */;
	struct lp8788_backlight_platform_data *cocci_id/* drivers/video/backlight/lp8788_bl.c 73 */;
	struct lp8788_bl *cocci_id/* drivers/video/backlight/lp8788_bl.c 71 */;
	int cocci_id/* drivers/video/backlight/lp8788_bl.c 71 */;
	bool cocci_id/* drivers/video/backlight/lp8788_bl.c 60 */;
	enum lp8788_bl_ctrl_mode cocci_id/* drivers/video/backlight/lp8788_bl.c 60 */;
	struct lp8788_bl_config cocci_id/* drivers/video/backlight/lp8788_bl.c 51 */;
	struct lp8788_bl {
		struct lp8788 *lp;
		struct backlight_device *bl_dev;
		struct lp8788_backlight_platform_data *pdata;
		enum lp8788_bl_ctrl_mode mode;
		struct pwm_device *pwm;
	} cocci_id/* drivers/video/backlight/lp8788_bl.c 43 */;
	struct lp8788_bl_config {
		enum lp8788_bl_ctrl_mode bl_mode;
		enum lp8788_bl_dim_mode dim_mode;
		enum lp8788_bl_full_scale_current full_scale;
		enum lp8788_bl_ramp_step rise_time;
		enum lp8788_bl_ramp_step fall_time;
		enum pwm_polarity pwm_pol;
	} cocci_id/* drivers/video/backlight/lp8788_bl.c 34 */;
	struct platform_driver cocci_id/* drivers/video/backlight/lp8788_bl.c 314 */;
	struct lp8788_bl cocci_id/* drivers/video/backlight/lp8788_bl.c 263 */;
	struct lp8788 *cocci_id/* drivers/video/backlight/lp8788_bl.c 259 */;
	struct platform_device *cocci_id/* drivers/video/backlight/lp8788_bl.c 257 */;
	const struct attribute_group cocci_id/* drivers/video/backlight/lp8788_bl.c 253 */;
	struct attribute *cocci_id/* drivers/video/backlight/lp8788_bl.c 248 */[];
	struct device_attribute *cocci_id/* drivers/video/backlight/lp8788_bl.c 230 */;
	struct device *cocci_id/* drivers/video/backlight/lp8788_bl.c 229 */;
	ssize_t cocci_id/* drivers/video/backlight/lp8788_bl.c 229 */;
	void cocci_id/* drivers/video/backlight/lp8788_bl.c 222 */;
	char *cocci_id/* drivers/video/backlight/lp8788_bl.c 192 */;
	struct backlight_properties cocci_id/* drivers/video/backlight/lp8788_bl.c 189 */;
	struct backlight_device *cocci_id/* drivers/video/backlight/lp8788_bl.c 188 */;
	const struct backlight_ops cocci_id/* drivers/video/backlight/lp8788_bl.c 181 */;
	struct pwm_device *cocci_id/* drivers/video/backlight/lp8788_bl.c 126 */;
	unsigned int cocci_id/* drivers/video/backlight/lp8788_bl.c 123 */;
}
