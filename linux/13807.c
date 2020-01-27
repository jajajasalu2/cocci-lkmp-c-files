cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/media/i2c/sr030pc30.c 751 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/sr030pc30.c 744 */[];
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/i2c/sr030pc30.c 683 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/sr030pc30.c 679 */;
	const struct sr030pc30_platform_data *cocci_id/* drivers/media/i2c/sr030pc30.c 653 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/sr030pc30.c 642 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/sr030pc30.c 636 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/sr030pc30.c 632 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/sr030pc30.c 628 */;
	unsigned long cocci_id/* drivers/media/i2c/sr030pc30.c 557 */;
	const struct sr030pc30_format *cocci_id/* drivers/media/i2c/sr030pc30.c 532 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/sr030pc30.c 486 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/sr030pc30.c 484 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/sr030pc30.c 472 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/sr030pc30.c 471 */;
	struct sr030pc30_info cocci_id/* drivers/media/i2c/sr030pc30.c 420 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/sr030pc30.c 417 */;
	const struct sr030pc30_frmsize *cocci_id/* drivers/media/i2c/sr030pc30.c 398 */;
	s32 cocci_id/* drivers/media/i2c/sr030pc30.c 359 */;
	u8 cocci_id/* drivers/media/i2c/sr030pc30.c 339 */;
	bool cocci_id/* drivers/media/i2c/sr030pc30.c 336 */;
	const struct i2c_regval *cocci_id/* drivers/media/i2c/sr030pc30.c 323 */;
	struct sr030pc30_info *cocci_id/* drivers/media/i2c/sr030pc30.c 302 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/sr030pc30.c 301 */;
	u32 cocci_id/* drivers/media/i2c/sr030pc30.c 299 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/sr030pc30.c 299 */;
	int cocci_id/* drivers/media/i2c/sr030pc30.c 299 */;
	unsigned int cocci_id/* drivers/media/i2c/sr030pc30.c 286 */;
	const struct i2c_regval cocci_id/* drivers/media/i2c/sr030pc30.c 222 */[];
	const struct sr030pc30_format cocci_id/* drivers/media/i2c/sr030pc30.c 198 */[];
	const struct sr030pc30_frmsize cocci_id/* drivers/media/i2c/sr030pc30.c 181 */[];
	struct i2c_regval {
		u16 addr;
		u16 val;
	} cocci_id/* drivers/media/i2c/sr030pc30.c 175 */;
	struct sr030pc30_frmsize {
		u16 width;
		u16 height;
		int vid_ctl1;
	} cocci_id/* drivers/media/i2c/sr030pc30.c 169 */;
	struct sr030pc30_format {
		u32 code;
		enum v4l2_colorspace colorspace;
		u16 ispctl1_reg;
	} cocci_id/* drivers/media/i2c/sr030pc30.c 163 */;
	struct sr030pc30_info {
		struct v4l2_subdev sd;
		struct v4l2_ctrl_handler hdl;
		const struct sr030pc30_platform_data *pdata;
		const struct sr030pc30_format *curr_fmt;
		const struct sr030pc30_frmsize *curr_win;
		unsigned int hflip:1;
		unsigned int vflip:1;
		unsigned int sleep:1;
		struct {
			struct v4l2_ctrl *awb;
			struct v4l2_ctrl *red;
			struct v4l2_ctrl *blue;
		};
		struct {
			struct v4l2_ctrl *autoexp;
			struct v4l2_ctrl *exp;
		};
		u8 i2c_reg_page;
	} cocci_id/* drivers/media/i2c/sr030pc30.c 140 */;
}
