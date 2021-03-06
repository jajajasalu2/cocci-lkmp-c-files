cocci_test_suite() {
	struct csi2_dev cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 90 */;
	struct platform_driver cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 676 */;
	const struct of_device_id cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 670 */[];
	struct v4l2_async_subdev cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 640 */;
	struct resource *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 562 */;
	struct platform_device *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 558 */;
	struct v4l2_async_subdev *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 535 */;
	struct v4l2_fwnode_endpoint *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 534 */;
	struct device *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 533 */;
	const struct v4l2_subdev_internal_ops cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 529 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 524 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 518 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 514 */;
	const struct media_entity_operations cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 509 */;
	struct v4l2_subdev_format *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 454 */;
	struct v4l2_subdev *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 452 */;
	enum v4l2_subdev_format_whence cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 444 */;
	unsigned int cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 444 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 443 */;
	struct csi2_dev *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 443 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 442 */;
	const struct media_pad *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 400 */;
	struct media_entity *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 399 */;
	struct csi2_dev {
		struct device *dev;
		struct v4l2_subdev sd;
		struct media_pad pad[CSI2_NUM_PADS];
		struct clk *dphy_clk;
		struct clk *pllref_clk;
		struct clk *pix_clk;
		void __iomem *base;
		struct v4l2_fwnode_bus_mipi_csi2 bus;
		struct mutex lock;
		struct v4l2_mbus_framefmt format_mbus;
		int stream_count;
		struct v4l2_subdev *src_sd;
		bool sink_linked[CSI2_NUM_SRC_PADS];
	} cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 35 */;
	void cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 246 */;
	int __maybe_unused cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 221 */;
	u32 cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 197 */;
	struct v4l2_ctrl *cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 196 */;
	int cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 194 */;
	const struct {
		u32 max_mbps;
		u32 hsfreqrange_sel;
	} cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 169 */[];
	bool cocci_id/* drivers/staging/media/imx/imx6-mipi-csi2.c 121 */;
}
