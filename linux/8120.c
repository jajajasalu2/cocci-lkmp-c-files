cocci_test_suite() {
	const struct of_device_id cocci_id/* drivers/net/can/spi/mcp251x.c 999 */[];
	const struct net_device_ops cocci_id/* drivers/net/can/spi/mcp251x.c 992 */;
	u8 cocci_id/* drivers/net/can/spi/mcp251x.c 800 */;
	enum can_state cocci_id/* drivers/net/can/spi/mcp251x.c 799 */;
	struct net_device *cocci_id/* drivers/net/can/spi/mcp251x.c 795 */;
	struct spi_device *cocci_id/* drivers/net/can/spi/mcp251x.c 794 */;
	struct mcp251x_priv *cocci_id/* drivers/net/can/spi/mcp251x.c 793 */;
	irqreturn_t cocci_id/* drivers/net/can/spi/mcp251x.c 791 */;
	void *cocci_id/* drivers/net/can/spi/mcp251x.c 791 */;
	int cocci_id/* drivers/net/can/spi/mcp251x.c 791 */;
	struct work_struct *cocci_id/* drivers/net/can/spi/mcp251x.c 752 */;
	struct can_frame *cocci_id/* drivers/net/can/spi/mcp251x.c 714 */;
	struct sk_buff *cocci_id/* drivers/net/can/spi/mcp251x.c 713 */;
	struct regulator *cocci_id/* drivers/net/can/spi/mcp251x.c 667 */;
	unsigned long cocci_id/* drivers/net/can/spi/mcp251x.c 617 */;
	struct can_bittiming *cocci_id/* drivers/net/can/spi/mcp251x.c 583 */;
	enum can_mode cocci_id/* drivers/net/can/spi/mcp251x.c 525 */;
	netdev_tx_t cocci_id/* drivers/net/can/spi/mcp251x.c 504 */;
	u8 cocci_id/* drivers/net/can/spi/mcp251x.c 422 */[SPI_TRANSFER_BUF_LEN];
	u8 *cocci_id/* drivers/net/can/spi/mcp251x.c 396 */;
	struct spi_message cocci_id/* drivers/net/can/spi/mcp251x.c 273 */;
	struct spi_transfer cocci_id/* drivers/net/can/spi/mcp251x.c 267 */;
	void cocci_id/* drivers/net/can/spi/mcp251x.c 239 */;
	struct mcp251x_priv {
		struct can_priv can;
		struct net_device *net;
		struct spi_device *spi;
		enum mcp251x_model model;
		struct mutex mcp_lock;
		u8 *spi_tx_buf;
		u8 *spi_rx_buf;
		struct sk_buff *tx_skb;
		int tx_len;
		struct workqueue_struct *wq;
		struct work_struct tx_work;
		struct work_struct restart_work;
		int force_quit;
		int after_suspend;
#define AFTER_SUSPEND_UP 1
#define AFTER_SUSPEND_DOWN 2
#define AFTER_SUSPEND_POWER 4
#define AFTER_SUSPEND_RESTART 8
		int restart_tx;
		struct regulator *power;
		struct regulator *transceiver;
		struct clk *clk;
	} cocci_id/* drivers/net/can/spi/mcp251x.c 200 */;
	enum mcp251x_model{CAN_MCP251X_MCP2510=0x2510, CAN_MCP251X_MCP2515=0x2515, CAN_MCP251X_MCP25625=0x25625,} cocci_id/* drivers/net/can/spi/mcp251x.c 194 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/spi/mcp251x.c 182 */;
	struct spi_driver cocci_id/* drivers/net/can/spi/mcp251x.c 1221 */;
	struct device *cocci_id/* drivers/net/can/spi/mcp251x.c 1198 */;
	int __maybe_unused cocci_id/* drivers/net/can/spi/mcp251x.c 1198 */;
	enum mcp251x_model cocci_id/* drivers/net/can/spi/mcp251x.c 1073 */;
	struct mcp251x_priv cocci_id/* drivers/net/can/spi/mcp251x.c 1055 */;
	u32 cocci_id/* drivers/net/can/spi/mcp251x.c 1039 */;
	struct clk *cocci_id/* drivers/net/can/spi/mcp251x.c 1038 */;
	const void *cocci_id/* drivers/net/can/spi/mcp251x.c 1035 */;
	kernel_ulong_t cocci_id/* drivers/net/can/spi/mcp251x.c 1019 */;
	const struct spi_device_id cocci_id/* drivers/net/can/spi/mcp251x.c 1016 */[];
}
