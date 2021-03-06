cocci_test_suite() {
	struct spi_message cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 98 */;
	u8 cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 909 */[RSV_SIZE];
	struct sk_buff *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 907 */;
	struct spi_transfer cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 90 */;
	const char *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 891 */;
	int cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 891 */;
	void cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 891 */;
	u8 cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 818 */[TSV_SIZE];
	struct {
		u32 msg_enable;
	} cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 76 */;
	u8 cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 652 */;
	struct enc28j60_net {
		struct net_device *netdev;
		struct spi_device *spi;
		struct mutex lock;
		struct sk_buff *tx_skb;
		struct work_struct tx_work;
		struct work_struct irq_work;
		struct work_struct setrx_work;
		struct work_struct restart_work;
		u8 bank;
		u16 next_pk_ptr;
		u16 max_pk_counter;
		u16 tx_retry_count;
		bool hw_enable;
		bool full_duplex;
		int rxfilter;
		u32 msg_enable;
		u8 spi_transfer_buf[SPI_TRANSFER_BUF_LEN];
	} cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 55 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 513 */;
	enum{RXFILTER_NORMAL, RXFILTER_MULTI, RXFILTER_PROMISC,} cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 48 */;
	unsigned long cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 413 */;
	const u8 *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 376 */;
	u8 *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 352 */;
	struct spi_driver cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1635 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1629 */[];
	unsigned char cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1542 */[ETH_ALEN];
	struct spi_device *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1540 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1530 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1515 */;
	u32 cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1503 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1497 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1478 */;
	u8 cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 147 */[4];
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1468 */;
	u8 cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 146 */[2];
	irqreturn_t cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1312 */;
	void *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1312 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1281 */;
	u8 cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1255 */[64];
	bool cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1155 */;
	struct enc28j60_net cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1124 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1121 */;
	u16 cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1049 */;
	struct device *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1048 */;
	struct enc28j60_net *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1047 */;
	struct net_device *cocci_id/* drivers/net/ethernet/microchip/enc28j60.c 1045 */;
}
