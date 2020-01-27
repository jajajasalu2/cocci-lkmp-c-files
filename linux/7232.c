cocci_test_suite() {
	struct pcmcia_driver cocci_id/* drivers/bluetooth/bluecard_cs.c 903 */;
	const struct pcmcia_device_id cocci_id/* drivers/bluetooth/bluecard_cs.c 895 */[];
	void cocci_id/* drivers/bluetooth/bluecard_cs.c 87 */(struct pcmcia_device *p_dev);
	void cocci_id/* drivers/bluetooth/bluecard_cs.c 85 */(struct pcmcia_device *link);
	struct pcmcia_device *cocci_id/* drivers/bluetooth/bluecard_cs.c 844 */;
	int cocci_id/* drivers/bluetooth/bluecard_cs.c 84 */(struct pcmcia_device *link);
	struct hci_dev *cocci_id/* drivers/bluetooth/bluecard_cs.c 798 */;
	int cocci_id/* drivers/bluetooth/bluecard_cs.c 795 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/bluecard_cs.c 652 */;
	struct bluecard_info {
		struct pcmcia_device *p_dev;
		struct hci_dev *hdev;
		spinlock_t lock;
		struct timer_list timer;
		struct sk_buff_head txq;
		unsigned long tx_state;
		unsigned long rx_state;
		unsigned long rx_count;
		struct sk_buff *rx_skb;
		unsigned char ctrl_reg;
		unsigned long hw_state;
	} cocci_id/* drivers/bluetooth/bluecard_cs.c 64 */;
	unsigned char cocci_id/* drivers/bluetooth/bluecard_cs.c 566 */[];
	unsigned char cocci_id/* drivers/bluetooth/bluecard_cs.c 499 */;
	irqreturn_t cocci_id/* drivers/bluetooth/bluecard_cs.c 495 */;
	void *cocci_id/* drivers/bluetooth/bluecard_cs.c 495 */;
	struct hci_sco_hdr *cocci_id/* drivers/bluetooth/bluecard_cs.c 454 */;
	struct hci_acl_hdr *cocci_id/* drivers/bluetooth/bluecard_cs.c 453 */;
	struct hci_event_hdr *cocci_id/* drivers/bluetooth/bluecard_cs.c 452 */;
	unsigned char cocci_id/* drivers/bluetooth/bluecard_cs.c 370 */[31];
	__u8 *cocci_id/* drivers/bluetooth/bluecard_cs.c 338 */;
	unsigned long cocci_id/* drivers/bluetooth/bluecard_cs.c 236 */;
	unsigned int cocci_id/* drivers/bluetooth/bluecard_cs.c 162 */;
	struct bluecard_info *cocci_id/* drivers/bluetooth/bluecard_cs.c 161 */;
	struct timer_list *cocci_id/* drivers/bluetooth/bluecard_cs.c 159 */;
	void cocci_id/* drivers/bluetooth/bluecard_cs.c 159 */;
}
