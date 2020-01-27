cocci_test_suite() {
	struct mpc52xx_cdm __iomem *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 44 */;
	struct platform_driver cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 435 */;
	unsigned int cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 43 */;
	const struct mpc5xxx_can_data cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 421 */;
	struct mscan_regs cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 403 */;
	void *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 402 */;
	struct mscan_regs *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 390 */;
	pm_message_t cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 375 */;
	const struct of_device_id cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 35 */[];
	void __iomem *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 287 */;
	struct net_device *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 285 */;
	const struct mpc5xxx_can_data *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 283 */;
	const struct of_device_id *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 282 */;
	int cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 280 */;
	struct mpc5xxx_can_data {
		unsigned int type;
		u32 (*get_clock)(struct platform_device *ofdev,
				 const char *clock_name, int *mscan_clksrc);
		void (*put_clock)(struct platform_device *ofdev);
	} cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 27 */;
	void cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 262 */;
	struct mscan_priv *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 118 */;
	unsigned long cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 117 */;
	struct clk *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 116 */;
	enum{CLK_FROM_AUTO, CLK_FROM_IPS, CLK_FROM_SYS, CLK_FROM_REF,} cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 110 */;
	struct device_node *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 108 */;
	const char *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 106 */;
	int *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 106 */;
	u32 cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 105 */;
	struct platform_device *cocci_id/* drivers/net/can/mscan/mpc5xxx_can.c 105 */;
}
