cocci_test_suite() {
	struct xgene_hwmon_dev {
		struct device *dev;
		struct mbox_chan *mbox_chan;
		struct mbox_client mbox_client;
		int mbox_idx;
		spinlock_t kfifo_lock;
		struct mutex rd_mutex;
		struct completion rd_complete;
		int resp_pending;
		struct slimpro_resp_msg sync_msg;
		struct work_struct workq;
		struct kfifo_rec_ptr_1 async_msg_fifo;
		struct device *hwmon_dev;
		bool temp_critical_alarm;
		phys_addr_t comm_base_addr;
		void *pcc_comm_addr;
		u64 usecs_lat;
	} cocci_id/* drivers/hwmon/xgene-hwmon.c 93 */;
	struct slimpro_resp_msg {
		u32 msg;
		u32 param1;
		u32 param2;
	}__packed cocci_id/* drivers/hwmon/xgene-hwmon.c 87 */;
	enum xgene_hwmon_version{XGENE_HWMON_V1=0, XGENE_HWMON_V2=1,} cocci_id/* drivers/hwmon/xgene-hwmon.c 82 */;
	struct xgene_hwmon_dev cocci_id/* drivers/hwmon/xgene-hwmon.c 80 */;
	struct platform_driver cocci_id/* drivers/hwmon/xgene-hwmon.c 787 */;
	const struct of_device_id cocci_id/* drivers/hwmon/xgene-hwmon.c 781 */[];
	void __force *cocci_id/* drivers/hwmon/xgene-hwmon.c 708 */;
	const struct acpi_device_id *cocci_id/* drivers/hwmon/xgene-hwmon.c 656 */;
	struct acpi_pcct_hw_reduced *cocci_id/* drivers/hwmon/xgene-hwmon.c 655 */;
	struct platform_device *cocci_id/* drivers/hwmon/xgene-hwmon.c 614 */;
	const struct acpi_device_id cocci_id/* drivers/hwmon/xgene-hwmon.c 606 */[];
	u16 *cocci_id/* drivers/hwmon/xgene-hwmon.c 598 */;
	struct mbox_client *cocci_id/* drivers/hwmon/xgene-hwmon.c 528 */;
	u32 *cocci_id/* drivers/hwmon/xgene-hwmon.c 452 */;
	struct slimpro_resp_msg cocci_id/* drivers/hwmon/xgene-hwmon.c 438 */;
	struct work_struct *cocci_id/* drivers/hwmon/xgene-hwmon.c 436 */;
	void cocci_id/* drivers/hwmon/xgene-hwmon.c 436 */;
	struct slimpro_resp_msg *cocci_id/* drivers/hwmon/xgene-hwmon.c 426 */;
	struct attribute *cocci_id/* drivers/hwmon/xgene-hwmon.c 403 */[];
	int cocci_id/* drivers/hwmon/xgene-hwmon.c 371 */;
	u32 cocci_id/* drivers/hwmon/xgene-hwmon.c 370 */;
	struct xgene_hwmon_dev *cocci_id/* drivers/hwmon/xgene-hwmon.c 369 */;
	char *cocci_id/* drivers/hwmon/xgene-hwmon.c 367 */;
	struct device_attribute *cocci_id/* drivers/hwmon/xgene-hwmon.c 366 */;
	struct device *cocci_id/* drivers/hwmon/xgene-hwmon.c 365 */;
	ssize_t cocci_id/* drivers/hwmon/xgene-hwmon.c 365 */;
	u32 cocci_id/* drivers/hwmon/xgene-hwmon.c 258 */[3];
	u16 cocci_id/* drivers/hwmon/xgene-hwmon.c 136 */;
	void *cocci_id/* drivers/hwmon/xgene-hwmon.c 134 */;
	struct acpi_pcct_shared_memory *cocci_id/* drivers/hwmon/xgene-hwmon.c 133 */;
}