cocci_test_suite() {
	enum ch_state{HIDMA_CH_DISABLED=0, HIDMA_CH_ENABLED=1, HIDMA_CH_RUNNING=2, HIDMA_CH_SUSPENDED=3, HIDMA_CH_STOPPED=4,} cocci_id/* drivers/dma/qcom/hidma_ll.c 92 */;
	enum ch_command{HIDMA_CH_DISABLE=0, HIDMA_CH_ENABLE=1, HIDMA_CH_SUSPEND=2, HIDMA_CH_RESET=9,} cocci_id/* drivers/dma/qcom/hidma_ll.c 85 */;
	enum dma_status cocci_id/* drivers/dma/qcom/hidma_ll.c 834 */;
	unsigned long cocci_id/* drivers/dma/qcom/hidma_ll.c 795 */;
	struct hidma_tre cocci_id/* drivers/dma/qcom/hidma_ll.c 735 */;
	struct hidma_lldev cocci_id/* drivers/dma/qcom/hidma_ll.c 728 */;
	size_t cocci_id/* drivers/dma/qcom/hidma_ll.c 716 */;
	void __iomem *cocci_id/* drivers/dma/qcom/hidma_ll.c 710 */;
	struct device *cocci_id/* drivers/dma/qcom/hidma_ll.c 709 */;
	u64 cocci_id/* drivers/dma/qcom/hidma_ll.c 636 */;
	dma_addr_t cocci_id/* drivers/dma/qcom/hidma_ll.c 599 */;
	bool cocci_id/* drivers/dma/qcom/hidma_ll.c 507 */;
	irqreturn_t cocci_id/* drivers/dma/qcom/hidma_ll.c 424 */;
	void *cocci_id/* drivers/dma/qcom/hidma_ll.c 424 */;
	u8 cocci_id/* drivers/dma/qcom/hidma_ll.c 303 */;
	struct hidma_lldev *cocci_id/* drivers/dma/qcom/hidma_ll.c 303 */;
	void cocci_id/* drivers/dma/qcom/hidma_ll.c 303 */;
	u32 *cocci_id/* drivers/dma/qcom/hidma_ll.c 258 */;
	u32 cocci_id/* drivers/dma/qcom/hidma_ll.c 239 */;
	int cocci_id/* drivers/dma/qcom/hidma_ll.c 237 */;
	unsigned int cocci_id/* drivers/dma/qcom/hidma_ll.c 137 */;
	void (*cocci_id/* drivers/dma/qcom/hidma_ll.c 135 */)(void *data);
	const char *cocci_id/* drivers/dma/qcom/hidma_ll.c 134 */;
	struct hidma_tre *cocci_id/* drivers/dma/qcom/hidma_ll.c 118 */;
	enum err_code{HIDMA_EVRE_STATUS_COMPLETE=1, HIDMA_EVRE_STATUS_ERROR=4,} cocci_id/* drivers/dma/qcom/hidma_ll.c 100 */;
}
