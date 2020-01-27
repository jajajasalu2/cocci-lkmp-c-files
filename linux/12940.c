cocci_test_suite() {
	u32 cocci_id/* drivers/rapidio/rio.c 956 */;
	struct rio_dev **cocci_id/* drivers/rapidio/rio.c 954 */;
	int *cocci_id/* drivers/rapidio/rio.c 954 */;
	struct rio_mport_attr *cocci_id/* drivers/rapidio/rio.c 91 */;
	u8 cocci_id/* drivers/rapidio/rio.c 900 */;
	dma_addr_t *cocci_id/* drivers/rapidio/rio.c 734 */;
	u64 cocci_id/* drivers/rapidio/rio.c 690 */;
	dma_addr_t cocci_id/* drivers/rapidio/rio.c 689 */;
	int (*cocci_id/* drivers/rapidio/rio.c 621 */)(struct rio_dev *rdev,
						       union rio_pw_msg *msg,
						       int step);
	unsigned char cocci_id/* drivers/rapidio/rio.c 61 */;
	struct rio_pwrite *cocci_id/* drivers/rapidio/rio.c 566 */;
	int (*cocci_id/* drivers/rapidio/rio.c 563 */)(struct rio_mport *mport,
						       void *context,
						       union rio_pw_msg *msg,
						       int step);
	struct rio_mport *cocci_id/* drivers/rapidio/rio.c 562 */;
	void *cocci_id/* drivers/rapidio/rio.c 562 */;
	struct resource *cocci_id/* drivers/rapidio/rio.c 543 */;
	struct resource cocci_id/* drivers/rapidio/rio.c 518 */;
	int cocci_id/* drivers/rapidio/rio.c 49 */;
	int cocci_id/* drivers/rapidio/rio.c 48 */[RIO_MAX_MPORTS];
	struct rio_dbell *cocci_id/* drivers/rapidio/rio.c 477 */;
	void (*cocci_id/* drivers/rapidio/rio.c 437 */)(struct rio_mport *mport,
							void *dev_id, u16 src,
							u16 dst, u16 info);
	struct rio_pwrite {
		struct list_head node;
		int (*pwcback)(struct rio_mport *mport, void *context,
			       union rio_pw_msg *msg, int step);
		void *context;
	} cocci_id/* drivers/rapidio/rio.c 35 */;
	void (*cocci_id/* drivers/rapidio/rio.c 236 */)(struct rio_mport *mport,
							void *dev_id,
							int mbox, int slot);
	struct device *cocci_id/* drivers/rapidio/rio.c 2280 */;
	struct rio_scan_node *cocci_id/* drivers/rapidio/rio.c 2244 */;
	struct rio_disc_work cocci_id/* drivers/rapidio/rio.c 2134 */;
	struct rio_disc_work *cocci_id/* drivers/rapidio/rio.c 2132 */;
	struct work_struct *cocci_id/* drivers/rapidio/rio.c 2130 */;
	void cocci_id/* drivers/rapidio/rio.c 2130 */;
	struct rio_disc_work {
		struct work_struct work;
		struct rio_mport *mport;
	} cocci_id/* drivers/rapidio/rio.c 2125 */;
	struct workqueue_struct *cocci_id/* drivers/rapidio/rio.c 2123 */;
	enum rio_device_state cocci_id/* drivers/rapidio/rio.c 203 */;
	struct rio_scan *cocci_id/* drivers/rapidio/rio.c 1965 */;
	enum dma_transfer_direction cocci_id/* drivers/rapidio/rio.c 1920 */;
	unsigned long cocci_id/* drivers/rapidio/rio.c 1920 */;
	struct rio_dma_data *cocci_id/* drivers/rapidio/rio.c 1919 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/rapidio/rio.c 1918 */;
	struct rio_dma_ext cocci_id/* drivers/rapidio/rio.c 1885 */;
	u16 cocci_id/* drivers/rapidio/rio.c 1882 */;
	dma_cap_mask_t cocci_id/* drivers/rapidio/rio.c 1834 */;
	struct rio_mport cocci_id/* drivers/rapidio/rio.c 1822 */;
	bool cocci_id/* drivers/rapidio/rio.c 1817 */;
	struct dma_chan *cocci_id/* drivers/rapidio/rio.c 1817 */;
	u8 *cocci_id/* drivers/rapidio/rio.c 1733 */;
	struct rio_dev *cocci_id/* drivers/rapidio/rio.c 172 */;
	struct rio_switch_ops *cocci_id/* drivers/rapidio/rio.c 1683 */;
	struct list_head *cocci_id/* drivers/rapidio/rio.c 1435 */;
	struct rio_net *cocci_id/* drivers/rapidio/rio.c 123 */;
	union rio_pw_msg *cocci_id/* drivers/rapidio/rio.c 1170 */;
	u32 *cocci_id/* drivers/rapidio/rio.c 1028 */;
}
