cocci_test_suite() {
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/mt9m111.c 890 */;
	const struct v4l2_control cocci_id/* drivers/media/i2c/mt9m111.c 870 */[];
	const char *const cocci_id/* drivers/media/i2c/mt9m111.c 848 */[];
	u16 cocci_id/* drivers/media/i2c/mt9m111.c 815 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/mt9m111.c 773 */;
	u64 cocci_id/* drivers/media/i2c/mt9m111.c 764 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/i2c/mt9m111.c 754 */;
	bool cocci_id/* drivers/media/i2c/mt9m111.c 705 */;
	struct v4l2_rect *cocci_id/* drivers/media/i2c/mt9m111.c 702 */;
	unsigned int cocci_id/* drivers/media/i2c/mt9m111.c 698 */;
	const struct mt9m111_mode_info *cocci_id/* drivers/media/i2c/mt9m111.c 697 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/i2c/mt9m111.c 524 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/i2c/mt9m111.c 522 */;
	struct v4l2_subdev_selection *cocci_id/* drivers/media/i2c/mt9m111.c 497 */;
	__s32 cocci_id/* drivers/media/i2c/mt9m111.c 477 */;
	struct v4l2_rect cocci_id/* drivers/media/i2c/mt9m111.c 457 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/mt9m111.c 432 */;
	struct mt9m111 *cocci_id/* drivers/media/i2c/mt9m111.c 430 */;
	int cocci_id/* drivers/media/i2c/mt9m111.c 430 */;
	struct mt9m111_context *cocci_id/* drivers/media/i2c/mt9m111.c 377 */;
	const u16 cocci_id/* drivers/media/i2c/mt9m111.c 354 */;
	const struct i2c_client *cocci_id/* drivers/media/i2c/mt9m111.c 296 */;
	u32 cocci_id/* drivers/media/i2c/mt9m111.c 286 */;
	const struct mt9m111_datafmt *cocci_id/* drivers/media/i2c/mt9m111.c 285 */;
	const struct mt9m111_mode_info cocci_id/* drivers/media/i2c/mt9m111.c 253 */[MT9M111_NUM_MODES];
	struct mt9m111 {
		struct v4l2_subdev subdev;
		struct v4l2_ctrl_handler hdl;
		struct v4l2_ctrl *gain;
		struct mt9m111_context *ctx;
		struct v4l2_rect rect;
		struct v4l2_clk *clk;
		unsigned int width;
		unsigned int height;
		struct v4l2_fract frame_interval;
		const struct mt9m111_mode_info *current_mode;
		struct mutex power_lock;
		int power_count;
		const struct mt9m111_datafmt *fmt;
		int lastpage;
		struct regulator *regulator;
		bool is_streaming;
		unsigned int pclk_sample:1;
#ifdef CONFIG_MEDIA_CONTROLLER
		struct media_pad pad;
#endif
	} cocci_id/* drivers/media/i2c/mt9m111.c 229 */;
	struct mt9m111_mode_info {
		unsigned int sensor_w;
		unsigned int sensor_h;
		unsigned int max_image_w;
		unsigned int max_image_h;
		unsigned int max_fps;
		unsigned int reg_val;
		unsigned int reg_mask;
	} cocci_id/* drivers/media/i2c/mt9m111.c 219 */;
	enum mt9m111_mode_id{MT9M111_MODE_SXGA_8FPS, MT9M111_MODE_SXGA_15FPS, MT9M111_MODE_QSXGA_30FPS, MT9M111_NUM_MODES,} cocci_id/* drivers/media/i2c/mt9m111.c 212 */;
	const struct mt9m111_datafmt cocci_id/* drivers/media/i2c/mt9m111.c 197 */[];
	struct mt9m111_datafmt {
		u32 code;
		enum v4l2_colorspace colorspace;
	} cocci_id/* drivers/media/i2c/mt9m111.c 192 */;
	struct mt9m111_context cocci_id/* drivers/media/i2c/mt9m111.c 163 */;
	struct mt9m111_context {
		u16 read_mode;
		u16 blanking_h;
		u16 blanking_v;
		u16 reducer_xzoom;
		u16 reducer_yzoom;
		u16 reducer_xsize;
		u16 reducer_ysize;
		u16 output_fmt_ctrl2;
		u16 control;
	} cocci_id/* drivers/media/i2c/mt9m111.c 151 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/mt9m111.c 1385 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/mt9m111.c 1379 */[];
	const struct of_device_id cocci_id/* drivers/media/i2c/mt9m111.c 1373 */[];
	struct i2c_adapter *cocci_id/* drivers/media/i2c/mt9m111.c 1249 */;
	struct fwnode_handle *cocci_id/* drivers/media/i2c/mt9m111.c 1227 */;
	struct v4l2_fwnode_endpoint cocci_id/* drivers/media/i2c/mt9m111.c 1224 */;
	s32 cocci_id/* drivers/media/i2c/mt9m111.c 1186 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/mt9m111.c 1173 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/i2c/mt9m111.c 1164 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/mt9m111.c 1157 */;
	struct v4l2_mbus_config *cocci_id/* drivers/media/i2c/mt9m111.c 1141 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/i2c/mt9m111.c 1104 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/i2c/mt9m111.c 1103 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/mt9m111.c 1102 */;
	struct v4l2_fract *cocci_id/* drivers/media/i2c/mt9m111.c 1070 */;
	struct mt9m111 cocci_id/* drivers/media/i2c/mt9m111.c 1058 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/media/i2c/mt9m111.c 1056 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/mt9m111.c 1044 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/mt9m111.c 1040 */;
	void cocci_id/* drivers/media/i2c/mt9m111.c 1005 */;
}
