cocci_test_suite() {
	u32 __iomem *cocci_id/* drivers/soc/fsl/dpaa2-console.c 72 */;
	u32 cocci_id/* drivers/soc/fsl/dpaa2-console.c 64 */;
	struct console_data *cocci_id/* drivers/soc/fsl/dpaa2-console.c 62 */;
	void cocci_id/* drivers/soc/fsl/dpaa2-console.c 62 */;
	struct resource cocci_id/* drivers/soc/fsl/dpaa2-console.c 60 */;
	struct console_data {
		void __iomem *map_addr;
		struct log_header __iomem *hdr;
		void __iomem *start_addr;
		void __iomem *end_addr;
		void __iomem *end_of_data;
		void __iomem *cur_ptr;
	} cocci_id/* drivers/soc/fsl/dpaa2-console.c 51 */;
	struct log_header {
		__le32 magic_word;
		char reserved[4];
		__le32 buf_start;
		__le32 buf_length;
		__le32 last_byte;
	} cocci_id/* drivers/soc/fsl/dpaa2-console.c 43 */;
	struct platform_driver cocci_id/* drivers/soc/fsl/dpaa2-console.c 316 */;
	const struct of_device_id cocci_id/* drivers/soc/fsl/dpaa2-console.c 309 */[];
	struct platform_device *cocci_id/* drivers/soc/fsl/dpaa2-console.c 268 */;
	struct miscdevice cocci_id/* drivers/soc/fsl/dpaa2-console.c 262 */;
	const struct file_operations cocci_id/* drivers/soc/fsl/dpaa2-console.c 255 */;
	void *cocci_id/* drivers/soc/fsl/dpaa2-console.c 198 */;
	loff_t *cocci_id/* drivers/soc/fsl/dpaa2-console.c 192 */;
	size_t cocci_id/* drivers/soc/fsl/dpaa2-console.c 192 */;
	char __user *cocci_id/* drivers/soc/fsl/dpaa2-console.c 191 */;
	ssize_t cocci_id/* drivers/soc/fsl/dpaa2-console.c 191 */;
	struct inode *cocci_id/* drivers/soc/fsl/dpaa2-console.c 175 */;
	struct file *cocci_id/* drivers/soc/fsl/dpaa2-console.c 175 */;
	int cocci_id/* drivers/soc/fsl/dpaa2-console.c 175 */;
	struct log_header __iomem *cocci_id/* drivers/soc/fsl/dpaa2-console.c 130 */;
	u64 cocci_id/* drivers/soc/fsl/dpaa2-console.c 104 */;
}
