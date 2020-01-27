cocci_test_suite() {
	const char *cocci_id/* drivers/platform/x86/intel_punit_ipc.c 82 */;
	struct {
		struct device *dev;
		struct mutex lock;
		int irq;
		struct completion cmd_complete;
		void __iomem *base[RESERVED_IPC][BASE_MAX];
		IPC_TYPE type;
	} cocci_id/* drivers/platform/x86/intel_punit_ipc.c 40 */;
	enum{BASE_DATA=0, BASE_IFACE, BASE_MAX,} cocci_id/* drivers/platform/x86/intel_punit_ipc.c 34 */;
	void __exit cocci_id/* drivers/platform/x86/intel_punit_ipc.c 330 */;
	void cocci_id/* drivers/platform/x86/intel_punit_ipc.c 330 */;
	int __init cocci_id/* drivers/platform/x86/intel_punit_ipc.c 325 */;
	struct platform_driver cocci_id/* drivers/platform/x86/intel_punit_ipc.c 316 */;
	const struct acpi_device_id cocci_id/* drivers/platform/x86/intel_punit_ipc.c 311 */[];
	void __iomem *cocci_id/* drivers/platform/x86/intel_punit_ipc.c 227 */;
	struct platform_device *cocci_id/* drivers/platform/x86/intel_punit_ipc.c 225 */;
	int cocci_id/* drivers/platform/x86/intel_punit_ipc.c 225 */;
	IPC_DEV *cocci_id/* drivers/platform/x86/intel_punit_ipc.c 219 */;
	irqreturn_t cocci_id/* drivers/platform/x86/intel_punit_ipc.c 217 */;
	void *cocci_id/* drivers/platform/x86/intel_punit_ipc.c 217 */;
	u32 cocci_id/* drivers/platform/x86/intel_punit_ipc.c 179 */;
	u32 *cocci_id/* drivers/platform/x86/intel_punit_ipc.c 179 */;
	IPC_TYPE cocci_id/* drivers/platform/x86/intel_punit_ipc.c 102 */;
}
