cocci_test_suite() {
	const struct media_entity_operations cocci_id/* drivers/media/platform/video-mux.c 96 */;
	u16 cocci_id/* drivers/media/platform/video-mux.c 49 */;
	struct platform_driver cocci_id/* drivers/media/platform/video-mux.c 457 */;
	const struct of_device_id cocci_id/* drivers/media/platform/video-mux.c 451 */[];
	const struct media_pad *cocci_id/* drivers/media/platform/video-mux.c 44 */;
	struct media_entity *cocci_id/* drivers/media/platform/video-mux.c 43 */;
	struct video_mux cocci_id/* drivers/media/platform/video-mux.c 40 */;
	struct of_endpoint cocci_id/* drivers/media/platform/video-mux.c 391 */;
	struct device_node *cocci_id/* drivers/media/platform/video-mux.c 367 */;
	struct platform_device *cocci_id/* drivers/media/platform/video-mux.c 365 */;
	struct v4l2_async_subdev cocci_id/* drivers/media/platform/video-mux.c 358 */;
	int cocci_id/* drivers/media/platform/video-mux.c 345 */;
	struct v4l2_async_subdev *cocci_id/* drivers/media/platform/video-mux.c 335 */;
	struct v4l2_fwnode_endpoint *cocci_id/* drivers/media/platform/video-mux.c 334 */;
	struct device *cocci_id/* drivers/media/platform/video-mux.c 333 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/platform/video-mux.c 328 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/platform/video-mux.c 322 */;
	const struct v4l2_mbus_framefmt cocci_id/* drivers/media/platform/video-mux.c 31 */;
	struct video_mux {
		struct v4l2_subdev subdev;
		struct media_pad *pads;
		struct v4l2_mbus_framefmt *format_mbus;
		struct mux_control *mux;
		struct mutex lock;
		int active;
	} cocci_id/* drivers/media/platform/video-mux.c 22 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/platform/video-mux.c 151 */;
	struct video_mux *cocci_id/* drivers/media/platform/video-mux.c 137 */;
	u32 cocci_id/* drivers/media/platform/video-mux.c 135 */;
	unsigned int cocci_id/* drivers/media/platform/video-mux.c 135 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/platform/video-mux.c 134 */;
	struct v4l2_subdev *cocci_id/* drivers/media/platform/video-mux.c 133 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/platform/video-mux.c 132 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/platform/video-mux.c 128 */;
	struct media_pad *cocci_id/* drivers/media/platform/video-mux.c 105 */;
}
