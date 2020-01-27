cocci_test_suite() {
	struct device *cocci_id/* drivers/net/can/spi/hi311x.c 998 */;
	int __maybe_unused cocci_id/* drivers/net/can/spi/hi311x.c 998 */;
	enum hi3110_model cocci_id/* drivers/net/can/spi/hi311x.c 874 */;
	struct hi3110_priv cocci_id/* drivers/net/can/spi/hi311x.c 850 */;
	struct clk *cocci_id/* drivers/net/can/spi/hi311x.c 835 */;
	const struct of_device_id *cocci_id/* drivers/net/can/spi/hi311x.c 831 */;
	kernel_ulong_t cocci_id/* drivers/net/can/spi/hi311x.c 823 */;
	const struct spi_device_id cocci_id/* drivers/net/can/spi/hi311x.c 820 */[];
	const struct of_device_id cocci_id/* drivers/net/can/spi/hi311x.c 811 */[];
	const struct net_device_ops cocci_id/* drivers/net/can/spi/hi311x.c 805 */;
	unsigned long cocci_id/* drivers/net/can/spi/hi311x.c 745 */;
	struct sk_buff *cocci_id/* drivers/net/can/spi/hi311x.c 663 */;
	struct can_frame *cocci_id/* drivers/net/can/spi/hi311x.c 662 */;
	u8 cocci_id/* drivers/net/can/spi/hi311x.c 642 */;
	enum can_state cocci_id/* drivers/net/can/spi/hi311x.c 641 */;
	struct net_device *cocci_id/* drivers/net/can/spi/hi311x.c 636 */;
	struct spi_device *cocci_id/* drivers/net/can/spi/hi311x.c 635 */;
	struct hi3110_priv *cocci_id/* drivers/net/can/spi/hi311x.c 634 */;
	irqreturn_t cocci_id/* drivers/net/can/spi/hi311x.c 632 */;
	void *cocci_id/* drivers/net/can/spi/hi311x.c 632 */;
	int cocci_id/* drivers/net/can/spi/hi311x.c 632 */;
	struct work_struct *cocci_id/* drivers/net/can/spi/hi311x.c 596 */;
	struct regulator *cocci_id/* drivers/net/can/spi/hi311x.c 528 */;
	struct can_bittiming *cocci_id/* drivers/net/can/spi/hi311x.c 454 */;
	struct can_berr_counter *cocci_id/* drivers/net/can/spi/hi311x.c 408 */;
	const struct net_device *cocci_id/* drivers/net/can/spi/hi311x.c 407 */;
	enum can_mode cocci_id/* drivers/net/can/spi/hi311x.c 386 */;
	netdev_tx_t cocci_id/* drivers/net/can/spi/hi311x.c 365 */;
	u8 cocci_id/* drivers/net/can/spi/hi311x.c 318 */[HI3110_RX_BUF_LEN - 1];
	u8 *cocci_id/* drivers/net/can/spi/hi311x.c 304 */;
	u8 cocci_id/* drivers/net/can/spi/hi311x.c 263 */[HI3110_TX_EXT_BUF_LEN];
	struct spi_message cocci_id/* drivers/net/can/spi/hi311x.c 208 */;
	struct spi_transfer cocci_id/* drivers/net/can/spi/hi311x.c 202 */;
	void cocci_id/* drivers/net/can/spi/hi311x.c 174 */;
	struct hi3110_priv {
		struct can_priv can;
		struct net_device *net;
		struct spi_device *spi;
		enum hi3110_model model;
		struct mutex hi3110_lock;
		u8 *spi_tx_buf;
		u8 *spi_rx_buf;
		struct sk_buff *tx_skb;
		int tx_len;
		struct workqueue_struct *wq;
		struct work_struct tx_work;
		struct work_struct restart_work;
		int force_quit;
		int after_suspend;
#define HI3110_AFTER_SUSPEND_UP 1
#define HI3110_AFTER_SUSPEND_DOWN 2
#define HI3110_AFTER_SUSPEND_POWER 4
#define HI3110_AFTER_SUSPEND_RESTART 8
		int restart_tx;
		struct regulator *power;
		struct regulator *transceiver;
		struct clk *clk;
	} cocci_id/* drivers/net/can/spi/hi311x.c 144 */;
	enum hi3110_model{CAN_HI3110_HI3110=0x3110,} cocci_id/* drivers/net/can/spi/hi311x.c 140 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/spi/hi311x.c 128 */;
	struct spi_driver cocci_id/* drivers/net/can/spi/hi311x.c 1020 */;
}
