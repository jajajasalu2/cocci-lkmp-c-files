cocci_test_suite() {
	const struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/imx274.c 996 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/media/i2c/imx274.c 992 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/imx274.c 937 */;
	const struct imx274_mode *cocci_id/* drivers/media/i2c/imx274.c 883 */;
	unsigned int cocci_id/* drivers/media/i2c/imx274.c 882 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/imx274.c 881 */;
	const struct v4l2_rect *cocci_id/* drivers/media/i2c/imx274.c 880 */;
	struct device *cocci_id/* drivers/media/i2c/imx274.c 879 */;
	u32 *cocci_id/* drivers/media/i2c/imx274.c 875 */;
	u32 cocci_id/* drivers/media/i2c/imx274.c 874 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/imx274.c 873 */;
	struct stimx274 *cocci_id/* drivers/media/i2c/imx274.c 872 */;
	int cocci_id/* drivers/media/i2c/imx274.c 872 */;
	const int cocci_id/* drivers/media/i2c/imx274.c 822 */;
	void cocci_id/* drivers/media/i2c/imx274.c 762 */;
	__le32 cocci_id/* drivers/media/i2c/imx274.c 653 */;
	size_t cocci_id/* drivers/media/i2c/imx274.c 651 */;
	u16 cocci_id/* drivers/media/i2c/imx274.c 650 */;
	u8 cocci_id/* drivers/media/i2c/imx274.c 576 */[16];
	const struct reg_8 *cocci_id/* drivers/media/i2c/imx274.c 571 */;
	struct regmap *cocci_id/* drivers/media/i2c/imx274.c 569 */;
	struct stimx274 cocci_id/* drivers/media/i2c/imx274.c 549 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/imx274.c 546 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/imx274.c 546 */;
	int cocci_id/* drivers/media/i2c/imx274.c 535 */(struct stimx274 *priv,
							 struct v4l2_fract frame_interval);
	int cocci_id/* drivers/media/i2c/imx274.c 532 */(struct stimx274 *priv,
							 int val);
	int cocci_id/* drivers/media/i2c/imx274.c 531 */(struct stimx274 *priv,
							 struct v4l2_ctrl *ctrl);
	struct stimx274 {
		struct v4l2_subdev sd;
		struct media_pad pad;
		struct i2c_client *client;
		struct imx274_ctrls ctrls;
		struct v4l2_rect crop;
		struct v4l2_mbus_framefmt format;
		struct v4l2_fract frame_interval;
		struct regmap *regmap;
		struct gpio_desc *reset_gpio;
		struct mutex lock;
		const struct imx274_mode *mode;
	} cocci_id/* drivers/media/i2c/imx274.c 507 */;
	struct imx274_ctrls {
		struct v4l2_ctrl_handler handler;
		struct v4l2_ctrl *exposure;
		struct v4l2_ctrl *gain;
		struct v4l2_ctrl *vflip;
		struct v4l2_ctrl *test_pattern;
	} cocci_id/* drivers/media/i2c/imx274.c 483 */;
	const struct imx274_mode cocci_id/* drivers/media/i2c/imx274.c 445 */[];
	const struct reg_8 cocci_id/* drivers/media/i2c/imx274.c 219 */[];
	struct i2c_driver cocci_id/* drivers/media/i2c/imx274.c 1981 */;
	const char *const cocci_id/* drivers/media/i2c/imx274.c 198 */[];
	struct i2c_client *cocci_id/* drivers/media/i2c/imx274.c 1824 */;
	enum{TEST_PATTERN_DISABLED=0, TEST_PATTERN_ALL_000H, TEST_PATTERN_ALL_FFFH, TEST_PATTERN_ALL_555H, TEST_PATTERN_ALL_AAAH, TEST_PATTERN_VSP_5AH, TEST_PATTERN_VSP_A5H, TEST_PATTERN_VSP_05H, TEST_PATTERN_VSP_50H, TEST_PATTERN_VSP_0FH, TEST_PATTERN_VSP_F0H, TEST_PATTERN_H_COLOR_BARS, TEST_PATTERN_V_COLOR_BARS,} cocci_id/* drivers/media/i2c/imx274.c 182 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/imx274.c 1818 */[];
	const struct of_device_id cocci_id/* drivers/media/i2c/imx274.c 1812 */[];
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/imx274.c 1808 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/imx274.c 1803 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/imx274.c 1797 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/imx274.c 1790 */;
	struct v4l2_fract cocci_id/* drivers/media/i2c/imx274.c 1722 */;
	struct imx274_mode {
		const struct reg_8 *init_regs;
		unsigned int bin_ratio;
		int min_frame_len;
		int min_SHR;
		int max_fps;
		int nocpiop;
	} cocci_id/* drivers/media/i2c/imx274.c 170 */;
	enum imx274_binning{IMX274_BINNING_OFF, IMX274_BINNING_2_1, IMX274_BINNING_3_1,} cocci_id/* drivers/media/i2c/imx274.c 148 */;
	u8 cocci_id/* drivers/media/i2c/imx274.c 1441 */;
	const struct regmap_config cocci_id/* drivers/media/i2c/imx274.c 142 */;
	struct reg_8 {
		u16 addr;
		u8 val;
	} cocci_id/* drivers/media/i2c/imx274.c 137 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/imx274.c 1205 */;
	s32 cocci_id/* drivers/media/i2c/imx274.c 1148 */;
	const u32 cocci_id/* drivers/media/i2c/imx274.c 1059 */;
	bool cocci_id/* drivers/media/i2c/imx274.c 1051 */;
	struct v4l2_rect cocci_id/* drivers/media/i2c/imx274.c 1050 */;
	struct v4l2_rect *cocci_id/* drivers/media/i2c/imx274.c 1049 */;
}
