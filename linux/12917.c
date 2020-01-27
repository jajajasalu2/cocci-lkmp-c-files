cocci_test_suite() {
	struct solos_skb_cb *cocci_id/* drivers/atm/solos-pci.c 97 */;
	struct solos_skb_cb {
		struct atm_vcc *vcc;
		uint32_t dma_addr;
	} cocci_id/* drivers/atm/solos-pci.c 91 */;
	struct sock *cocci_id/* drivers/atm/solos-pci.c 901 */;
	struct hlist_head *cocci_id/* drivers/atm/solos-pci.c 899 */;
	struct atm_vcc *cocci_id/* drivers/atm/solos-pci.c 897 */;
	short cocci_id/* drivers/atm/solos-pci.c 897 */;
	struct pkt_hdr {
		__le16 size;
		__le16 vpi;
		__le16 vci;
		__le16 type;
	} cocci_id/* drivers/atm/solos-pci.c 84 */;
	struct pkt_hdr cocci_id/* drivers/atm/solos-pci.c 773 */;
	irqreturn_t cocci_id/* drivers/atm/solos-pci.c 741 */;
	uint32_t *cocci_id/* drivers/atm/solos-pci.c 718 */;
	uint32_t cocci_id/* drivers/atm/solos-pci.c 716 */;
	const struct firmware *cocci_id/* drivers/atm/solos-pci.c 626 */;
	const struct attribute_group cocci_id/* drivers/atm/solos-pci.c 619 */;
	struct attribute *cocci_id/* drivers/atm/solos-pci.c 607 */[];
	struct geos_gpio_attr cocci_id/* drivers/atm/solos-pci.c 544 */;
	struct geos_gpio_attr *cocci_id/* drivers/atm/solos-pci.c 544 */;
	struct geos_gpio_attr {
		struct device_attribute attr;
		int offset;
	} cocci_id/* drivers/atm/solos-pci.c 506 */;
	const char *cocci_id/* drivers/atm/solos-pci.c 495 */;
	size_t cocci_id/* drivers/atm/solos-pci.c 495 */;
	unsigned int cocci_id/* drivers/atm/solos-pci.c 450 */;
	struct atm_dev cocci_id/* drivers/atm/solos-pci.c 447 */;
	struct atm_dev *cocci_id/* drivers/atm/solos-pci.c 447 */;
	char *cocci_id/* drivers/atm/solos-pci.c 445 */;
	struct device_attribute *cocci_id/* drivers/atm/solos-pci.c 444 */;
	ssize_t cocci_id/* drivers/atm/solos-pci.c 444 */;
	struct solos_param *cocci_id/* drivers/atm/solos-pci.c 412 */;
	struct solos_param cocci_id/* drivers/atm/solos-pci.c 186 */;
	int cocci_id/* drivers/atm/solos-pci.c 171 */(struct sk_buff *buf);
	void cocci_id/* drivers/atm/solos-pci.c 170 */(unsigned long);
	int cocci_id/* drivers/atm/solos-pci.c 169 */(struct solos_card *card,
						      int dev,
						      const char *buf,
						      size_t size);
	void cocci_id/* drivers/atm/solos-pci.c 168 */(struct solos_card *);
	int cocci_id/* drivers/atm/solos-pci.c 167 */(struct solos_card *,
						      struct device *);
	struct atm_vcc *cocci_id/* drivers/atm/solos-pci.c 166 */(struct atm_dev *dev,
								  short vpi,
								  int vci);
	irqreturn_t cocci_id/* drivers/atm/solos-pci.c 165 */(int irq,
							      void *dev_id);
	uint32_t cocci_id/* drivers/atm/solos-pci.c 164 */(struct solos_card *);
	void cocci_id/* drivers/atm/solos-pci.c 162 */(struct solos_card *card,
						       int port,
						       struct sk_buff *skb,
						       struct atm_vcc *vcc);
	void __exit cocci_id/* drivers/atm/solos-pci.c 1491 */;
	struct solos_skb_cb cocci_id/* drivers/atm/solos-pci.c 1485 */;
	int __init cocci_id/* drivers/atm/solos-pci.c 1483 */;
	struct pci_driver cocci_id/* drivers/atm/solos-pci.c 1475 */;
	const struct pci_device_id cocci_id/* drivers/atm/solos-pci.c 1468 */[];
	void cocci_id/* drivers/atm/solos-pci.c 1402 */;
	void *cocci_id/* drivers/atm/solos-pci.c 1381 */;
	unsigned long cocci_id/* drivers/atm/solos-pci.c 1381 */;
	struct pkt_hdr *cocci_id/* drivers/atm/solos-pci.c 1360 */;
	struct sk_buff *cocci_id/* drivers/atm/solos-pci.c 1359 */;
	struct solos_card *cocci_id/* drivers/atm/solos-pci.c 1354 */;
	struct device *cocci_id/* drivers/atm/solos-pci.c 1354 */;
	int cocci_id/* drivers/atm/solos-pci.c 1354 */;
	struct solos_param {
		struct list_head list;
		pid_t pid;
		int port;
		struct sk_buff *response;
	} cocci_id/* drivers/atm/solos-pci.c 133 */;
	uint8_t cocci_id/* drivers/atm/solos-pci.c 1197 */;
	uint16_t cocci_id/* drivers/atm/solos-pci.c 1196 */;
	const struct pci_device_id *cocci_id/* drivers/atm/solos-pci.c 1193 */;
	struct pci_dev *cocci_id/* drivers/atm/solos-pci.c 1193 */;
	const struct atmdev_ops cocci_id/* drivers/atm/solos-pci.c 1178 */;
	unsigned char *cocci_id/* drivers/atm/solos-pci.c 1089 */;
	unsigned char cocci_id/* drivers/atm/solos-pci.c 1055 */;
	struct solos_card {
		void __iomem *config_regs;
		void __iomem *buffers;
		int nr_ports;
		int tx_mask;
		struct pci_dev *dev;
		struct atm_dev *atmdev[4];
		struct tasklet_struct tlet;
		spinlock_t tx_lock;
		spinlock_t tx_queue_lock;
		spinlock_t cli_queue_lock;
		spinlock_t param_queue_lock;
		struct list_head param_queue;
		struct sk_buff_head tx_queue[4];
		struct sk_buff_head cli_queue[4];
		struct sk_buff *tx_skb[4];
		struct sk_buff *rx_skb[4];
		unsigned char *dma_bounce;
		wait_queue_head_t param_wq;
		wait_queue_head_t fw_wq;
		int using_dma;
		int dma_alignment;
		int fpga_version;
		int buffer_size;
		int atmel_flash;
	} cocci_id/* drivers/atm/solos-pci.c 105 */;
	char cocci_id/* drivers/atm/solos-pci.c 1003 */[10];
	char cocci_id/* drivers/atm/solos-pci.c 1002 */[500];
}
