cocci_test_suite() {
	const struct csis_drvdata cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 999 */;
	struct resource *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 766 */;
	const struct csis_drvdata *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 764 */;
	const struct of_device_id *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 763 */;
	const struct of_device_id cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 759 */[];
	int cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 758 */(struct device *dev,
									    bool runtime);
	struct v4l2_fwnode_endpoint cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 718 */;
	struct device_node *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 717 */;
	struct platform_device *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 714 */;
	u8 __force *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 689 */;
	struct csis_pktbuf *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 674 */;
	irqreturn_t cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 671 */;
	void *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 671 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 665 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 660 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 654 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 649 */;
	unsigned int cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 627 */;
	unsigned int *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 622 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 606 */;
	enum v4l2_subdev_format_whence cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 569 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 568 */;
	struct csis_state *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 568 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 567 */;
	struct v4l2_subdev_mbus_code_enum *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 541 */;
	struct v4l2_subdev *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 539 */;
	unsigned long cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 463 */;
	struct {
		u32 offset;
		const char *const name;
	} cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 425 */[];
	const char *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 423 */;
	struct device *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 397 */;
	int cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 35 */;
	u32 cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 332 */;
	void cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 329 */;
	bool cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 290 */;
	const struct csis_pix_format *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 279 */;
	struct csis_state cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 276 */;
	const struct csis_pix_format cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 243 */[];
	struct csis_pix_format {
		unsigned int pix_width_alignment;
		u32 code;
		u32 fmt_reg;
		u8 data_alignment;
	} cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 236 */;
	struct csis_state {
		struct mutex lock;
		struct media_pad pads[CSIS_PADS_NUM];
		struct v4l2_subdev sd;
		u8 index;
		struct platform_device *pdev;
		struct phy *phy;
		void __iomem *regs;
		struct regulator_bulk_data supplies[CSIS_NUM_SUPPLIES];
		struct clk *clock[NUM_CSIS_CLOCKS];
		int irq;
		u32 interrupt_mask;
		u32 flags;
		u32 clk_frequency;
		u32 hs_settle;
		u32 num_lanes;
		u32 max_num_lanes;
		u8 wclk_ext;
		const struct csis_pix_format *csis_fmt;
		struct v4l2_mbus_framefmt format;
		spinlock_t slock;
		struct csis_pktbuf pkt_buf;
		struct s5pcsis_event events[S5PCSIS_NUM_EVENTS];
	} cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 200 */;
	struct csis_drvdata {
		u32 interrupt_mask;
	} cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 169 */;
	struct csis_pktbuf {
		u32 *data;
		unsigned int len;
	} cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 164 */;
	const struct s5pcsis_event cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 144 */[];
	struct s5pcsis_event {
		u32 mask;
		const char *const name;
		unsigned int counter;
	} cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 138 */;
	enum{ST_POWERED=1, ST_STREAMING=2, ST_SUSPENDED=4,} cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 132 */;
	const char *constcocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 126 */[];
	char *cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 119 */[];
	enum{CSIS_CLK_MUX, CSIS_CLK_GATE,} cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 114 */;
	struct platform_driver cocci_id/* drivers/media/platform/exynos4-is/mipi-csis.c 1022 */;
}
