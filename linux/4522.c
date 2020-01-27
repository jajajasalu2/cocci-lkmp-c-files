cocci_test_suite() {
	struct afu_irq {
		int id;
		int hw_irq;
		unsigned int virq;
		char *name;
		u64 trigger_page;
		irqreturn_t (*handler)(void *private);
		void (*free_private)(void *private);
		void *private;
	} cocci_id/* drivers/misc/ocxl/afu_irq.c 8 */;
	irqreturn_t cocci_id/* drivers/misc/ocxl/afu_irq.c 57 */;
	void *cocci_id/* drivers/misc/ocxl/afu_irq.c 57 */;
	int cocci_id/* drivers/misc/ocxl/afu_irq.c 57 */;
	void (*cocci_id/* drivers/misc/ocxl/afu_irq.c 31 */)(void *private);
	irqreturn_t (*cocci_id/* drivers/misc/ocxl/afu_irq.c 30 */)(void *private);
	u64 cocci_id/* drivers/misc/ocxl/afu_irq.c 197 */;
	struct ocxl_context *cocci_id/* drivers/misc/ocxl/afu_irq.c 154 */;
	struct afu_irq *cocci_id/* drivers/misc/ocxl/afu_irq.c 154 */;
	void cocci_id/* drivers/misc/ocxl/afu_irq.c 154 */;
	struct afu_irq cocci_id/* drivers/misc/ocxl/afu_irq.c 109 */;
	int *cocci_id/* drivers/misc/ocxl/afu_irq.c 104 */;
}
