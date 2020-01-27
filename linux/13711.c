cocci_test_suite() {
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/i2c/ov9650.c 992 */;
	const struct v4l2_ctrl_ops *cocci_id/* drivers/media/i2c/ov9650.c 990 */;
	const char *const cocci_id/* drivers/media/i2c/ov9650.c 983 */[];
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/ov9650.c 978 */;
	u8 cocci_id/* drivers/media/i2c/ov9650.c 860 */;
	unsigned int cocci_id/* drivers/media/i2c/ov9650.c 859 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/ov9650.c 857 */;
	struct ov965x *cocci_id/* drivers/media/i2c/ov9650.c 857 */;
	int cocci_id/* drivers/media/i2c/ov9650.c 857 */;
	const u8 cocci_id/* drivers/media/i2c/ov9650.c 824 */[NUM_SAT_LEVELS][NUM_SAT_REGS];
	bool cocci_id/* drivers/media/i2c/ov9650.c 764 */;
	const u8 cocci_id/* drivers/media/i2c/ov9650.c 651 */[NUM_BR_LEVELS + 1][NUM_BR_REGS];
	unsigned long cocci_id/* drivers/media/i2c/ov9650.c 596 */;
	const u8 cocci_id/* drivers/media/i2c/ov9650.c 490 */[];
	const struct i2c_rv *cocci_id/* drivers/media/i2c/ov9650.c 455 */;
	u8 *cocci_id/* drivers/media/i2c/ov9650.c 425 */;
	struct ov965x cocci_id/* drivers/media/i2c/ov9650.c 417 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ov9650.c 415 */;
	struct ov965x_interval cocci_id/* drivers/media/i2c/ov9650.c 407 */[];
	const struct ov965x_pixfmt cocci_id/* drivers/media/i2c/ov9650.c 395 */[];
	struct ov965x_pixfmt {
		u32 code;
		u32 colorspace;
		u8 tslb_reg;
	} cocci_id/* drivers/media/i2c/ov9650.c 388 */;
	const struct ov965x_framesize cocci_id/* drivers/media/i2c/ov9650.c 369 */[];
	const u8 cocci_id/* drivers/media/i2c/ov9650.c 348 */[NUM_FMT_REGS];
	const struct i2c_rv cocci_id/* drivers/media/i2c/ov9650.c 286 */[];
	struct i2c_rv {
		u8 addr;
		u8 value;
	} cocci_id/* drivers/media/i2c/ov9650.c 281 */;
	struct ov965x {
		struct v4l2_subdev sd;
		struct media_pad pad;
		enum v4l2_mbus_type bus_type;
		struct gpio_desc *gpios[NUM_GPIOS];
		unsigned long mclk_frequency;
		struct clk *clk;
		struct mutex lock;
		struct regmap *regmap;
		unsigned int exp_row_interval;
		unsigned short id;
		const struct ov965x_framesize *frame_size;
		u8 tslb_reg;
		struct v4l2_mbus_framefmt format;
		struct ov965x_ctrls ctrls;
		const struct ov965x_interval *fiv;
		int streaming;
		int power;
		u8 apply_frame_fmt;
	} cocci_id/* drivers/media/i2c/ov9650.c 248 */;
	enum gpio_id{GPIO_PWDN, GPIO_RST, NUM_GPIOS,} cocci_id/* drivers/media/i2c/ov9650.c 242 */;
	struct ov965x_interval {
		struct v4l2_fract interval;
		struct v4l2_frmsize_discrete size;
		u8 clkrc_div;
	} cocci_id/* drivers/media/i2c/ov9650.c 235 */;
	struct ov965x_framesize {
		u16 width;
		u16 height;
		u16 max_exp_lines;
		const u8 *regs;
	} cocci_id/* drivers/media/i2c/ov9650.c 228 */;
	struct ov965x_ctrls {
		struct v4l2_ctrl_handler handler;
		struct {
			struct v4l2_ctrl *auto_exp;
			struct v4l2_ctrl *exposure;
		};
		struct {
			struct v4l2_ctrl *auto_wb;
			struct v4l2_ctrl *blue_balance;
			struct v4l2_ctrl *red_balance;
		};
		struct {
			struct v4l2_ctrl *hflip;
			struct v4l2_ctrl *vflip;
		};
		struct {
			struct v4l2_ctrl *auto_gain;
			struct v4l2_ctrl *gain;
		};
		struct v4l2_ctrl *brightness;
		struct v4l2_ctrl *saturation;
		struct v4l2_ctrl *sharpness;
		struct v4l2_ctrl *light_freq;
		u8 update;
	} cocci_id/* drivers/media/i2c/ov9650.c 202 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/ov9650.c 1615 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/ov9650.c 1607 */[];
	const struct i2c_device_id cocci_id/* drivers/media/i2c/ov9650.c 1599 */[];
	const struct regmap_config cocci_id/* drivers/media/i2c/ov9650.c 1499 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/ov9650.c 1493 */;
	struct device *cocci_id/* drivers/media/i2c/ov9650.c 1438 */;
	int cocci_id/* drivers/media/i2c/ov9650.c 1411 */[NUM_GPIOS];
	const struct ov9650_platform_data *cocci_id/* drivers/media/i2c/ov9650.c 1408 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ov9650.c 1398 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/ov9650.c 1391 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/ov9650.c 1387 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/ov9650.c 1380 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/ov9650.c 1373 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/ov9650.c 1364 */;
	struct ov965x_ctrls *cocci_id/* drivers/media/i2c/ov9650.c 1279 */;
	struct v4l2_subdev_frame_interval cocci_id/* drivers/media/i2c/ov9650.c 1253 */;
	const struct ov965x_framesize *cocci_id/* drivers/media/i2c/ov9650.c 1192 */;
	const struct ov965x_framesize **cocci_id/* drivers/media/i2c/ov9650.c 1190 */;
	void cocci_id/* drivers/media/i2c/ov9650.c 1189 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/ov9650.c 1171 */;
	u64 cocci_id/* drivers/media/i2c/ov9650.c 1123 */;
	const struct ov965x_interval *cocci_id/* drivers/media/i2c/ov9650.c 1122 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/ov9650.c 1121 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/ov9650.c 1119 */;
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/i2c/ov9650.c 1085 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/ov9650.c 1084 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/ov9650.c 1074 */;
}
