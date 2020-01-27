cocci_test_suite() {
	const struct internal_subdev cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 41 */[NUM_IPU_SUBDEVS];
	struct internal_subdev {
		u32 grp_id;
		struct internal_pad pad[MAX_INTERNAL_PADS];
		struct v4l2_subdev *(*sync_register)(struct v4l2_device *v4l2_dev,
						     struct device *ipu_dev,
						     struct ipu_soc *ipu,
						     u32 grp_id);
		int (*sync_unregister)(struct v4l2_subdev *sd);
	} cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 30 */;
	void cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 283 */;
	struct internal_pad {
		int num_links;
		struct internal_link link[MAX_INTERNAL_LINKS];
	} cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 25 */;
	struct ipu_soc *cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 196 */;
	struct device *cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 193 */;
	struct internal_link {
		int remote;
		int local_pad;
		int remote_pad;
	} cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 19 */;
	struct internal_subdev cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 17 */;
	struct media_pad *cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 164 */;
	const struct internal_pad *cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 162 */;
	const struct internal_subdev *cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 158 */;
	const struct internal_link *cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 136 */;
	struct v4l2_subdev *cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 134 */;
	struct imx_media_dev *cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 133 */;
	int cocci_id/* drivers/staging/media/imx/imx-media-internal-sd.c 133 */;
}
