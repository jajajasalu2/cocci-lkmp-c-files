cocci_test_suite() {
	struct vimc_sen_device cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 92 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 89 */;
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 67 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 66 */;
	struct v4l2_subdev *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 65 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 53 */;
	unsigned int cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 39 */;
	int cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 327 */;
	struct vimc_sen_device *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 326 */;
	struct v4l2_device *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 325 */;
	const char *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 323 */;
	struct vimc_ent_device *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 322 */;
	struct vimc_device *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 322 */;
	const struct v4l2_ctrl_config cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 306 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 293 */;
	const struct v4l2_mbus_framefmt cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 28 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 278 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 245 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 239 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 235 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 229 */;
	const void *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 186 */;
	void *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 185 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 177 */;
	struct vimc_sen_device {
		struct vimc_ent_device ved;
		struct v4l2_subdev sd;
		struct tpg_data tpg;
		u8 *frame;
		struct v4l2_mbus_framefmt mbus_format;
		struct v4l2_ctrl_handler hdl;
		struct media_pad pad;
	} cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 17 */;
	const struct vimc_pix_map *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 121 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 119 */;
	void cocci_id/* drivers/media/platform/vimc/vimc-sensor.c 119 */;
}
