cocci_test_suite() {
	struct can_berr_counter cocci_id/* drivers/net/can/at91_can.c 988 */;
	enum can_state *cocci_id/* drivers/net/can/at91_can.c 986 */;
	enum at91_mb_mode{AT91_MB_MODE_DISABLED=0, AT91_MB_MODE_RX=1, AT91_MB_MODE_RX_OVRWR=2, AT91_MB_MODE_TX=3, AT91_MB_MODE_CONSUMER=4, AT91_MB_MODE_PRODUCER=5,} cocci_id/* drivers/net/can/at91_can.c 80 */;
	struct napi_struct *cocci_id/* drivers/net/can/at91_can.c 789 */;
	const unsigned long *cocci_id/* drivers/net/can/at91_can.c 681 */;
	unsigned long *cocci_id/* drivers/net/can/at91_can.c 681 */;
	struct net_device_stats *cocci_id/* drivers/net/can/at91_can.c 609 */;
	u32 *cocci_id/* drivers/net/can/at91_can.c 588 */;
	unsigned int cocci_id/* drivers/net/can/at91_can.c 529 */;
	u32 cocci_id/* drivers/net/can/at91_can.c 517 */;
	const struct at91_priv *cocci_id/* drivers/net/can/at91_can.c 515 */;
	void cocci_id/* drivers/net/can/at91_can.c 515 */;
	netdev_tx_t cocci_id/* drivers/net/can/at91_can.c 449 */;
	enum can_state cocci_id/* drivers/net/can/at91_can.c 412 */;
	struct can_berr_counter *cocci_id/* drivers/net/can/at91_can.c 371 */;
	const struct net_device *cocci_id/* drivers/net/can/at91_can.c 370 */;
	const struct can_bittiming *cocci_id/* drivers/net/can/at91_can.c 355 */;
	enum at91_reg{AT91_MR=0x000, AT91_IER=0x004, AT91_IDR=0x008, AT91_IMR=0x00C, AT91_SR=0x010, AT91_BR=0x014, AT91_TIM=0x018, AT91_TIMESTP=0x01C, AT91_ECR=0x020, AT91_TCR=0x024, AT91_ACR=0x028,} cocci_id/* drivers/net/can/at91_can.c 31 */;
	canid_t cocci_id/* drivers/net/can/at91_can.c 301 */;
	enum at91_mb_mode cocci_id/* drivers/net/can/at91_can.c 296 */;
	enum at91_reg cocci_id/* drivers/net/can/at91_can.c 278 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/at91_can.c 159 */;
	const struct at91_devtype_data cocci_id/* drivers/net/can/at91_can.c 143 */;
	struct platform_driver cocci_id/* drivers/net/can/at91_can.c 1401 */;
	const struct platform_device_id cocci_id/* drivers/net/can/at91_can.c 1388 */[];
	struct at91_priv cocci_id/* drivers/net/can/at91_can.c 1311 */;
	void __iomem *cocci_id/* drivers/net/can/at91_can.c 1274 */;
	struct clk *cocci_id/* drivers/net/can/at91_can.c 1273 */;
	struct resource *cocci_id/* drivers/net/can/at91_can.c 1272 */;
	struct at91_priv *cocci_id/* drivers/net/can/at91_can.c 1271 */;
	struct net_device *cocci_id/* drivers/net/can/at91_can.c 1270 */;
	int cocci_id/* drivers/net/can/at91_can.c 1267 */;
	const struct of_device_id *cocci_id/* drivers/net/can/at91_can.c 1254 */;
	const struct at91_devtype_data *cocci_id/* drivers/net/can/at91_can.c 1251 */;
	struct platform_device *cocci_id/* drivers/net/can/at91_can.c 1251 */;
	struct at91_priv {
		struct can_priv can;
		struct napi_struct napi;
		void __iomem *reg_base;
		u32 reg_sr;
		unsigned int tx_next;
		unsigned int tx_echo;
		unsigned int rx_next;
		struct at91_devtype_data devtype_data;
		struct clk *clk;
		struct at91_can_data *pdata;
		canid_t mb0_id;
	} cocci_id/* drivers/net/can/at91_can.c 125 */;
	const struct of_device_id cocci_id/* drivers/net/can/at91_can.c 1237 */[];
	const struct attribute_group cocci_id/* drivers/net/can/at91_can.c 1232 */;
	struct attribute *cocci_id/* drivers/net/can/at91_can.c 1227 */[];
	unsigned long cocci_id/* drivers/net/can/at91_can.c 1195 */;
	const char *cocci_id/* drivers/net/can/at91_can.c 1191 */;
	struct device_attribute *cocci_id/* drivers/net/can/at91_can.c 1191 */;
	size_t cocci_id/* drivers/net/can/at91_can.c 1191 */;
	struct device *cocci_id/* drivers/net/can/at91_can.c 1190 */;
	ssize_t cocci_id/* drivers/net/can/at91_can.c 1190 */;
	char *cocci_id/* drivers/net/can/at91_can.c 1180 */;
	const struct net_device_ops cocci_id/* drivers/net/can/at91_can.c 1172 */;
	struct at91_devtype_data {
		unsigned int rx_first;
		unsigned int rx_split;
		unsigned int rx_last;
		unsigned int tx_shift;
		enum at91_devtype type;
	} cocci_id/* drivers/net/can/at91_can.c 117 */;
	enum can_mode cocci_id/* drivers/net/can/at91_can.c 1157 */;
	enum at91_devtype{AT91_DEVTYPE_SAM9263, AT91_DEVTYPE_SAM9X5,} cocci_id/* drivers/net/can/at91_can.c 112 */;
	irqreturn_t cocci_id/* drivers/net/can/at91_can.c 1059 */;
	void *cocci_id/* drivers/net/can/at91_can.c 1059 */;
	struct can_frame *cocci_id/* drivers/net/can/at91_can.c 1012 */;
	struct sk_buff *cocci_id/* drivers/net/can/at91_can.c 1011 */;
}