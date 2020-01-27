cocci_test_suite() {
	struct fsl_lbc_bank *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 86 */;
	char *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 82 */;
	struct device_attribute *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 81 */;
	struct device *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 81 */;
	ssize_t cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 81 */;
	struct attribute *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 74 */[];
	ssize_t cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 68 */(struct device *dev,
								 struct device_attribute *attr,
								 const char *buf,
								 size_t count);
	ssize_t cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 66 */(struct device *dev,
								 struct device_attribute *attr,
								 char *buf);
	struct fsl_elbc_gpcm {
		struct device *dev;
		struct fsl_lbc_regs __iomem *lbc;
		u32 bank;
		const char *name;
		void (*init)(struct uio_info *info);
		void (*shutdown)(struct uio_info *info, bool init_err);
		irqreturn_t (*irq_handler)(int irq, struct uio_info *info);
	} cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 55 */;
	struct platform_driver cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 465 */;
	const struct of_device_id cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 459 */[];
	unsigned long long cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 423 */;
	unsigned int cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 316 */;
	struct resource cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 315 */;
	struct platform_device *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 309 */;
	const char *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 254 */;
	char **cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 252 */;
	unsigned int *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 252 */;
	u32 *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 251 */;
	struct device_node *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 250 */;
	u32 cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 221 */;
	struct resource *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 220 */;
	struct fsl_elbc_gpcm *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 219 */;
	int cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 219 */;
	bool cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 194 */;
	const void *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 181 */;
	unsigned long cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 179 */;
	struct uio_info *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 177 */;
	void cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 177 */;
	void __iomem *cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 158 */;
	irqreturn_t cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 156 */;
	size_t cocci_id/* drivers/uio/uio_fsl_elbc_gpcm.c 101 */;
}
