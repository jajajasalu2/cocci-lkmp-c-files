cocci_test_suite() {
	struct mrvl_data *cocci_id/* drivers/bluetooth/hci_mrvl.c 91 */;
	struct hci_uart *cocci_id/* drivers/bluetooth/hci_mrvl.c 89 */;
	int cocci_id/* drivers/bluetooth/hci_mrvl.c 89 */;
	struct hci_mrvl_pkt {
		__le16 lhs;
		__le16 rhs;
	}__packed cocci_id/* drivers/bluetooth/hci_mrvl.c 49 */;
	struct mrvl_serdev {
		struct hci_uart hu;
	} cocci_id/* drivers/bluetooth/hci_mrvl.c 45 */;
	int __exit cocci_id/* drivers/bluetooth/hci_mrvl.c 441 */;
	void cocci_id/* drivers/bluetooth/hci_mrvl.c 441 */;
	int __init cocci_id/* drivers/bluetooth/hci_mrvl.c 434 */;
	struct serdev_device_driver cocci_id/* drivers/bluetooth/hci_mrvl.c 425 */;
	const struct of_device_id cocci_id/* drivers/bluetooth/hci_mrvl.c 418 */[];
	struct mrvl_serdev *cocci_id/* drivers/bluetooth/hci_mrvl.c 398 */;
	struct serdev_device *cocci_id/* drivers/bluetooth/hci_mrvl.c 396 */;
	const struct hci_uart_proto cocci_id/* drivers/bluetooth/hci_mrvl.c 383 */;
	struct mrvl_data {
		struct sk_buff *rx_skb;
		struct sk_buff_head txq;
		struct sk_buff_head rawq;
		unsigned long flags;
		unsigned int tx_len;
		u8 id,rev;
	} cocci_id/* drivers/bluetooth/hci_mrvl.c 36 */;
	enum{STATE_CHIP_VER_PENDING, STATE_FW_REQ_PENDING,} cocci_id/* drivers/bluetooth/hci_mrvl.c 31 */;
	const u8 *cocci_id/* drivers/bluetooth/hci_mrvl.c 275 */;
	const struct firmware *cocci_id/* drivers/bluetooth/hci_mrvl.c 274 */;
	const char *cocci_id/* drivers/bluetooth/hci_mrvl.c 270 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/hci_mrvl.c 270 */;
	const void *cocci_id/* drivers/bluetooth/hci_mrvl.c 250 */;
	const struct h4_recv_pkt cocci_id/* drivers/bluetooth/hci_mrvl.c 242 */[];
	u16 cocci_id/* drivers/bluetooth/hci_mrvl.c 198 */;
	struct hci_mrvl_pkt *cocci_id/* drivers/bluetooth/hci_mrvl.c 195 */;
	void *cocci_id/* drivers/bluetooth/hci_mrvl.c 195 */;
	unsigned char cocci_id/* drivers/bluetooth/hci_mrvl.c 144 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/hci_mrvl.c 119 */;
}
