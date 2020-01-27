cocci_test_suite() {
	void cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 798 */;
	struct ipu_soc *cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 794 */;
	struct clk *cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 766 */;
	struct device *cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 765 */;
	unsigned long cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 732 */;
	struct ipu_csi *cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 722 */;
	enum ipu_csi_dest cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 691 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 639 */;
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 554 */;
	struct v4l2_rect *cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 551 */;
	bool cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 520 */;
	v4l2_std_id cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 435 */;
	struct ipu_csi_bus_config cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 432 */;
	enum v4l2_field cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 383 */;
	const struct v4l2_mbus_framefmt *cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 333 */;
	const struct v4l2_mbus_config *cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 332 */;
	struct ipu_csi_bus_config *cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 331 */;
	int cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 331 */;
	struct ipu_csi {
		void __iomem *base;
		int id;
		u32 module;
		struct clk *clk_ipu;
		spinlock_t lock;
		bool inuse;
		struct ipu_soc *ipu;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 22 */;
	enum v4l2_mbus_type cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 219 */;
	unsigned cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 177 */;
	enum ipu_csi_clk_mode{IPU_CSI_CLK_MODE_GATED_CLK, IPU_CSI_CLK_MODE_NONGATED_CLK, IPU_CSI_CLK_MODE_CCIR656_PROGRESSIVE, IPU_CSI_CLK_MODE_CCIR656_INTERLACED, IPU_CSI_CLK_MODE_CCIR1120_PROGRESSIVE_DDR, IPU_CSI_CLK_MODE_CCIR1120_PROGRESSIVE_SDR, IPU_CSI_CLK_MODE_CCIR1120_INTERLACED_DDR, IPU_CSI_CLK_MODE_CCIR1120_INTERLACED_SDR,} cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 166 */;
	enum ipu_csi_data_width{IPU_CSI_DATA_WIDTH_4=0, IPU_CSI_DATA_WIDTH_8=1, IPU_CSI_DATA_WIDTH_10=3, IPU_CSI_DATA_WIDTH_12=5, IPU_CSI_DATA_WIDTH_16=9,} cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 155 */;
	struct ipu_csi_bus_config {
		unsigned data_width:4;
		unsigned clk_mode:3;
		unsigned ext_vsync:1;
		unsigned vsync_pol:1;
		unsigned hsync_pol:1;
		unsigned pixclk_pol:1;
		unsigned data_pol:1;
		unsigned sens_clksrc:1;
		unsigned pack_tight:1;
		unsigned force_eof:1;
		unsigned data_en_pol:1;
		unsigned data_fmt;
		unsigned mipi_dt;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-csi.c 135 */;
}
