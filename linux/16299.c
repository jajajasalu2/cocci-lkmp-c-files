cocci_test_suite() {
	struct dentry *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 908 */;
	struct seq_file *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 898 */;
	void *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 898 */;
	struct v4l2_async_subdev cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 889 */;
	const struct v4l2_subdev_ops *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 854 */;
	struct v4l2_async_subdev *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 834 */;
	struct v4l2_fwnode_endpoint *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 833 */;
	int cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 830 */(struct device *dev,
									 bool runtime);
	struct device_node *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 813 */;
	struct platform_device *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 810 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 804 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 798 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 794 */;
	const struct media_entity_operations cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 789 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 785 */;
	irqreturn_t cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 759 */;
	struct v4l2_subdev_format *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 730 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 729 */;
	struct v4l2_subdev *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 728 */;
	enum v4l2_subdev_format_whence cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 685 */;
	const struct media_pad *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 598 */;
	struct media_entity *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 597 */;
	unsigned long cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 520 */;
	struct device *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 473 */;
	int cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 461 */;
	u32 cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 393 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 392 */;
	struct csi_state *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 390 */;
	void cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 390 */;
	bool cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 336 */;
	unsigned int cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 328 */;
	const struct csis_pix_format *cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 326 */;
	struct csi_state cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 323 */;
	const struct {
		u32 offset;
		const char *const name;
	} cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 296 */[];
	const struct csis_pix_format cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 268 */[];
	struct csis_pix_format {
		unsigned int pix_width_alignment;
		u32 code;
		u32 fmt_reg;
		u8 data_alignment;
	} cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 261 */;
	struct csi_state {
		struct mutex lock;
		spinlock_t slock;
		struct device *dev;
		struct media_pad pads[CSIS_PADS_NUM];
		struct v4l2_subdev mipi_sd;
		struct v4l2_subdev *src_sd;
		u8 index;
		struct platform_device *pdev;
		struct phy *phy;
		void __iomem *regs;
		struct clk *wrap_clk;
		int irq;
		u32 flags;
		struct dentry *debugfs_root;
		bool debug;
		int num_clks;
		struct clk_bulk_data *clks;
		u32 clk_frequency;
		u32 hs_settle;
		struct reset_control *mrst;
		const struct csis_pix_format *csis_fmt;
		struct v4l2_mbus_framefmt format_mbus;
		struct v4l2_fwnode_bus_mipi_csi2 bus;
		struct mipi_csis_event events[MIPI_CSIS_NUM_EVENTS];
		struct v4l2_async_notifier subdev_notifier;
		struct csis_hw_reset hw_reset;
		struct regulator *mipi_phy_regulator;
		bool sink_linked;
	} cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 218 */;
	struct csis_hw_reset {
		struct regmap *src;
		u8 req_src;
		u8 rst_bit;
	} cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 212 */;
	const char *constcocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 210 */[];
	const struct mipi_csis_event cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 188 */[];
	struct mipi_csis_event {
		u32 mask;
		const char *const name;
		unsigned int counter;
	} cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 182 */;
	enum{ST_POWERED=1, ST_STREAMING=2, ST_SUSPENDED=4,} cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 176 */;
	struct platform_driver cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 1131 */;
	const struct of_device_id cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 1125 */[];
	int __maybe_unused cocci_id/* drivers/staging/media/imx/imx7-mipi-csis.c 1085 */;
}
