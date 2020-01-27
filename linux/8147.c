cocci_test_suite() {
	struct pcmcia_driver cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 728 */;
	struct pcan_pccard cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 654 */;
	void cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 607 */;
	void *cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 594 */;
	struct sja1000_priv *cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 533 */;
	struct net_device *cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 532 */;
	u8 cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 518 */;
	struct pcmcia_device *cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 516 */;
	struct pcan_pccard *cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 514 */;
	int cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 514 */;
	char cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 474 */[IFNAMSIZ];
	irqreturn_t cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 423 */;
	struct timer_list *cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 376 */;
	u16 cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 263 */;
	unsigned long cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 247 */;
	const struct sja1000_priv *cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 177 */;
	void cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 155 */(struct pcan_pccard *card,
								     u8 mask,
								     u8 state);
	struct pcmcia_device_id cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 148 */[];
	struct pcan_pccard {
		struct pcmcia_device *pdev;
		int chan_count;
		struct pcan_channel channel[PCC_CHAN_MAX];
		u8 ccr;
		u8 fw_major;
		u8 fw_minor;
		void __iomem *ioport_addr;
		struct timer_list led_timer;
	} cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 137 */;
	struct pcan_channel {
		struct net_device *netdev;
		unsigned long prev_rx_bytes;
		unsigned long prev_tx_bytes;
	} cocci_id/* drivers/net/can/sja1000/peak_pcmcia.c 130 */;
}
