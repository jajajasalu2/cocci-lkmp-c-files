cocci_test_suite() {
	int cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 542 */;
	struct vimc_deb_device *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 541 */;
	struct v4l2_device *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 540 */;
	const struct vimc_deb_pix_map cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 54 */[];
	const char *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 538 */;
	struct vimc_ent_device *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 537 */;
	struct vimc_device *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 537 */;
	const struct v4l2_ctrl_config cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 519 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 507 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 493 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 478 */;
	struct vimc_deb_device cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 460 */;
	const struct v4l2_mbus_framefmt cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 46 */;
	const void *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 458 */;
	void *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 457 */;
	enum vimc_deb_rgb_colors cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 416 */;
	unsigned int cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 378 */;
	unsigned int cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 376 */[3];
	const unsigned int cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 374 */;
	const u8 *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 373 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 354 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 350 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 344 */;
	const struct vimc_pix_map *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 306 */;
	struct vimc_deb_device {
		struct vimc_ent_device ved;
		struct v4l2_subdev sd;
		struct v4l2_mbus_framefmt sink_fmt;
		u32 src_code;
		void (*set_rgb_src)(struct vimc_deb_device *vdeb,
				    unsigned int lin, unsigned int col,
				    unsigned int rgb[3]);
		u8 *src_frame;
		const struct vimc_deb_pix_map *sink_pix_map;
		unsigned int sink_bpp;
		unsigned int mean_win_size;
		struct v4l2_ctrl_handler hdl;
		struct media_pad pads[2];
	} cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 29 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 281 */;
	struct vimc_deb_pix_map {
		u32 code;
		enum vimc_deb_rgb_colors order[2][2];
	} cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 24 */;
	u32 cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 223 */;
	const struct vimc_deb_pix_map *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 216 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 214 */;
	void cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 214 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 198 */;
	enum vimc_deb_rgb_colors{VIMC_DEB_RED=0, VIMC_DEB_GREEN=1, VIMC_DEB_BLUE=2,} cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 18 */;
	struct v4l2_subdev_frame_size_enum *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 171 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 170 */;
	struct v4l2_subdev *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 169 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/platform/vimc/vimc-debayer.c 149 */;
}
