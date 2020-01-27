cocci_test_suite() {
	char *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 951 */;
	struct clk *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 949 */;
	const struct of_device_id cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 938 */[];
	struct ipu_devtype cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 890 */;
	struct ipu_devtype {
		const char *name;
		unsigned long cm_ofs;
		unsigned long cpmem_ofs;
		unsigned long srm_ofs;
		unsigned long tpm_ofs;
		unsigned long csi0_ofs;
		unsigned long csi1_ofs;
		unsigned long ic_ofs;
		unsigned long disp0_ofs;
		unsigned long disp1_ofs;
		unsigned long dc_tmpl_ofs;
		unsigned long vdi_ofs;
		enum ipuv3_type type;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 874 */;
	const struct fsu_link_info *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 781 */;
	int cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 781 */;
	const struct fsu_link_info cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 758 */[];
	struct fsu_link_info {
		struct fsu_link_reg_info src;
		struct fsu_link_reg_info sink;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 753 */;
	struct fsu_link_reg_info {
		int chno;
		u32 reg;
		u32 mask;
		u32 val;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 746 */;
	enum ipu_color_space cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 57 */;
	const struct {
		int chnum;
		u32 reg;
		int shift;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 358 */[];
	unsigned int cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 331 */;
	struct ipu_soc *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 330 */;
	struct ipuv3_channel *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 328 */;
	void cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 328 */;
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 29 */;
	int *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 233 */;
	enum ipu_rotate_mode cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 228 */;
	bool cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 202 */;
	enum ipu_rotate_mode *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 201 */;
	void __exit cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1556 */;
	int __init cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1550 */;
	struct platform_driver *const cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1542 */[];
	struct platform_driver cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1533 */;
	const struct ipu_devtype *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1380 */;
	struct resource *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1377 */;
	unsigned long cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1265 */[IPU_NUM_IRQS / 32];
	struct irq_chip_type *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1264 */;
	struct irq_chip_generic *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1263 */;
	struct device_node *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1221 */;
	struct platform_device *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1220 */;
	struct ipu_platform_reg *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1219 */;
	unsigned cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1210 */;
	struct device *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1209 */;
	unsigned long cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1207 */;
	struct ipu_platform_reg cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1168 */[];
	struct ipu_platform_reg {
		struct ipu_client_platformdata pdata;
		const char *name;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1162 */;
	void *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1148 */;
	enum ipu_channel_irq cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1126 */;
	const int cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1104 */[];
	struct irq_chip *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1103 */;
	struct irq_desc *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1100 */;
	const int *cocci_id/* drivers/gpu/ipu-v3/ipu-common.c 1068 */;
}
