cocci_test_suite() {
	struct hci_nokia_alive_pkt {
		u8 mid;
		u8 unused;
	}__packed cocci_id/* drivers/bluetooth/hci_nokia.c 99 */;
	struct hci_nokia_alive_hdr {
		u8 dlen;
	}__packed cocci_id/* drivers/bluetooth/hci_nokia.c 95 */;
	struct hci_nokia_neg_cmd {
		u8 ack;
		u16 baud;
		u16 unused1;
		u8 proto;
		u16 sys_clk;
		u16 unused2;
	}__packed cocci_id/* drivers/bluetooth/hci_nokia.c 83 */;
	struct serdev_device_driver cocci_id/* drivers/bluetooth/hci_nokia.c 792 */;
	struct hci_nokia_neg_hdr {
		u8 dlen;
	}__packed cocci_id/* drivers/bluetooth/hci_nokia.c 79 */;
	const struct of_device_id cocci_id/* drivers/bluetooth/hci_nokia.c 785 */[];
	const struct dev_pm_ops cocci_id/* drivers/bluetooth/hci_nokia.c 778 */;
	struct serdev_device *cocci_id/* drivers/bluetooth/hci_nokia.c 772 */;
	struct device *cocci_id/* drivers/bluetooth/hci_nokia.c 770 */;
	int cocci_id/* drivers/bluetooth/hci_nokia.c 770 */;
	void cocci_id/* drivers/bluetooth/hci_nokia.c 755 */;
	struct clk *cocci_id/* drivers/bluetooth/hci_nokia.c 687 */;
	struct nokia_bt_dev *cocci_id/* drivers/bluetooth/hci_nokia.c 686 */;
	const struct hci_uart_proto cocci_id/* drivers/bluetooth/hci_nokia.c 670 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/hci_nokia.c 644 */;
	const void *cocci_id/* drivers/bluetooth/hci_nokia.c 623 */;
	const struct h4_recv_pkt cocci_id/* drivers/bluetooth/hci_nokia.c 614 */[];
	struct hci_nokia_alive_pkt *cocci_id/* drivers/bluetooth/hci_nokia.c 575 */;
	struct hci_nokia_alive_hdr *cocci_id/* drivers/bluetooth/hci_nokia.c 574 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/hci_nokia.c 569 */;
	struct hci_nokia_neg_evt *cocci_id/* drivers/bluetooth/hci_nokia.c 538 */;
	struct hci_nokia_neg_hdr *cocci_id/* drivers/bluetooth/hci_nokia.c 537 */;
	struct hci_uart *cocci_id/* drivers/bluetooth/hci_nokia.c 487 */;
	struct hci_command_hdr *cocci_id/* drivers/bluetooth/hci_nokia.c 364 */;
	const struct hci_command_hdr *cocci_id/* drivers/bluetooth/hci_nokia.c 358 */;
	u8 cocci_id/* drivers/bluetooth/hci_nokia.c 357 */;
	size_t cocci_id/* drivers/bluetooth/hci_nokia.c 331 */;
	const u8 *cocci_id/* drivers/bluetooth/hci_nokia.c 330 */;
	const struct firmware *cocci_id/* drivers/bluetooth/hci_nokia.c 329 */;
	const char *cocci_id/* drivers/bluetooth/hci_nokia.c 328 */;
	u16 cocci_id/* drivers/bluetooth/hci_nokia.c 269 */;
	struct hci_nokia_neg_cmd *cocci_id/* drivers/bluetooth/hci_nokia.c 265 */;
	irqreturn_t cocci_id/* drivers/bluetooth/hci_nokia.c 162 */;
	void *cocci_id/* drivers/bluetooth/hci_nokia.c 162 */;
	bool cocci_id/* drivers/bluetooth/hci_nokia.c 151 */;
	int cocci_id/* drivers/bluetooth/hci_nokia.c 149 */(struct hci_uart *hu,
							    struct sk_buff *skb);
	struct nokia_bt_dev {
		struct hci_uart hu;
		struct serdev_device *serdev;
		struct gpio_desc *reset;
		struct gpio_desc *wakeup_host;
		struct gpio_desc *wakeup_bt;
		unsigned long sysclk_speed;
		int wake_irq;
		struct sk_buff *rx_skb;
		struct sk_buff_head txq;
		bdaddr_t bdaddr;
		int init_error;
		struct completion init_completion;
		u8 man_id;
		u8 ver_id;
		bool initialized;
		bool tx_enabled;
		bool rx_enabled;
	} cocci_id/* drivers/bluetooth/hci_nokia.c 124 */;
	struct hci_nokia_radio_hdr {
		u8 evt;
		u8 dlen;
	}__packed cocci_id/* drivers/bluetooth/hci_nokia.c 119 */;
	struct hci_nokia_neg_evt {
		u8 ack;
		u16 baud;
		u16 unused1;
		u8 proto;
		u16 sys_clk;
		u16 unused2;
		u8 man_id;
		u8 ver_id;
	}__packed cocci_id/* drivers/bluetooth/hci_nokia.c 104 */;
}
