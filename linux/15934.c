cocci_test_suite() {
	u32 cocci_id/* drivers/staging/uwb/whc-rc.c 84 */;
	struct device *cocci_id/* drivers/staging/uwb/whc-rc.c 83 */;
	struct whcrc *cocci_id/* drivers/staging/uwb/whc-rc.c 82 */;
	const struct uwb_rccb *cocci_id/* drivers/staging/uwb/whc-rc.c 79 */;
	size_t cocci_id/* drivers/staging/uwb/whc-rc.c 79 */;
	struct uwb_rc *cocci_id/* drivers/staging/uwb/whc-rc.c 78 */;
	int cocci_id/* drivers/staging/uwb/whc-rc.c 78 */;
	struct whcrc {
		struct umc_dev *umc_dev;
		struct uwb_rc *uwb_rc;
		unsigned long area;
		void __iomem *rc_base;
		size_t rc_len;
		spinlock_t irq_lock;
		void *evt_buf,*cmd_buf;
		dma_addr_t evt_dma_buf,cmd_dma_buf;
		wait_queue_head_t cmd_wq;
		struct work_struct event_work;
	} cocci_id/* drivers/staging/uwb/whc-rc.c 49 */;
	void __exit cocci_id/* drivers/staging/uwb/whc-rc.c 459 */;
	void cocci_id/* drivers/staging/uwb/whc-rc.c 459 */;
	int __init cocci_id/* drivers/staging/uwb/whc-rc.c 453 */;
	struct umc_driver cocci_id/* drivers/staging/uwb/whc-rc.c 444 */;
	struct pci_device_id __used cocci_id/* drivers/staging/uwb/whc-rc.c 438 */[];
	struct umc_dev *cocci_id/* drivers/staging/uwb/whc-rc.c 429 */;
	irqreturn_t cocci_id/* drivers/staging/uwb/whc-rc.c 175 */;
	void *cocci_id/* drivers/staging/uwb/whc-rc.c 175 */;
	u64 cocci_id/* drivers/staging/uwb/whc-rc.c 159 */;
	struct whcrc cocci_id/* drivers/staging/uwb/whc-rc.c 157 */;
	struct work_struct *cocci_id/* drivers/staging/uwb/whc-rc.c 155 */;
}
