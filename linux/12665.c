cocci_test_suite() {
	struct ipu_dc_priv {
		void __iomem *dc_reg;
		void __iomem *dc_tmpl_reg;
		struct ipu_soc *ipu;
		struct device *dev;
		struct ipu_dc channels[IPU_DC_NUM_CHANNELS];
		struct mutex mutex;
		struct completion comp;
		int use_count;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 98 */;
	struct ipu_dc {
		unsigned int di;
		void __iomem *base;
		struct ipu_dc_priv *priv;
		int chno;
		bool in_use;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 89 */;
	enum ipu_dc_map{IPU_DC_MAP_RGB24, IPU_DC_MAP_RGB565, IPU_DC_MAP_GBR24, IPU_DC_MAP_BGR666, IPU_DC_MAP_LVDS666, IPU_DC_MAP_BGR24,} cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 80 */;
	struct ipu_dc_priv cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 78 */;
	int cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 342 */[];
	unsigned long cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 339 */;
	struct device *cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 338 */;
	enum ipu_dc_map cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 278 */;
	struct ipu_soc *cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 261 */;
	bool cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 160 */;
	struct ipu_di *cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 160 */;
	struct ipu_dc_priv *cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 122 */;
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 111 */;
	struct ipu_dc *cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 109 */;
	int cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 109 */;
	void cocci_id/* drivers/gpu/ipu-v3/ipu-dc.c 109 */;
}
