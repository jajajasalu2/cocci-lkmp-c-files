cocci_test_suite() {
	struct ntb_msi {
		u64 base_addr;
		u64 end_addr;
		void (*desc_changed)(void *ctx);
		u32 __iomem *peer_mws[];
	} cocci_id/* drivers/ntb/msi.c 9 */;
	phys_addr_t *cocci_id/* drivers/ntb/msi.c 395 */;
	struct ntb_msi_desc *cocci_id/* drivers/ntb/msi.c 394 */;
	size_t cocci_id/* drivers/ntb/msi.c 36 */;
	resource_size_t cocci_id/* drivers/ntb/msi.c 35 */;
	phys_addr_t cocci_id/* drivers/ntb/msi.c 34 */;
	unsigned int cocci_id/* drivers/ntb/msi.c 337 */;
	struct device *cocci_id/* drivers/ntb/msi.c 320 */;
	void (*cocci_id/* drivers/ntb/msi.c 32 */)(void *ctx);
	struct irq_desc *cocci_id/* drivers/ntb/msi.c 285 */;
	const char *cocci_id/* drivers/ntb/msi.c 281 */;
	irq_handler_t cocci_id/* drivers/ntb/msi.c 279 */;
	struct ntb_msi_devres cocci_id/* drivers/ntb/msi.c 241 */;
	struct ntb_msi_devres *cocci_id/* drivers/ntb/msi.c 219 */;
	void *cocci_id/* drivers/ntb/msi.c 217 */;
	uint64_t cocci_id/* drivers/ntb/msi.c 201 */;
	u64 cocci_id/* drivers/ntb/msi.c 198 */;
	struct msi_desc *cocci_id/* drivers/ntb/msi.c 195 */;
	struct ntb_msi_devres {
		struct ntb_dev *ntb;
		struct msi_desc *entry;
		struct ntb_msi_desc *msi_desc;
	} cocci_id/* drivers/ntb/msi.c 189 */;
	int cocci_id/* drivers/ntb/msi.c 176 */;
	struct ntb_dev *cocci_id/* drivers/ntb/msi.c 174 */;
	void cocci_id/* drivers/ntb/msi.c 174 */;
}
