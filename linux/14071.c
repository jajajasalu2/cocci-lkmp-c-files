cocci_test_suite() {
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 79 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 78 */;
	struct v4l2_subdev *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 77 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 64 */;
	int cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 360 */;
	struct vimc_sca_device *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 359 */;
	struct v4l2_device *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 358 */;
	const char *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 356 */;
	struct vimc_ent_device *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 355 */;
	struct vimc_device *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 355 */;
	const struct v4l2_mbus_framefmt cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 35 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 343 */;
	struct vimc_sca_device cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 322 */;
	const void *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 320 */;
	void *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 319 */;
	const struct vimc_sca_device *const cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 307 */;
	const u8 *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 266 */;
	const unsigned int cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 252 */;
	const u8 *const cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 251 */;
	u8 *const cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 250 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 245 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 241 */;
	struct vimc_sca_device {
		struct vimc_ent_device ved;
		struct v4l2_subdev sd;
		struct v4l2_mbus_framefmt sink_fmt;
		u8 *src_frame;
		unsigned int src_line_size;
		unsigned int bpp;
		struct media_pad pads[2];
	} cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 21 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 192 */;
	unsigned int cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 15 */;
	const struct vimc_pix_map *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 127 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 125 */;
	void cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 125 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/platform/vimc/vimc-scaler.c 107 */;
}
