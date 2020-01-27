cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/firmware/arm_scmi/driver.c 957 */;
	const struct of_device_id cocci_id/* drivers/firmware/arm_scmi/driver.c 950 */[];
	const struct scmi_desc cocci_id/* drivers/firmware/arm_scmi/driver.c 943 */;
	struct scmi_desc {
		int max_rx_timeout_ms;
		int max_msg;
		int max_msg_size;
	} cocci_id/* drivers/firmware/arm_scmi/driver.c 88 */;
	const struct scmi_desc *cocci_id/* drivers/firmware/arm_scmi/driver.c 831 */;
	struct platform_device *cocci_id/* drivers/firmware/arm_scmi/driver.c 827 */;
	struct scmi_device *cocci_id/* drivers/firmware/arm_scmi/driver.c 808 */;
	int cocci_id/* drivers/firmware/arm_scmi/driver.c 806 */;
	struct scmi_info *cocci_id/* drivers/firmware/arm_scmi/driver.c 805 */;
	struct device_node *cocci_id/* drivers/firmware/arm_scmi/driver.c 805 */;
	struct scmi_xfers_info {
		struct scmi_xfer *xfer_block;
		unsigned long *xfer_alloc_table;
		spinlock_t xfer_lock;
	} cocci_id/* drivers/firmware/arm_scmi/driver.c 74 */;
	const char *cocci_id/* drivers/firmware/arm_scmi/driver.c 732 */;
	struct idr *cocci_id/* drivers/firmware/arm_scmi/driver.c 731 */;
	struct mbox_client *cocci_id/* drivers/firmware/arm_scmi/driver.c 730 */;
	resource_size_t cocci_id/* drivers/firmware/arm_scmi/driver.c 727 */;
	struct resource cocci_id/* drivers/firmware/arm_scmi/driver.c 726 */;
	long cocci_id/* drivers/firmware/arm_scmi/driver.c 696 */;
	struct scmi_info cocci_id/* drivers/firmware/arm_scmi/driver.c 635 */;
	struct list_head *cocci_id/* drivers/firmware/arm_scmi/driver.c 629 */;
	struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/driver.c 627 */;
	u8 cocci_id/* drivers/firmware/arm_scmi/driver.c 602 */;
	bool cocci_id/* drivers/firmware/arm_scmi/driver.c 601 */;
	u8 *cocci_id/* drivers/firmware/arm_scmi/driver.c 594 */;
	__le32 *cocci_id/* drivers/firmware/arm_scmi/driver.c 575 */;
	u32 *cocci_id/* drivers/firmware/arm_scmi/driver.c 572 */;
	struct scmi_xfer **cocci_id/* drivers/firmware/arm_scmi/driver.c 529 */;
	void *cocci_id/* drivers/firmware/arm_scmi/driver.c 465 */;
	ktime_t cocci_id/* drivers/firmware/arm_scmi/driver.c 452 */;
	enum scmi_error_codes{SCMI_SUCCESS=0, SCMI_ERR_SUPPORT=-1, SCMI_ERR_PARAMS=-2, SCMI_ERR_ACCESS=-3, SCMI_ERR_ENTRY=-4, SCMI_ERR_RANGE=-5, SCMI_ERR_BUSY=-6, SCMI_ERR_COMMS=-7, SCMI_ERR_GENERIC=-8, SCMI_ERR_HARDWARE=-9, SCMI_ERR_PROTOCOL=-10, SCMI_ERR_MAX,} cocci_id/* drivers/firmware/arm_scmi/driver.c 45 */;
	struct scmi_chan_info *cocci_id/* drivers/firmware/arm_scmi/driver.c 436 */;
	struct device *cocci_id/* drivers/firmware/arm_scmi/driver.c 435 */;
	const struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/driver.c 430 */;
	const struct scmi_chan_info *cocci_id/* drivers/firmware/arm_scmi/driver.c 412 */;
	u16 cocci_id/* drivers/firmware/arm_scmi/driver.c 350 */;
	unsigned long cocci_id/* drivers/firmware/arm_scmi/driver.c 322 */;
	struct scmi_xfers_info *cocci_id/* drivers/firmware/arm_scmi/driver.c 320 */;
	struct scmi_xfer *cocci_id/* drivers/firmware/arm_scmi/driver.c 320 */;
	void cocci_id/* drivers/firmware/arm_scmi/driver.c 319 */;
	u32 cocci_id/* drivers/firmware/arm_scmi/driver.c 216 */;
	struct scmi_msg_hdr *cocci_id/* drivers/firmware/arm_scmi/driver.c 216 */;
	size_t cocci_id/* drivers/firmware/arm_scmi/driver.c 202 */;
	struct scmi_shared_mem __iomem *cocci_id/* drivers/firmware/arm_scmi/driver.c 198 */;
	const int cocci_id/* drivers/firmware/arm_scmi/driver.c 162 */[];
	struct scmi_shared_mem {
		__le32 reserved;
		__le32 channel_status;
#define SCMI_SHMEM_CHAN_STAT_CHANNEL_ERROR BIT(1)
#define SCMI_SHMEM_CHAN_STAT_CHANNEL_FREE BIT(0)
				__le32 reserved1[2];
		__le32 flags;
#define SCMI_SHMEM_FLAG_INTR_ENABLED BIT(0)
			__le32 length;
		__le32 msg_header;
		u8 msg_payload[0];
	} cocci_id/* drivers/firmware/arm_scmi/driver.c 149 */;
	struct scmi_chan_info cocci_id/* drivers/firmware/arm_scmi/driver.c 141 */;
	struct scmi_info {
		struct device *dev;
		const struct scmi_desc *desc;
		struct scmi_revision_info version;
		struct scmi_handle handle;
		struct scmi_xfers_info tx_minfo;
		struct idr tx_idr;
		struct idr rx_idr;
		u8 *protocols_imp;
		struct list_head node;
		int users;
	} cocci_id/* drivers/firmware/arm_scmi/driver.c 128 */;
	struct scmi_chan_info {
		struct mbox_client cl;
		struct mbox_chan *chan;
		void __iomem *payload;
		struct device *dev;
		struct scmi_handle *handle;
	} cocci_id/* drivers/firmware/arm_scmi/driver.c 104 */;
}
