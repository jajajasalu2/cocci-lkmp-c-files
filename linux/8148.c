cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/net/can/sja1000/peak_pci.c 754 */;
	const struct pci_device_id cocci_id/* drivers/net/can/sja1000/peak_pci.c 74 */[];
	const u16 cocci_id/* drivers/net/can/sja1000/peak_pci.c 70 */[PEAK_PCI_CHAN_MAX];
	struct peak_pci_chan cocci_id/* drivers/net/can/sja1000/peak_pci.c 610 */;
	void __iomem *cocci_id/* drivers/net/can/sja1000/peak_pci.c 551 */;
	struct net_device *cocci_id/* drivers/net/can/sja1000/peak_pci.c 550 */;
	struct sja1000_priv *cocci_id/* drivers/net/can/sja1000/peak_pci.c 548 */;
	const struct pci_device_id *cocci_id/* drivers/net/can/sja1000/peak_pci.c 546 */;
	struct pci_dev *cocci_id/* drivers/net/can/sja1000/peak_pci.c 546 */;
	int cocci_id/* drivers/net/can/sja1000/peak_pci.c 546 */;
	u16 cocci_id/* drivers/net/can/sja1000/peak_pci.c 538 */;
	struct peak_pci_chan *cocci_id/* drivers/net/can/sja1000/peak_pci.c 537 */;
	const struct sja1000_priv *cocci_id/* drivers/net/can/sja1000/peak_pci.c 535 */;
	void cocci_id/* drivers/net/can/sja1000/peak_pci.c 535 */;
	u8 cocci_id/* drivers/net/can/sja1000/peak_pci.c 524 */;
	const struct i2c_algo_bit_data cocci_id/* drivers/net/can/sja1000/peak_pci.c 420 */;
	struct peak_pciec_card *cocci_id/* drivers/net/can/sja1000/peak_pci.c 352 */;
	struct peak_pci_chan {
		void __iomem *cfg_base;
		struct net_device *prev_dev;
		u16 icr_mask;
		struct peak_pciec_card *pciec_card;
	} cocci_id/* drivers/net/can/sja1000/peak_pci.c 34 */;
	struct peak_pciec_card cocci_id/* drivers/net/can/sja1000/peak_pci.c 272 */;
	struct work_struct *cocci_id/* drivers/net/can/sja1000/peak_pci.c 269 */;
	struct i2c_msg cocci_id/* drivers/net/can/sja1000/peak_pci.c 245 */;
	u8 cocci_id/* drivers/net/can/sja1000/peak_pci.c 241 */[2];
	void *cocci_id/* drivers/net/can/sja1000/peak_pci.c 225 */;
	void cocci_id/* drivers/net/can/sja1000/peak_pci.c 155 */(const struct sja1000_priv *priv,
								  int port,
								  u8 val);
	struct peak_pciec_card {
		void __iomem *cfg_base;
		void __iomem *reg_base;
		u8 led_cache;
		struct i2c_algo_bit_data i2c_bit;
		struct i2c_adapter led_chip;
		struct delayed_work led_work;
		int chan_count;
		struct peak_pciec_chan channel[PEAK_PCI_CHAN_MAX];
	} cocci_id/* drivers/net/can/sja1000/peak_pci.c 141 */;
	struct peak_pciec_chan {
		struct net_device *netdev;
		unsigned long prev_rx_bytes;
		unsigned long prev_tx_bytes;
	} cocci_id/* drivers/net/can/sja1000/peak_pci.c 135 */;
	enum{PCA9553_LOW, PCA9553_HIGHZ, PCA9553_PWM0, PCA9553_PWM1,} cocci_id/* drivers/net/can/sja1000/peak_pci.c 109 */;
}
