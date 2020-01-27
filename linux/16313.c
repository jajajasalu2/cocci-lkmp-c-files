cocci_test_suite() {
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 99 */;
	struct v4l2_subdev *cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 97 */;
	int cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 97 */;
	struct imx_ic_priv *cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 85 */;
	enum v4l2_subdev_format_whence cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 83 */;
	unsigned int cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 83 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 82 */;
	struct prp_priv *cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 82 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 81 */;
	bool cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 67 */;
	struct imx_ic_ops cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 502 */;
	void cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 495 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 470 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 465 */;
	const struct media_entity_operations cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 460 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 454 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 446 */;
	struct v4l2_subdev_frame_interval *cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 396 */;
	struct prp_priv {
		struct imx_ic_priv *ic_priv;
		struct media_pad pad[PRP_NUM_PADS];
		struct mutex lock;
		struct v4l2_subdev *src_sd;
		struct v4l2_subdev *sink_sd_prpenc;
		struct v4l2_subdev *sink_sd_prpvf;
		int csi_id;
		struct v4l2_mbus_framefmt format_mbus;
		struct v4l2_fract frame_interval;
		int stream_count;
	} cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 37 */;
	struct media_link *cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 289 */;
	u32 cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 211 */;
	const struct media_pad *cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 210 */;
	struct media_entity *cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 209 */;
	const struct imx_media_pixfmt *cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 160 */;
	struct v4l2_subdev_format *cocci_id/* drivers/staging/media/imx/imx-ic-prp.c 131 */;
}
