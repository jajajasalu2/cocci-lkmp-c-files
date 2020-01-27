cocci_test_suite() {
	struct ipu_dmfc_priv {
		struct ipu_soc *ipu;
		struct device *dev;
		struct dmfc_channel channels[DMFC_NUM_CHANNELS];
		struct mutex mutex;
		void __iomem *base;
		int use_count;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 92 */;
	struct dmfc_channel {
		unsigned slots;
		struct ipu_soc *ipu;
		struct ipu_dmfc_priv *priv;
		const struct dmfc_channel_data *data;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 85 */;
	struct ipu_dmfc_priv cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 83 */;
	const struct dmfc_channel_data cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 47 */[];
	struct dmfc_channel_data {
		int ipu_channel;
		unsigned long channel_reg;
		unsigned long shift;
		unsigned eot_shift;
		unsigned max_fifo_lines;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 39 */;
	struct ipu_soc *cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 212 */;
	struct clk *cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 173 */;
	struct device *cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 172 */;
	unsigned long cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 172 */;
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 138 */;
	struct ipu_dmfc_priv *cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 137 */;
	struct dmfc_channel *cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 135 */;
	int cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 135 */;
	void cocci_id/* drivers/gpu/ipu-v3/ipu-dmfc.c 135 */;
}
