cocci_test_suite() {
	const struct dev_pm_ops cocci_id/* drivers/bluetooth/hci_h5.c 999 */;
	const struct acpi_device_id cocci_id/* drivers/bluetooth/hci_h5.c 990 */[];
	struct h5_vnd {
		int (*setup)(struct h5 *h5);
		void (*open)(struct h5 *h5);
		void (*close)(struct h5 *h5);
		int (*suspend)(struct h5 *h5);
		int (*resume)(struct h5 *h5);
		const struct acpi_gpio_mapping *acpi_gpio_map;
	} cocci_id/* drivers/bluetooth/hci_h5.c 99 */;
	struct h5_vnd cocci_id/* drivers/bluetooth/hci_h5.c 979 */;
	const struct acpi_gpio_mapping cocci_id/* drivers/bluetooth/hci_h5.c 972 */[];
	const struct acpi_gpio_params cocci_id/* drivers/bluetooth/hci_h5.c 969 */;
	int cocci_id/* drivers/bluetooth/hci_h5.c 942 */;
	struct h5_btrtl_reprobe cocci_id/* drivers/bluetooth/hci_h5.c 941 */;
	struct h5_btrtl_reprobe *cocci_id/* drivers/bluetooth/hci_h5.c 940 */;
	struct work_struct *cocci_id/* drivers/bluetooth/hci_h5.c 938 */;
	struct h5_btrtl_reprobe {
		struct device *dev;
		struct work_struct work;
	} cocci_id/* drivers/bluetooth/hci_h5.c 933 */;
	struct h5 *cocci_id/* drivers/bluetooth/hci_h5.c 913 */;
	void cocci_id/* drivers/bluetooth/hci_h5.c 913 */;
	bool cocci_id/* drivers/bluetooth/hci_h5.c 861 */;
	unsigned int cocci_id/* drivers/bluetooth/hci_h5.c 860 */;
	u32 cocci_id/* drivers/bluetooth/hci_h5.c 859 */;
	__le32 cocci_id/* drivers/bluetooth/hci_h5.c 858 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/hci_h5.c 857 */;
	struct btrtl_device_info *cocci_id/* drivers/bluetooth/hci_h5.c 856 */;
	int __maybe_unused cocci_id/* drivers/bluetooth/hci_h5.c 842 */;
	char *cocci_id/* drivers/bluetooth/hci_h5.c 805 */;
	const struct h5_vnd *cocci_id/* drivers/bluetooth/hci_h5.c 804 */;
	struct device *cocci_id/* drivers/bluetooth/hci_h5.c 786 */;
	const struct acpi_device_id *cocci_id/* drivers/bluetooth/hci_h5.c 785 */;
	struct serdev_device *cocci_id/* drivers/bluetooth/hci_h5.c 783 */;
	const struct hci_uart_proto cocci_id/* drivers/bluetooth/hci_h5.c 771 */;
	const unsigned char cocci_id/* drivers/bluetooth/hci_h5.c 711 */[];
	unsigned long cocci_id/* drivers/bluetooth/hci_h5.c 707 */;
	u8 cocci_id/* drivers/bluetooth/hci_h5.c 652 */[4];
	const u8 *cocci_id/* drivers/bluetooth/hci_h5.c 648 */;
	const char cocci_id/* drivers/bluetooth/hci_h5.c 618 */[2];
	const char cocci_id/* drivers/bluetooth/hci_h5.c 611 */;
	struct h5 {
		struct hci_uart serdev_hu;
		struct sk_buff_head unack;
		struct sk_buff_head rel;
		struct sk_buff_head unrel;
		unsigned long flags;
		struct sk_buff *rx_skb;
		size_t rx_pending;
		u8 rx_ack;
		int (*rx_func)(struct hci_uart *hu, u8 c);
		struct timer_list timer;
		struct hci_uart *hu;
		u8 tx_seq;
		u8 tx_ack;
		u8 tx_win;
		enum{H5_UNINITIALIZED, H5_INITIALIZED, H5_ACTIVE,} state;
		enum{H5_AWAKE, H5_SLEEPING, H5_WAKING_UP,} sleep;
		const struct h5_vnd *vnd;
		const char *id;
		struct gpio_desc *enable_gpio;
		struct gpio_desc *device_wake_gpio;
	} cocci_id/* drivers/bluetooth/hci_h5.c 57 */;
	enum{H5_RX_ESC, H5_TX_ACK_REQ,} cocci_id/* drivers/bluetooth/hci_h5.c 52 */;
	const u8 cocci_id/* drivers/bluetooth/hci_h5.c 498 */;
	void *cocci_id/* drivers/bluetooth/hci_h5.c 481 */;
	unsigned char cocci_id/* drivers/bluetooth/hci_h5.c 428 */;
	const unsigned char *cocci_id/* drivers/bluetooth/hci_h5.c 372 */;
	unsigned char cocci_id/* drivers/bluetooth/hci_h5.c 313 */[3];
	struct hci_uart *cocci_id/* drivers/bluetooth/hci_h5.c 237 */;
	struct timer_list *cocci_id/* drivers/bluetooth/hci_h5.c 132 */;
	u8 cocci_id/* drivers/bluetooth/hci_h5.c 126 */;
	const void *cocci_id/* drivers/bluetooth/hci_h5.c 110 */;
	size_t cocci_id/* drivers/bluetooth/hci_h5.c 110 */;
	void cocci_id/* drivers/bluetooth/hci_h5.c 108 */(struct h5 *h5);
	int __exit cocci_id/* drivers/bluetooth/hci_h5.c 1019 */;
	int __init cocci_id/* drivers/bluetooth/hci_h5.c 1013 */;
	struct serdev_device_driver cocci_id/* drivers/bluetooth/hci_h5.c 1003 */;
}