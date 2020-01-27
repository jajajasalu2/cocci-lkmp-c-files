cocci_test_suite() {
	struct nsh {
		u8 type;
		u8 zero;
		u16 len;
	}__packed cocci_id/* drivers/bluetooth/dtl1_cs.c 97 */;
	int cocci_id/* drivers/bluetooth/dtl1_cs.c 84 */(struct pcmcia_device *link);
	struct dtl1_info {
		struct pcmcia_device *p_dev;
		struct hci_dev *hdev;
		spinlock_t lock;
		unsigned long flowmask;
		int ri_latch;
		struct sk_buff_head txq;
		unsigned long tx_state;
		unsigned long rx_state;
		unsigned long rx_count;
		struct sk_buff *rx_skb;
	} cocci_id/* drivers/bluetooth/dtl1_cs.c 65 */;
	struct pcmcia_driver cocci_id/* drivers/bluetooth/dtl1_cs.c 607 */;
	const struct pcmcia_device_id cocci_id/* drivers/bluetooth/dtl1_cs.c 598 */[];
	struct pcmcia_device *cocci_id/* drivers/bluetooth/dtl1_cs.c 557 */;
	void *cocci_id/* drivers/bluetooth/dtl1_cs.c 557 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/dtl1_cs.c 508 */;
	unsigned int cocci_id/* drivers/bluetooth/dtl1_cs.c 507 */;
	unsigned long cocci_id/* drivers/bluetooth/dtl1_cs.c 506 */;
	struct dtl1_info *cocci_id/* drivers/bluetooth/dtl1_cs.c 504 */;
	int cocci_id/* drivers/bluetooth/dtl1_cs.c 504 */;
	struct nsh cocci_id/* drivers/bluetooth/dtl1_cs.c 388 */;
	unsigned char cocci_id/* drivers/bluetooth/dtl1_cs.c 293 */;
	irqreturn_t cocci_id/* drivers/bluetooth/dtl1_cs.c 289 */;
	struct nsh *cocci_id/* drivers/bluetooth/dtl1_cs.c 205 */;
	u8 cocci_id/* drivers/bluetooth/dtl1_cs.c 181 */;
	u8 *cocci_id/* drivers/bluetooth/dtl1_cs.c 181 */;
	struct sk_buff *cocci_id/* drivers/bluetooth/dtl1_cs.c 179 */;
	void cocci_id/* drivers/bluetooth/dtl1_cs.c 179 */;
	__u8 *cocci_id/* drivers/bluetooth/dtl1_cs.c 110 */;
}
