cocci_test_suite() {
	void cocci_id/* drivers/bluetooth/bt3c_cs.c 89 */(struct pcmcia_device *p_dev);
	void cocci_id/* drivers/bluetooth/bt3c_cs.c 87 */(struct pcmcia_device *link);
	int cocci_id/* drivers/bluetooth/bt3c_cs.c 86 */(struct pcmcia_device *link);
	struct pcmcia_driver cocci_id/* drivers/bluetooth/bt3c_cs.c 742 */;
	const struct pcmcia_device_id cocci_id/* drivers/bluetooth/bt3c_cs.c 736 */[];
	struct bt3c_info {
		struct pcmcia_device *p_dev;
		struct hci_dev *hdev;
		spinlock_t lock;
		struct sk_buff_head txq;
		unsigned long tx_state;
		unsigned long rx_state;
		unsigned long rx_count;
		struct sk_buff *rx_skb;
	} cocci_id/* drivers/bluetooth/bt3c_cs.c 70 */;
	unsigned long cocci_id/* drivers/bluetooth/bt3c_cs.c 687 */;
	unsigned int cocci_id/* drivers/bluetooth/bt3c_cs.c 664 */[5];
	int *cocci_id/* drivers/bluetooth/bt3c_cs.c 646 */;
	struct pcmcia_device *cocci_id/* drivers/bluetooth/bt3c_cs.c 644 */;
	void *cocci_id/* drivers/bluetooth/bt3c_cs.c 644 */;
	int cocci_id/* drivers/bluetooth/bt3c_cs.c 644 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/bt3c_cs.c 607 */;
	struct bt3c_info *cocci_id/* drivers/bluetooth/bt3c_cs.c 605 */;
	const struct firmware *cocci_id/* drivers/bluetooth/bt3c_cs.c 540 */;
	char cocci_id/* drivers/bluetooth/bt3c_cs.c 450 */[9];
	char *cocci_id/* drivers/bluetooth/bt3c_cs.c 449 */;
	const unsigned char *cocci_id/* drivers/bluetooth/bt3c_cs.c 446 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/bt3c_cs.c 410 */;
	irqreturn_t cocci_id/* drivers/bluetooth/bt3c_cs.c 334 */;
	struct hci_sco_hdr *cocci_id/* drivers/bluetooth/bt3c_cs.c 294 */;
	struct hci_acl_hdr *cocci_id/* drivers/bluetooth/bt3c_cs.c 293 */;
	struct hci_event_hdr *cocci_id/* drivers/bluetooth/bt3c_cs.c 292 */;
	__u8 cocci_id/* drivers/bluetooth/bt3c_cs.c 283 */;
	__u8 *cocci_id/* drivers/bluetooth/bt3c_cs.c 159 */;
	unsigned int cocci_id/* drivers/bluetooth/bt3c_cs.c 116 */;
	unsigned short cocci_id/* drivers/bluetooth/bt3c_cs.c 116 */;
	void cocci_id/* drivers/bluetooth/bt3c_cs.c 116 */;
}
