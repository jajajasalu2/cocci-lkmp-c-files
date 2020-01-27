cocci_test_suite() {
	struct intel_scu_ipc_dev {
		struct device *dev;
		void __iomem *ipc_base;
		void __iomem *i2c_base;
		struct completion cmd_complete;
		u8 irq_mode;
	} cocci_id/* drivers/platform/x86/intel_scu_ipc.c 92 */;
	const struct intel_scu_ipc_pdata_t cocci_id/* drivers/platform/x86/intel_scu_ipc.c 73 */;
	struct pci_driver cocci_id/* drivers/platform/x86/intel_scu_ipc.c 683 */;
	const struct pci_device_id cocci_id/* drivers/platform/x86/intel_scu_ipc.c 675 */[];
	struct intel_scu_ipc_pdata_t {
		u32 i2c_base;
		u32 i2c_len;
		u8 irq_mode;
	} cocci_id/* drivers/platform/x86/intel_scu_ipc.c 67 */;
	struct intel_scu_ipc_pdata_t *cocci_id/* drivers/platform/x86/intel_scu_ipc.c 632 */;
	const struct pci_device_id *cocci_id/* drivers/platform/x86/intel_scu_ipc.c 628 */;
	struct pci_dev *cocci_id/* drivers/platform/x86/intel_scu_ipc.c 628 */;
	irqreturn_t cocci_id/* drivers/platform/x86/intel_scu_ipc.c 610 */;
	void *cocci_id/* drivers/platform/x86/intel_scu_ipc.c 610 */;
	u32 cocci_id/* drivers/platform/x86/intel_scu_ipc.c 515 */[4];
	u32 *cocci_id/* drivers/platform/x86/intel_scu_ipc.c 464 */;
	u8 cocci_id/* drivers/platform/x86/intel_scu_ipc.c 418 */[2];
	u8 cocci_id/* drivers/platform/x86/intel_scu_ipc.c 322 */;
	u16 cocci_id/* drivers/platform/x86/intel_scu_ipc.c 307 */[4];
	u8 *cocci_id/* drivers/platform/x86/intel_scu_ipc.c 291 */;
	u16 cocci_id/* drivers/platform/x86/intel_scu_ipc.c 290 */[2];
	u16 cocci_id/* drivers/platform/x86/intel_scu_ipc.c 288 */;
	u16 *cocci_id/* drivers/platform/x86/intel_scu_ipc.c 288 */;
	u8 cocci_id/* drivers/platform/x86/intel_scu_ipc.c 217 */[IPC_WWBUF_SIZE];
	u32 cocci_id/* drivers/platform/x86/intel_scu_ipc.c 168 */;
	struct intel_scu_ipc_dev *cocci_id/* drivers/platform/x86/intel_scu_ipc.c 166 */;
	int cocci_id/* drivers/platform/x86/intel_scu_ipc.c 166 */;
	void cocci_id/* drivers/platform/x86/intel_scu_ipc.c 121 */;
	struct intel_scu_ipc_dev cocci_id/* drivers/platform/x86/intel_scu_ipc.c 100 */;
}
