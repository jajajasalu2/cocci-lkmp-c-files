cocci_test_suite() {
	const struct ic_task_regoffs cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 94 */[IC_NUM_TASKS];
	struct ic_task_bitfields {
		u32 ic_conf_en;
		u32 ic_conf_rot_en;
		u32 ic_conf_cmb_en;
		u32 ic_conf_csc1_en;
		u32 ic_conf_csc2_en;
		u32 ic_cmb_galpha_bit;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 85 */;
	struct ic_task_regoffs {
		u32 rsc;
		u32 tpmem_csc[2];
	} cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 80 */;
	void cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 735 */;
	struct device *cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 697 */;
	enum ipu_ic_task cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 659 */;
	unsigned long cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 636 */;
	enum ipu_rotate_mode cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 454 */;
	struct ipuv3_channel *cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 452 */;
	const struct ipu_ic_csc *cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 442 */;
	struct ipu_ic_csc cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 330 */;
	bool cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 326 */;
	const struct ipu_ic_colorspace *cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 325 */;
	struct ipu_soc *cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 222 */;
	struct ipu_ic_priv *cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 221 */;
	u32 *cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 218 */;
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 217 */;
	struct ipu_ic *cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 216 */;
	int cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 216 */;
	unsigned cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 164 */;
	struct ipu_ic_priv {
		void __iomem *base;
		void __iomem *tpmem_base;
		spinlock_t lock;
		struct ipu_soc *ipu;
		int use_count;
		int irt_use_count;
		struct ipu_ic task[IC_NUM_TASKS];
	} cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 154 */;
	struct ipu_ic {
		enum ipu_ic_task task;
		const struct ic_task_regoffs *reg;
		const struct ic_task_bitfields *bit;
		struct ipu_ic_colorspace in_cs;
		struct ipu_ic_colorspace g_in_cs;
		struct ipu_ic_colorspace out_cs;
		bool graphics;
		bool rotation;
		bool in_use;
		struct ipu_ic_priv *priv;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 138 */;
	struct ipu_ic_priv cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 136 */;
	const struct ic_task_bitfields cocci_id/* drivers/gpu/ipu-v3/ipu-ic.c 109 */[IC_NUM_TASKS];
}
