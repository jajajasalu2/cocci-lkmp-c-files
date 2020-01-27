cocci_test_suite() {
	const struct media_entity_operations cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 996 */;
	const struct phtw_value cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 925 */[];
	unsigned int cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 923 */;
	struct rcar_csi2 *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 922 */;
	int cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 922 */;
	const struct rcsi2_mbps_reg *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 906 */;
	const struct phtw_value *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 891 */;
	u16 cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 869 */;
	struct v4l2_fwnode_endpoint cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 814 */;
	struct device_node *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 813 */;
	struct v4l2_fwnode_endpoint *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 777 */;
	const struct v4l2_async_notifier_operations cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 771 */;
	struct v4l2_async_subdev *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 738 */;
	u32 cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 698 */;
	irqreturn_t cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 695 */;
	void *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 695 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 690 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 685 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 681 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 669 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 668 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 652 */;
	u64 cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 453 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 452 */;
	struct v4l2_subdev *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 451 */;
	const u32 cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 417 */;
	void cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 396 */;
	struct rcar_csi2 cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 383 */;
	struct v4l2_async_notifier *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 381 */;
	struct rcar_csi2 {
		struct device *dev;
		void __iomem *base;
		const struct rcar_csi2_info *info;
		struct reset_control *rstc;
		struct v4l2_subdev subdev;
		struct media_pad pads[NR_OF_RCAR_CSI2_PAD];
		struct v4l2_async_notifier notifier;
		struct v4l2_async_subdev asd;
		struct v4l2_subdev *remote;
		struct v4l2_mbus_framefmt mf;
		struct mutex lock;
		int stream_count;
		unsigned short lanes;
		unsigned char lane_swap[4];
	} cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 354 */;
	struct rcar_csi2_info {
		int (*init_phtw)(struct rcar_csi2 *priv, unsigned int mbps);
		int (*confirm_start)(struct rcar_csi2 *priv);
		const struct rcsi2_mbps_reg *hsfreqrange;
		unsigned int csi0clkfreqrange;
		unsigned int num_channels;
		bool clear_ulps;
	} cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 345 */;
	enum rcar_csi2_pads{RCAR_CSI2_SINK, RCAR_CSI2_SOURCE_VC0, RCAR_CSI2_SOURCE_VC1, RCAR_CSI2_SOURCE_VC2, RCAR_CSI2_SOURCE_VC3, NR_OF_RCAR_CSI2_PAD,} cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 336 */;
	const struct rcar_csi2_format *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 325 */;
	const struct rcar_csi2_format cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 317 */[];
	struct rcar_csi2_format {
		u32 code;
		unsigned int datatype;
		unsigned int bpp;
	} cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 311 */;
	const struct rcsi2_mbps_reg cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 203 */[];
	struct rcsi2_mbps_reg {
		u16 mbps;
		u16 reg;
	} cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 134 */;
	struct phtw_value {
		u16 data;
		u16 code;
	} cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 129 */;
	struct platform_driver cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 1220 */;
	const struct soc_device_attribute *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 1134 */;
	struct platform_device *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 1132 */;
	const struct soc_device_attribute cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 1120 */[];
	const struct of_device_id cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 1079 */[];
	const struct rcar_csi2_info cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 1026 */;
	struct resource *cocci_id/* drivers/media/platform/rcar-vin/rcar-csi2.c 1003 */;
}
