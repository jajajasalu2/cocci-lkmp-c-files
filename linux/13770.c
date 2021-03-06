cocci_test_suite() {
	enum adv7182_input_type cocci_id/* drivers/media/i2c/adv7180.c 982 */;
	enum adv7182_input_type{ADV7182_INPUT_TYPE_CVBS, ADV7182_INPUT_TYPE_DIFF_CVBS, ADV7182_INPUT_TYPE_SVIDEO, ADV7182_INPUT_TYPE_YPBPR,} cocci_id/* drivers/media/i2c/adv7180.c 975 */;
	const struct v4l2_event cocci_id/* drivers/media/i2c/adv7180.c 884 */;
	u8 cocci_id/* drivers/media/i2c/adv7180.c 876 */;
	irqreturn_t cocci_id/* drivers/media/i2c/adv7180.c 873 */;
	void *cocci_id/* drivers/media/i2c/adv7180.c 873 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/adv7180.c 866 */;
	const struct v4l2_subdev_sensor_ops cocci_id/* drivers/media/i2c/adv7180.c 862 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/adv7180.c 856 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/adv7180.c 850 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/adv7180.c 837 */;
	struct v4l2_event_subscription *cocci_id/* drivers/media/i2c/adv7180.c 825 */;
	struct v4l2_fh *cocci_id/* drivers/media/i2c/adv7180.c 824 */;
	struct v4l2_fract *cocci_id/* drivers/media/i2c/adv7180.c 782 */;
	struct v4l2_mbus_config *cocci_id/* drivers/media/i2c/adv7180.c 753 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/adv7180.c 703 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/adv7180.c 648 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/adv7180.c 637 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/adv7180.c 636 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/adv7180.c 635 */;
	void cocci_id/* drivers/media/i2c/adv7180.c 630 */;
	const struct v4l2_ctrl_config cocci_id/* drivers/media/i2c/adv7180.c 591 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/adv7180.c 587 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/adv7180.c 536 */;
	bool cocci_id/* drivers/media/i2c/adv7180.c 487 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/adv7180.c 459 */;
	v4l2_std_id cocci_id/* drivers/media/i2c/adv7180.c 428 */;
	u32 cocci_id/* drivers/media/i2c/adv7180.c 379 */;
	v4l2_std_id *cocci_id/* drivers/media/i2c/adv7180.c 328 */;
	u32 *cocci_id/* drivers/media/i2c/adv7180.c 327 */;
	struct adv7180_state *cocci_id/* drivers/media/i2c/adv7180.c 327 */;
	int cocci_id/* drivers/media/i2c/adv7180.c 327 */;
	unsigned int cocci_id/* drivers/media/i2c/adv7180.c 250 */;
	struct adv7180_state {
		struct v4l2_ctrl_handler ctrl_hdl;
		struct v4l2_subdev sd;
		struct media_pad pad;
		struct mutex mutex;
		int irq;
		struct gpio_desc *pwdn_gpio;
		v4l2_std_id curr_norm;
		bool powered;
		bool streaming;
		u8 input;
		struct i2c_client *client;
		unsigned int register_page;
		struct i2c_client *csi_client;
		struct i2c_client *vpp_client;
		const struct adv7180_chip_info *chip_info;
		enum v4l2_field field;
	} cocci_id/* drivers/media/i2c/adv7180.c 201 */;
	struct adv7180_chip_info {
		unsigned int flags;
		unsigned int valid_input_mask;
		int (*set_std)(struct adv7180_state *st, unsigned int std);
		int (*select_input)(struct adv7180_state *st,
				    unsigned int input);
		int (*init)(struct adv7180_state *state);
	} cocci_id/* drivers/media/i2c/adv7180.c 193 */;
	struct adv7180_state cocci_id/* drivers/media/i2c/adv7180.c 186 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/adv7180.c 1495 */;
	const struct of_device_id cocci_id/* drivers/media/i2c/adv7180.c 1477 */[];
	struct device *cocci_id/* drivers/media/i2c/adv7180.c 1451 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/adv7180.c 1425 */[];
	struct adv7180_chip_info *cocci_id/* drivers/media/i2c/adv7180.c 1318 */;
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/adv7180.c 1302 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/adv7180.c 1301 */;
	const struct adv7180_chip_info cocci_id/* drivers/media/i2c/adv7180.c 1081 */;
	unsigned int *cocci_id/* drivers/media/i2c/adv7180.c 1030 */;
	unsigned int cocci_id/* drivers/media/i2c/adv7180.c 1013 */[][3];
}
