cocci_test_suite() {
	const struct {
		u32 rf;
		u8 mode;
		u8 div_lo;
	} cocci_id/* drivers/media/tuners/msi001.c 92 */[];
	u8 cocci_id/* drivers/media/tuners/msi001.c 90 */;
	u64 cocci_id/* drivers/media/tuners/msi001.c 89 */;
	u32 cocci_id/* drivers/media/tuners/msi001.c 61 */;
	struct spi_driver cocci_id/* drivers/media/tuners/msi001.c 491 */;
	const struct spi_device_id cocci_id/* drivers/media/tuners/msi001.c 485 */[];
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/tuners/msi001.c 418 */;
	struct msi001_dev cocci_id/* drivers/media/tuners/msi001.c 381 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/tuners/msi001.c 379 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/tuners/msi001.c 375 */;
	const struct v4l2_subdev_tuner_ops cocci_id/* drivers/media/tuners/msi001.c 366 */;
	struct spi_device *cocci_id/* drivers/media/tuners/msi001.c 351 */;
	struct msi001_dev *cocci_id/* drivers/media/tuners/msi001.c 350 */;
	struct v4l2_frequency_band *cocci_id/* drivers/media/tuners/msi001.c 348 */;
	struct v4l2_subdev *cocci_id/* drivers/media/tuners/msi001.c 347 */;
	int cocci_id/* drivers/media/tuners/msi001.c 347 */;
	unsigned int cocci_id/* drivers/media/tuners/msi001.c 332 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/tuners/msi001.c 328 */;
	struct v4l2_frequency *cocci_id/* drivers/media/tuners/msi001.c 317 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/tuners/msi001.c 308 */;
	struct msi001_dev {
		struct spi_device *spi;
		struct v4l2_subdev sd;
		struct v4l2_ctrl_handler hdl;
		struct v4l2_ctrl *bandwidth_auto;
		struct v4l2_ctrl *bandwidth;
		struct v4l2_ctrl *lna_gain;
		struct v4l2_ctrl *mixer_gain;
		struct v4l2_ctrl *if_gain;
		unsigned int f_tuner;
	} cocci_id/* drivers/media/tuners/msi001.c 30 */;
	struct v4l2_tuner *cocci_id/* drivers/media/tuners/msi001.c 292 */;
	const struct v4l2_frequency_band cocci_id/* drivers/media/tuners/msi001.c 14 */[];
	const struct {
		u32 freq;
		u8 val;
	} cocci_id/* drivers/media/tuners/msi001.c 112 */[];
	const struct {
		u32 freq;
		u8 filter_mode;
	} cocci_id/* drivers/media/tuners/msi001.c 103 */[];
}
