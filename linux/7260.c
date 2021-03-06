cocci_test_suite() {
	const void *cocci_id/* drivers/bluetooth/hci_intel.c 979 */;
	const struct h4_recv_pkt cocci_id/* drivers/bluetooth/hci_intel.c 972 */[];
	struct hci_lpm_pkt *cocci_id/* drivers/bluetooth/hci_intel.c 933 */;
	u8 cocci_id/* drivers/bluetooth/hci_intel.c 75 */;
	unsigned int cocci_id/* drivers/bluetooth/hci_intel.c 75 */;
	struct intel_data {
		struct sk_buff *rx_skb;
		struct sk_buff_head txq;
		struct work_struct busy_work;
		struct hci_uart *hu;
		unsigned long flags;
	} cocci_id/* drivers/bluetooth/hci_intel.c 67 */;
	struct intel_device {
		struct list_head list;
		struct platform_device *pdev;
		struct gpio_desc *reset;
		struct hci_uart *hu;
		struct mutex hu_lock;
		int irq;
	} cocci_id/* drivers/bluetooth/hci_intel.c 55 */;
	unsigned long long cocci_id/* drivers/bluetooth/hci_intel.c 541 */;
	ktime_t cocci_id/* drivers/bluetooth/hci_intel.c 540 */;
	u32 cocci_id/* drivers/bluetooth/hci_intel.c 539 */;
	char cocci_id/* drivers/bluetooth/hci_intel.c 538 */[64];
	const struct firmware *cocci_id/* drivers/bluetooth/hci_intel.c 537 */;
	struct intel_boot_params cocci_id/* drivers/bluetooth/hci_intel.c 535 */;
	struct intel_version cocci_id/* drivers/bluetooth/hci_intel.c 534 */;
	struct hci_lpm_pkt {
		__u8 opcode;
		__u8 dlen;
		__u8 data[0];
	}__packed cocci_id/* drivers/bluetooth/hci_intel.c 49 */;
	u8 cocci_id/* drivers/bluetooth/hci_intel.c 472 */[];
	struct hci_ev_cmd_complete *cocci_id/* drivers/bluetooth/hci_intel.c 447 */;
	struct hci_event_hdr *cocci_id/* drivers/bluetooth/hci_intel.c 446 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/hci_intel.c 445 */;
	__u16 cocci_id/* drivers/bluetooth/hci_intel.c 443 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/hci_intel.c 443 */;
	int cocci_id/* drivers/bluetooth/hci_intel.c 443 */;
	struct hci_uart *cocci_id/* drivers/bluetooth/hci_intel.c 414 */;
	struct intel_device cocci_id/* drivers/bluetooth/hci_intel.c 375 */;
	struct intel_device *cocci_id/* drivers/bluetooth/hci_intel.c 375 */;
	struct intel_data cocci_id/* drivers/bluetooth/hci_intel.c 366 */;
	struct intel_data *cocci_id/* drivers/bluetooth/hci_intel.c 366 */;
	struct list_head *cocci_id/* drivers/bluetooth/hci_intel.c 365 */;
	struct work_struct *cocci_id/* drivers/bluetooth/hci_intel.c 363 */;
	void cocci_id/* drivers/bluetooth/hci_intel.c 363 */;
	bool cocci_id/* drivers/bluetooth/hci_intel.c 289 */;
	irqreturn_t cocci_id/* drivers/bluetooth/hci_intel.c 270 */;
	const u8 cocci_id/* drivers/bluetooth/hci_intel.c 244 */[];
	int __exit cocci_id/* drivers/bluetooth/hci_intel.c 1238 */;
	int __init cocci_id/* drivers/bluetooth/hci_intel.c 1231 */;
	struct platform_driver cocci_id/* drivers/bluetooth/hci_intel.c 1221 */;
	struct gpio_desc *cocci_id/* drivers/bluetooth/hci_intel.c 1171 */;
	struct platform_device *cocci_id/* drivers/bluetooth/hci_intel.c 1146 */;
	const struct acpi_gpio_mapping cocci_id/* drivers/bluetooth/hci_intel.c 1140 */[];
	const struct acpi_gpio_params cocci_id/* drivers/bluetooth/hci_intel.c 1138 */;
	struct device *cocci_id/* drivers/bluetooth/hci_intel.c 1121 */;
	const struct acpi_device_id cocci_id/* drivers/bluetooth/hci_intel.c 1077 */[];
	const struct hci_uart_proto cocci_id/* drivers/bluetooth/hci_intel.c 1060 */;
	struct hci_command_hdr *cocci_id/* drivers/bluetooth/hci_intel.c 1042 */;
	void *cocci_id/* drivers/bluetooth/hci_intel.c 1042 */;
}
