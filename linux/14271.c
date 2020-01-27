cocci_test_suite() {
	const struct gs_reg_fmt cocci_id/* drivers/media/spi/gs1662.c 87 */[];
	const struct v4l2_dv_timings cocci_id/* drivers/media/spi/gs1662.c 72 */[];
	const struct spi_device_id cocci_id/* drivers/media/spi/gs1662.c 66 */[];
	struct gs_reg_fmt_custom {
		u16 reg_value;
		__u32 width;
		__u32 height;
		__u64 pixelclock;
		__u32 interlaced;
	} cocci_id/* drivers/media/spi/gs1662.c 58 */;
	struct gs_reg_fmt {
		u16 reg_value;
		struct v4l2_dv_timings format;
	} cocci_id/* drivers/media/spi/gs1662.c 53 */;
	struct gs {
		struct spi_device *pdev;
		struct v4l2_subdev sd;
		struct v4l2_dv_timings current_timings;
		int enabled;
	} cocci_id/* drivers/media/spi/gs1662.c 46 */;
	struct spi_driver cocci_id/* drivers/media/spi/gs1662.c 458 */;
	struct gs cocci_id/* drivers/media/spi/gs1662.c 426 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/spi/gs1662.c 414 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/spi/gs1662.c 408 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/spi/gs1662.c 400 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/spi/gs1662.c 393 */;
	struct v4l2_dv_timings_cap *cocci_id/* drivers/media/spi/gs1662.c 383 */;
	struct v4l2_subdev *cocci_id/* drivers/media/spi/gs1662.c 382 */;
	u32 *cocci_id/* drivers/media/spi/gs1662.c 346 */;
	struct v4l2_enum_dv_timings *cocci_id/* drivers/media/spi/gs1662.c 314 */;
	struct v4l2_dv_timings cocci_id/* drivers/media/spi/gs1662.c 277 */;
	struct gs *cocci_id/* drivers/media/spi/gs1662.c 267 */;
	int cocci_id/* drivers/media/spi/gs1662.c 234 */;
	u16 cocci_id/* drivers/media/spi/gs1662.c 232 */;
	struct v4l2_dv_timings *cocci_id/* drivers/media/spi/gs1662.c 232 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/spi/gs1662.c 209 */;
	struct spi_device *cocci_id/* drivers/media/spi/gs1662.c 198 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/spi/gs1662.c 196 */;
	struct spi_transfer cocci_id/* drivers/media/spi/gs1662.c 146 */[];
	struct spi_message cocci_id/* drivers/media/spi/gs1662.c 145 */;
	u16 *cocci_id/* drivers/media/spi/gs1662.c 140 */;
	const struct v4l2_dv_timings_cap cocci_id/* drivers/media/spi/gs1662.c 128 */;
}
