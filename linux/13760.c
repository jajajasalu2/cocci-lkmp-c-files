cocci_test_suite() {
	struct ov7670_win_size **cocci_id/* drivers/media/i2c/ov7670.c 962 */;
	struct ov7670_format_struct **cocci_id/* drivers/media/i2c/ov7670.c 961 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/ov7670.c 950 */;
	struct v4l2_fract *cocci_id/* drivers/media/i2c/ov7670.c 877 */;
	struct ov7670_win_size cocci_id/* drivers/media/i2c/ov7670.c 727 */[];
	struct ov7670_format_struct {
		u32 mbus_code;
		enum v4l2_colorspace colorspace;
		struct regval_list *regs;
		int cmatrix[CMATRIX_LEN];
	} cocci_id/* drivers/media/i2c/ov7670.c 664 */[];
	u32 cocci_id/* drivers/media/i2c/ov7670.c 619 */;
	struct regval_list *cocci_id/* drivers/media/i2c/ov7670.c 596 */;
	unsigned char *cocci_id/* drivers/media/i2c/ov7670.c 561 */;
	unsigned char cocci_id/* drivers/media/i2c/ov7670.c 545 */[2];
	struct i2c_msg cocci_id/* drivers/media/i2c/ov7670.c 512 */;
	u8 cocci_id/* drivers/media/i2c/ov7670.c 511 */;
	bool cocci_id/* drivers/media/i2c/ov7670.c 32 */;
	struct regval_list cocci_id/* drivers/media/i2c/ov7670.c 283 */[];
	struct regval_list {
		unsigned char reg_num;
		unsigned char value;
	} cocci_id/* drivers/media/i2c/ov7670.c 278 */;
	struct ov7670_info cocci_id/* drivers/media/i2c/ov7670.c 265 */;
	struct ov7670_format_struct cocci_id/* drivers/media/i2c/ov7670.c 218 */;
	struct ov7670_devtype {
		struct ov7670_win_size *win_sizes;
		unsigned int n_win_sizes;
		int (*set_framerate)(struct v4l2_subdev *,
				     struct v4l2_fract *);
		void (*get_framerate)(struct v4l2_subdev *,
				      struct v4l2_fract *);
	} cocci_id/* drivers/media/i2c/ov7670.c 206 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/ov7670.c 2022 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/ov7670.c 2015 */[];
	const struct i2c_device_id cocci_id/* drivers/media/i2c/ov7670.c 2007 */[];
	struct ov7670_win_size {
		int width;
		int height;
		unsigned char com7_bit;
		int hstart;
		int hstop;
		int vstart;
		int vstop;
		struct regval_list *regs;
	} cocci_id/* drivers/media/i2c/ov7670.c 195 */;
	enum ov7670_model{MODEL_OV7670=0, MODEL_OV7675,} cocci_id/* drivers/media/i2c/ov7670.c 190 */;
	struct ov7670_config *cocci_id/* drivers/media/i2c/ov7670.c 1861 */;
	struct v4l2_fract cocci_id/* drivers/media/i2c/ov7670.c 1837 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/ov7670.c 1835 */;
	struct v4l2_fwnode_endpoint cocci_id/* drivers/media/i2c/ov7670.c 1805 */;
	struct fwnode_handle *cocci_id/* drivers/media/i2c/ov7670.c 1804 */;
	struct device *cocci_id/* drivers/media/i2c/ov7670.c 1801 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/ov7670.c 1776 */;
	const struct ov7670_devtype cocci_id/* drivers/media/i2c/ov7670.c 1761 */[];
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/ov7670.c 1754 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/ov7670.c 1747 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/ov7670.c 1739 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/ov7670.c 1734 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/ov7670.c 1721 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/ov7670.c 1708 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/ov7670.c 1696 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ov7670.c 1631 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/ov7670.c 1620 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/ov7670.c 1614 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/ov7670.c 1563 */;
	const char *const cocci_id/* drivers/media/i2c/ov7670.c 1543 */[];
	enum v4l2_exposure_auto_type cocci_id/* drivers/media/i2c/ov7670.c 1527 */;
	__s32 *cocci_id/* drivers/media/i2c/ov7670.c 1457 */;
	unsigned char cocci_id/* drivers/media/i2c/ov7670.c 1396 */;
	int cocci_id/* drivers/media/i2c/ov7670.c 1351 */[CMATRIX_LEN];
	void cocci_id/* drivers/media/i2c/ov7670.c 1350 */;
	const int cocci_id/* drivers/media/i2c/ov7670.c 1312 */[];
	__u32 cocci_id/* drivers/media/i2c/ov7670.c 1236 */;
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/i2c/ov7670.c 1231 */;
	unsigned int cocci_id/* drivers/media/i2c/ov7670.c 1195 */;
	struct v4l2_subdev_frame_interval_enum *cocci_id/* drivers/media/i2c/ov7670.c 1192 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/ov7670.c 1191 */;
	int cocci_id/* drivers/media/i2c/ov7670.c 1188 */[];
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/ov7670.c 1161 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/ov7670.c 1134 */;
	struct ov7670_win_size *cocci_id/* drivers/media/i2c/ov7670.c 1026 */;
	struct ov7670_info *cocci_id/* drivers/media/i2c/ov7670.c 1025 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/ov7670.c 1023 */;
	int cocci_id/* drivers/media/i2c/ov7670.c 1023 */;
	struct ov7670_info {
		struct v4l2_subdev sd;
#if defined(CONFIG_MEDIA_CONTROLLER)
		struct media_pad pad;
#endif
		struct v4l2_ctrl_handler hdl;
		struct {
			struct v4l2_ctrl *auto_gain;
			struct v4l2_ctrl *gain;
		};
		struct {
			struct v4l2_ctrl *auto_exposure;
			struct v4l2_ctrl *exposure;
		};
		struct {
			struct v4l2_ctrl *saturation;
			struct v4l2_ctrl *hue;
		};
		struct v4l2_mbus_framefmt format;
		struct ov7670_format_struct *fmt;
		struct ov7670_win_size *wsize;
		struct clk *clk;
		int on;
		struct gpio_desc *resetb_gpio;
		struct gpio_desc *pwdn_gpio;
		unsigned int mbus_config;
		int min_width;
		int min_height;
		int clock_speed;
		u8 clkrc;
		bool use_smbus;
		bool pll_bypass;
		bool pclk_hb_disable;
		const struct ov7670_devtype *devtype;
	} cocci_id/*  1 */;
}
