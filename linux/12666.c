cocci_test_suite() {
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-smfc.c 60 */;
	struct ipu_smfc_priv {
		void __iomem *base;
		spinlock_t lock;
		struct ipu_soc *ipu;
		struct ipu_smfc channel[4];
		int use_count;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-smfc.c 23 */;
	struct ipu_soc *cocci_id/* drivers/gpu/ipu-v3/ipu-smfc.c 200 */;
	void cocci_id/* drivers/gpu/ipu-v3/ipu-smfc.c 200 */;
	struct device *cocci_id/* drivers/gpu/ipu-v3/ipu-smfc.c 172 */;
	struct ipu_smfc {
		struct ipu_smfc_priv *priv;
		int chno;
		bool inuse;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-smfc.c 17 */;
	unsigned int cocci_id/* drivers/gpu/ipu-v3/ipu-smfc.c 135 */;
	unsigned long cocci_id/* drivers/gpu/ipu-v3/ipu-smfc.c 117 */;
	struct ipu_smfc_priv *cocci_id/* drivers/gpu/ipu-v3/ipu-smfc.c 116 */;
	struct ipu_smfc *cocci_id/* drivers/gpu/ipu-v3/ipu-smfc.c 114 */;
	int cocci_id/* drivers/gpu/ipu-v3/ipu-smfc.c 114 */;
}
