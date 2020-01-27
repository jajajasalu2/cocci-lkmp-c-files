cocci_test_suite() {
	struct ath_struct cocci_id/* drivers/bluetooth/hci_ath.c 78 */;
	struct tty_struct *cocci_id/* drivers/bluetooth/hci_ath.c 76 */;
	struct work_struct *cocci_id/* drivers/bluetooth/hci_ath.c 71 */;
	struct ath_vendor_cmd {
		__u8 opcode;
		__le16 index;
		__u8 len;
		__u8 data[251];
	}__packed cocci_id/* drivers/bluetooth/hci_ath.c 43 */;
	struct ath_struct {
		struct hci_uart *hu;
		unsigned int cur_sleep;
		struct sk_buff *rx_skb;
		struct sk_buff_head txq;
		struct work_struct ctxtsw;
	} cocci_id/* drivers/bluetooth/hci_ath.c 30 */;
	int __exit cocci_id/* drivers/bluetooth/hci_ath.c 265 */;
	void cocci_id/* drivers/bluetooth/hci_ath.c 265 */;
	int __init cocci_id/* drivers/bluetooth/hci_ath.c 260 */;
	const struct hci_uart_proto cocci_id/* drivers/bluetooth/hci_ath.c 247 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/hci_ath.c 240 */;
	struct hci_command_hdr *cocci_id/* drivers/bluetooth/hci_ath.c 221 */;
	void *cocci_id/* drivers/bluetooth/hci_ath.c 221 */;
	const void *cocci_id/* drivers/bluetooth/hci_ath.c 190 */;
	const struct h4_recv_pkt cocci_id/* drivers/bluetooth/hci_ath.c 184 */[];
	const bdaddr_t *cocci_id/* drivers/bluetooth/hci_ath.c 169 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/hci_ath.c 169 */;
	struct ath_vendor_cmd cocci_id/* drivers/bluetooth/hci_ath.c 151 */;
	size_t cocci_id/* drivers/bluetooth/hci_ath.c 148 */;
	uint8_t cocci_id/* drivers/bluetooth/hci_ath.c 147 */;
	uint16_t cocci_id/* drivers/bluetooth/hci_ath.c 147 */;
	struct ath_struct *cocci_id/* drivers/bluetooth/hci_ath.c 120 */;
	struct hci_uart *cocci_id/* drivers/bluetooth/hci_ath.c 118 */;
	int cocci_id/* drivers/bluetooth/hci_ath.c 118 */;
}
