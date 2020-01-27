cocci_test_suite() {
	int __init cocci_id/* arch/powerpc/platforms/ps3/device-init.c 946 */;
	enum ps3_bus_type cocci_id/* arch/powerpc/platforms/ps3/device-init.c 896 */;
	struct notifier_block cocci_id/* arch/powerpc/platforms/ps3/device-init.c 887 */;
	struct notifier_block *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 879 */;
	struct ps3_notify_event *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 780 */;
	struct ps3_notify_cmd *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 779 */;
	struct ps3_notification_device cocci_id/* arch/powerpc/platforms/ps3/device-init.c 774 */;
	struct task_struct *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 760 */;
	const char *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 724 */;
	struct ps3_notification_device *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 697 */;
	irqreturn_t cocci_id/* arch/powerpc/platforms/ps3/device-init.c 695 */;
	void *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 695 */;
	struct ps3_notify_event {
		u64 event_type;
		u64 bus_id;
		u64 dev_id;
		u64 dev_type;
		u64 dev_port;
	} cocci_id/* arch/powerpc/platforms/ps3/device-init.c 687 */;
	struct ps3_notify_cmd {
		u64 operation_code;
		u64 event_mask;
	} cocci_id/* arch/powerpc/platforms/ps3/device-init.c 682 */;
	enum ps3_notify_type{notify_device_ready=0, notify_region_probe=1, notify_region_update=2,} cocci_id/* arch/powerpc/platforms/ps3/device-init.c 676 */;
	struct ps3_notification_device {
		struct ps3_system_bus_device sbd;
		spinlock_t lock;
		u64 tag;
		u64 lv1_status;
		struct completion done;
	} cocci_id/* arch/powerpc/platforms/ps3/device-init.c 668 */;
	unsigned long cocci_id/* arch/powerpc/platforms/ps3/device-init.c 637 */;
	unsigned int cocci_id/* arch/powerpc/platforms/ps3/device-init.c 636 */;
	int cocci_id/* arch/powerpc/platforms/ps3/device-init.c 635 */;
	struct ps3_repository_device cocci_id/* arch/powerpc/platforms/ps3/device-init.c 634 */;
	u64 cocci_id/* arch/powerpc/platforms/ps3/device-init.c 632 */;
	void cocci_id/* arch/powerpc/platforms/ps3/device-init.c 632 */;
	const struct ps3_repository_device *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 547 */;
	struct layout cocci_id/* arch/powerpc/platforms/ps3/device-init.c 482 */;
	struct layout {
		struct ps3_system_bus_device dev;
	} *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 476 */;
	struct layout {
		struct ps3_system_bus_device dev;
		struct ps3_dma_region d_region;
		struct ps3_mmio_region m_region;
	} *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 440 */;
	struct ps3_storage_device *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 324 */;
	enum ps3_match_id cocci_id/* arch/powerpc/platforms/ps3/device-init.c 321 */;
	struct ps3_system_bus_device *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 28 */;
	enum ps3_reg_type cocci_id/* arch/powerpc/platforms/ps3/device-init.c 182 */;
	enum ps3_interrupt_type cocci_id/* arch/powerpc/platforms/ps3/device-init.c 182 */;
	int __ref cocci_id/* arch/powerpc/platforms/ps3/device-init.c 180 */;
	struct layout {
		struct ps3_system_bus_device dev;
		struct ps3_dma_region d_region;
	} *cocci_id/* arch/powerpc/platforms/ps3/device-init.c 117 */;
}
