cocci_test_suite() {
	u8 cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 79 */;
	struct ipu_flow cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 73 */;
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 68 */[];
	struct ipu_dp_priv {
		struct ipu_soc *ipu;
		struct device *dev;
		void __iomem *base;
		struct ipu_flow flow[IPUV3_NUM_FLOWS];
		struct mutex mutex;
		int use_count;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 59 */;
	struct ipu_flow {
		struct ipu_dp foreground;
		struct ipu_dp background;
		enum ipu_color_space out_cs;
		void __iomem *base;
		struct ipu_dp_priv *priv;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 51 */;
	struct ipu_dp {
		u32 flow;
		bool in_use;
		bool foreground;
		enum ipu_color_space in_cs;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 44 */;
	struct ipu_dp_priv cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 42 */;
	struct device *cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 325 */;
	unsigned long cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 325 */;
	unsigned int cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 297 */;
	struct ipu_dp_priv *cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 281 */;
	struct ipu_soc *cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 279 */;
	bool cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 250 */;
	struct ipu_dp *cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 250 */;
	int cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 210 */;
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 130 */;
	enum ipu_color_space cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 128 */;
	struct ipu_flow *cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 127 */;
	void cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 127 */;
	u16 cocci_id/* drivers/gpu/ipu-v3/ipu-dp.c 114 */;
}
