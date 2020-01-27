cocci_test_suite() {
	gfp_t cocci_id/* drivers/nfc/pn533/uart.c 95 */;
	const u8 cocci_id/* drivers/nfc/pn533/uart.c 82 */[PN533_STD_FRAME_ACK_SIZE];
	const u8 cocci_id/* drivers/nfc/pn533/uart.c 49 */[];
	struct serdev_device_driver cocci_id/* drivers/nfc/pn533/uart.c 317 */;
	struct pn532_uart_phy {
		struct serdev_device *serdev;
		struct sk_buff *recv_skb;
		struct pn533 *priv;
		enum send_wakeup send_wakeup;
		struct timer_list cmd_timeout;
		struct sk_buff *cur_out_buf;
	} cocci_id/* drivers/nfc/pn533/uart.c 28 */;
	const struct of_device_id cocci_id/* drivers/nfc/pn533/uart.c 232 */[];
	struct serdev_device_ops cocci_id/* drivers/nfc/pn533/uart.c 227 */;
	enum send_wakeup{PN532_SEND_NO_WAKEUP=0, PN532_SEND_WAKEUP, PN532_SEND_LAST_WAKEUP,} cocci_id/* drivers/nfc/pn533/uart.c 21 */;
	const unsigned char *cocci_id/* drivers/nfc/pn533/uart.c 207 */;
	size_t cocci_id/* drivers/nfc/pn533/uart.c 207 */;
	struct serdev_device *cocci_id/* drivers/nfc/pn533/uart.c 206 */;
	struct pn533_std_frame cocci_id/* drivers/nfc/pn533/uart.c 193 */;
	struct pn533_ext_frame cocci_id/* drivers/nfc/pn533/uart.c 183 */;
	u16 cocci_id/* drivers/nfc/pn533/uart.c 152 */;
	struct pn533_ext_frame *cocci_id/* drivers/nfc/pn533/uart.c 151 */;
	struct pn533_std_frame *cocci_id/* drivers/nfc/pn533/uart.c 150 */;
	struct sk_buff *cocci_id/* drivers/nfc/pn533/uart.c 148 */;
	struct pn532_uart_phy *cocci_id/* drivers/nfc/pn533/uart.c 136 */;
	struct timer_list *cocci_id/* drivers/nfc/pn533/uart.c 134 */;
	void cocci_id/* drivers/nfc/pn533/uart.c 134 */;
	struct pn533_phy_ops cocci_id/* drivers/nfc/pn533/uart.c 126 */;
	struct pn533 *cocci_id/* drivers/nfc/pn533/uart.c 116 */;
	int cocci_id/* drivers/nfc/pn533/uart.c 116 */;
}
