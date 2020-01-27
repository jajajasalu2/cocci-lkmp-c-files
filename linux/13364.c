cocci_test_suite() {
	const char *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 99 */;
	u64 *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 959 */;
	struct fwnode_reference_args cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 958 */;
	const char *const *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 955 */;
	enum v4l2_fwnode_bus_type cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 79 */;
	const struct v4l2_fwnode_bus_conv *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 78 */;
	struct fwnode_endpoint cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 684 */;
	struct v4l2_async_subdev cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 670 */;
	struct fwnode_handle *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 667 */;
	parse_endpoint_func cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 665 */;
	bool cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 664 */;
	unsigned int cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 663 */;
	size_t cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 662 */;
	struct v4l2_async_notifier *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 661 */;
	struct device *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 660 */;
	int cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 659 */;
	struct v4l2_async_subdev *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 607 */;
	struct v4l2_fwnode_endpoint cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 606 */;
	struct v4l2_fwnode_link *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 561 */;
	void cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 509 */;
	typeof(*vep) cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 422 */;
	const struct v4l2_fwnode_bus_conv {
		enum v4l2_fwnode_bus_type fwnode_bus_type;
		enum v4l2_mbus_type mbus_type;
		const char *name;
	} cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 42 */[];
	enum v4l2_mbus_type cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 416 */;
	u32 cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 415 */;
	struct v4l2_fwnode_endpoint *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 413 */;
	struct v4l2_fwnode_bus_mipi_csi1 *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 383 */;
	enum v4l2_fwnode_bus_type{V4L2_FWNODE_BUS_TYPE_GUESS=0, V4L2_FWNODE_BUS_TYPE_CSI2_CPHY, V4L2_FWNODE_BUS_TYPE_CSI1, V4L2_FWNODE_BUS_TYPE_CCP2, V4L2_FWNODE_BUS_TYPE_CSI2_DPHY, V4L2_FWNODE_BUS_TYPE_PARALLEL, V4L2_FWNODE_BUS_TYPE_BT656, NR_OF_V4L2_FWNODE_BUS_TYPE,} cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 31 */;
	struct v4l2_fwnode_bus_parallel *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 277 */;
	u32 cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 137 */[1 + V4L2_FWNODE_CSI2_MAX_DATA_LANES];
	struct v4l2_fwnode_bus_mipi_csi2 *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 133 */;
	unsigned int *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 1168 */;
	struct v4l2_subdev *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 1166 */;
	const struct v4l2_fwnode_int_props cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 1097 */[];
	const char *const cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 1096 */[];
	const struct v4l2_fwnode_int_props *cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 1040 */;
	struct v4l2_fwnode_int_props {
		const char *name;
		const char *const *props;
		unsigned int nprops;
	} cocci_id/* drivers/media/v4l2-core/v4l2-fwnode.c 1008 */;
}
