cocci_test_suite() {
	const struct dmi_system_id *cocci_id/* drivers/bluetooth/hci_bcm.c 978 */;
	struct device *cocci_id/* drivers/bluetooth/hci_bcm.c 958 */;
	struct clk *cocci_id/* drivers/bluetooth/hci_bcm.c 958 */;
	u64 *cocci_id/* drivers/bluetooth/hci_bcm.c 931 */;
	const union acpi_object *cocci_id/* drivers/bluetooth/hci_bcm.c 921 */;
	struct acpi_device *cocci_id/* drivers/bluetooth/hci_bcm.c 920 */;
	bool cocci_id/* drivers/bluetooth/hci_bcm.c 901 */;
	struct acpi_resource_uart_serialbus *cocci_id/* drivers/bluetooth/hci_bcm.c 867 */;
	struct acpi_resource_gpio *cocci_id/* drivers/bluetooth/hci_bcm.c 866 */;
	struct acpi_resource_extended_irq *cocci_id/* drivers/bluetooth/hci_bcm.c 865 */;
	struct acpi_resource *cocci_id/* drivers/bluetooth/hci_bcm.c 862 */;
	const struct acpi_gpio_mapping cocci_id/* drivers/bluetooth/hci_bcm.c 855 */[];
	const struct acpi_gpio_params cocci_id/* drivers/bluetooth/hci_bcm.c 844 */;
	const struct dmi_system_id cocci_id/* drivers/bluetooth/hci_bcm.c 830 */[];
	struct bcm_device {
		struct hci_uart serdev_hu;
		struct list_head list;
		struct device *dev;
		const char *name;
		struct gpio_desc *device_wakeup;
		struct gpio_desc *shutdown;
		int (*set_device_wakeup)(struct bcm_device *, bool);
		int (*set_shutdown)(struct bcm_device *, bool);
#ifdef CONFIG_ACPI
		acpi_handle btlp,btpu,btpd;
		int gpio_count;
		int gpio_int_idx;
#endif
		struct clk *txco_clk;
		struct clk *lpo_clk;
		struct regulator_bulk_data supplies[BCM_NUM_SUPPLIES];
		bool res_enabled;
		u32 init_speed;
		u32 oper_speed;
		int irq;
		bool irq_active_low;
#ifdef CONFIG_PM
		struct hci_uart *hu;
		bool is_suspended;
#endif
	} cocci_id/* drivers/bluetooth/hci_bcm.c 83 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/hci_bcm.c 671 */;
	const void *cocci_id/* drivers/bluetooth/hci_bcm.c 630 */;
	const struct h4_recv_pkt cocci_id/* drivers/bluetooth/hci_bcm.c 620 */[];
	const struct firmware *cocci_id/* drivers/bluetooth/hci_bcm.c 529 */;
	char cocci_id/* drivers/bluetooth/hci_bcm.c 528 */[64];
	struct bcm_data *cocci_id/* drivers/bluetooth/hci_bcm.c 473 */;
	struct hci_uart *cocci_id/* drivers/bluetooth/hci_bcm.c 471 */;
	struct bcm_set_sleep_mode cocci_id/* drivers/bluetooth/hci_bcm.c 356 */;
	const struct bcm_set_sleep_mode cocci_id/* drivers/bluetooth/hci_bcm.c 336 */;
	irqreturn_t cocci_id/* drivers/bluetooth/hci_bcm.c 284 */;
	void *cocci_id/* drivers/bluetooth/hci_bcm.c 284 */;
	struct bcm_device cocci_id/* drivers/bluetooth/hci_bcm.c 202 */;
	struct list_head *cocci_id/* drivers/bluetooth/hci_bcm.c 193 */;
	struct bcm_write_uart_clock_setting cocci_id/* drivers/bluetooth/hci_bcm.c 148 */;
	int __exit cocci_id/* drivers/bluetooth/hci_bcm.c 1456 */;
	void cocci_id/* drivers/bluetooth/hci_bcm.c 1456 */;
	struct bcm_update_uart_baud_rate cocci_id/* drivers/bluetooth/hci_bcm.c 145 */;
	int __init cocci_id/* drivers/bluetooth/hci_bcm.c 1445 */;
	struct serdev_device_driver cocci_id/* drivers/bluetooth/hci_bcm.c 1434 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/hci_bcm.c 143 */;
	const struct of_device_id cocci_id/* drivers/bluetooth/hci_bcm.c 1422 */[];
	unsigned int cocci_id/* drivers/bluetooth/hci_bcm.c 141 */;
	struct serdev_device *cocci_id/* drivers/bluetooth/hci_bcm.c 1374 */;
	struct platform_driver cocci_id/* drivers/bluetooth/hci_bcm.c 1364 */;
	const struct acpi_device_id cocci_id/* drivers/bluetooth/hci_bcm.c 1186 */[];
	struct bcm_data {
		struct sk_buff *rx_skb;
		struct sk_buff_head txq;
		struct bcm_device *dev;
	} cocci_id/* drivers/bluetooth/hci_bcm.c 118 */;
	const struct hci_uart_proto cocci_id/* drivers/bluetooth/hci_bcm.c 1170 */;
	struct platform_device *cocci_id/* drivers/bluetooth/hci_bcm.c 1119 */;
	struct resource_entry *cocci_id/* drivers/bluetooth/hci_bcm.c 1057 */;
	const struct acpi_gpio_mapping *cocci_id/* drivers/bluetooth/hci_bcm.c 1056 */;
	struct bcm_device *cocci_id/* drivers/bluetooth/hci_bcm.c 1053 */;
	int cocci_id/* drivers/bluetooth/hci_bcm.c 1053 */;
	struct gpio_desc *cocci_id/* drivers/bluetooth/hci_bcm.c 1031 */;
}
