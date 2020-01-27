cocci_test_suite() {
	u16 cocci_id/* drivers/media/i2c/rj54n1cb0c.c 640 */;
	unsigned int cocci_id/* drivers/media/i2c/rj54n1cb0c.c 638 */;
	s32 *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 633 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 609 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 607 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 582 */;
	const struct v4l2_rect *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 549 */;
	int cocci_id/* drivers/media/i2c/rj54n1cb0c.c 540 */(struct v4l2_subdev *sd,
							     s32 *in_w,
							     s32 *in_h,
							     s32 *out_w,
							     s32 *out_h);
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 492 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 491 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 490 */;
	const int cocci_id/* drivers/media/i2c/rj54n1cb0c.c 476 */;
	const struct rj54n1_reg_val *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 476 */;
	const u8 cocci_id/* drivers/media/i2c/rj54n1cb0c.c 465 */;
	struct rj54n1 *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 432 */;
	const u16 cocci_id/* drivers/media/i2c/rj54n1cb0c.c 430 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 430 */;
	int cocci_id/* drivers/media/i2c/rj54n1cb0c.c 430 */;
	const struct i2c_client *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 425 */;
	const struct rj54n1_clock_div cocci_id/* drivers/media/i2c/rj54n1cb0c.c 417 */;
	const struct rj54n1_reg_val cocci_id/* drivers/media/i2c/rj54n1cb0c.c 412 */[];
	struct rj54n1_reg_val {
		u16 reg;
		u8 val;
	} cocci_id/* drivers/media/i2c/rj54n1cb0c.c 169 */;
	struct rj54n1 {
		struct v4l2_subdev subdev;
		struct v4l2_ctrl_handler hdl;
		struct clk *clk;
		struct gpio_desc *pwup_gpio;
		struct gpio_desc *enable_gpio;
		struct rj54n1_clock_div clk_div;
		const struct rj54n1_datafmt *fmt;
		struct v4l2_rect rect;
		unsigned int tgclk_mhz;
		bool auto_wb;
		unsigned short width;
		unsigned short height;
		unsigned short resize;
		unsigned short scale;
		u8 bank;
	} cocci_id/* drivers/media/i2c/rj54n1cb0c.c 151 */;
	struct rj54n1_clock_div {
		u8 ratio_tg;
		u8 ratio_t;
		u8 ratio_r;
		u8 ratio_op;
		u8 ratio_o;
	} cocci_id/* drivers/media/i2c/rj54n1cb0c.c 143 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1423 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1417 */[];
	struct rj54n1 cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1321 */;
	const struct rj54n1_datafmt cocci_id/* drivers/media/i2c/rj54n1cb0c.c 131 */[];
	struct rj54n1_pdata *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1305 */;
	struct i2c_adapter *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1304 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1301 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1253 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1245 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1241 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1233 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1229 */;
	u32 cocci_id/* drivers/media/i2c/rj54n1cb0c.c 120 */;
	const struct rj54n1_datafmt *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 119 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1189 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1148 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/rj54n1cb0c.c 1130 */;
	struct rj54n1_datafmt {
		u32 code;
		enum v4l2_colorspace colorspace;
	} cocci_id/* drivers/media/i2c/rj54n1cb0c.c 113 */;
}
