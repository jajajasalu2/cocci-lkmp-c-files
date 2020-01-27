cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/media/i2c/noon010pc30.c 813 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/noon010pc30.c 806 */[];
	const struct noon010pc30_platform_data *cocci_id/* drivers/media/i2c/noon010pc30.c 702 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/noon010pc30.c 698 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/noon010pc30.c 673 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/noon010pc30.c 669 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/noon010pc30.c 663 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/noon010pc30.c 658 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/noon010pc30.c 654 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/i2c/noon010pc30.c 650 */;
	struct v4l2_subdev_fh *cocci_id/* drivers/media/i2c/noon010pc30.c 638 */;
	const struct noon010_format *cocci_id/* drivers/media/i2c/noon010pc30.c 547 */;
	const struct noon010_frmsize *cocci_id/* drivers/media/i2c/noon010pc30.c 546 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/noon010pc30.c 506 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/noon010pc30.c 503 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/noon010pc30.c 492 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/noon010pc30.c 491 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/noon010pc30.c 454 */;
	unsigned int cocci_id/* drivers/media/i2c/noon010pc30.c 361 */;
	const struct noon010_frmsize **cocci_id/* drivers/media/i2c/noon010pc30.c 359 */;
	u8 cocci_id/* drivers/media/i2c/noon010pc30.c 294 */;
	bool cocci_id/* drivers/media/i2c/noon010pc30.c 291 */;
	const struct i2c_regval *cocci_id/* drivers/media/i2c/noon010pc30.c 278 */;
	struct noon010_info *cocci_id/* drivers/media/i2c/noon010pc30.c 258 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/noon010pc30.c 257 */;
	u32 cocci_id/* drivers/media/i2c/noon010pc30.c 255 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/noon010pc30.c 255 */;
	int cocci_id/* drivers/media/i2c/noon010pc30.c 255 */;
	struct noon010_info cocci_id/* drivers/media/i2c/noon010pc30.c 233 */;
	const struct i2c_regval cocci_id/* drivers/media/i2c/noon010pc30.c 196 */[];
	const struct noon010_format cocci_id/* drivers/media/i2c/noon010pc30.c 172 */[];
	const struct noon010_frmsize cocci_id/* drivers/media/i2c/noon010pc30.c 155 */[];
	struct i2c_regval {
		u16 addr;
		u16 val;
	} cocci_id/* drivers/media/i2c/noon010pc30.c 149 */;
	struct noon010_info {
		struct v4l2_subdev sd;
		struct media_pad pad;
		struct v4l2_ctrl_handler hdl;
		struct regulator_bulk_data supply[NOON010_NUM_SUPPLIES];
		u32 gpio_nreset;
		u32 gpio_nstby;
		struct mutex lock;
		const struct noon010_format *curr_fmt;
		const struct noon010_frmsize *curr_win;
		unsigned int apply_new_cfg:1;
		unsigned int streaming:1;
		unsigned int hflip:1;
		unsigned int vflip:1;
		unsigned int power:1;
		u8 i2c_reg_page;
	} cocci_id/* drivers/media/i2c/noon010pc30.c 128 */;
	const char *const cocci_id/* drivers/media/i2c/noon010pc30.c 122 */[];
	struct noon010_frmsize {
		u16 width;
		u16 height;
		int vid_ctl1;
	} cocci_id/* drivers/media/i2c/noon010pc30.c 116 */;
	struct noon010_format {
		u32 code;
		enum v4l2_colorspace colorspace;
		u16 ispctl1_reg;
	} cocci_id/* drivers/media/i2c/noon010pc30.c 110 */;
}
