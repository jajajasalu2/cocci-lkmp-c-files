cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 97 */;
	struct davinci_mdio_data {
		struct mdio_platform_data pdata;
		struct davinci_mdio_regs __iomem *regs;
		struct clk *clk;
		struct device *dev;
		struct mii_bus *bus;
		bool active_in_suspend;
		unsigned long access_time;
		bool skip_scan;
		u32 clk_div;
	} cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 80 */;
	const struct mdio_platform_data cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 76 */;
	void __exit cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 531 */;
	int __init cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 525 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 515 */;
	struct davinci_mdio_regs {
		u32 version;
		u32 control;
#define CONTROL_IDLE BIT(31)
#define CONTROL_ENABLE BIT(30)
#define CONTROL_MAX_DIV (0xffff)
					u32 alive;
		u32 link;
		u32 linkintraw;
		u32 linkintmasked;
		u32 __reserved_0[2];
		u32 userintraw;
		u32 userintmasked;
		u32 userintmaskset;
		u32 userintmaskclr;
		u32 __reserved_1[20];
		struct {
			u32 access;
#define USERACCESS_GO BIT(31)
#define USERACCESS_WRITE BIT(30)
#define USERACCESS_ACK BIT(29)
#define USERACCESS_READ (0)
#define USERACCESS_DATA (0xffff)
								u32 physel;
		} user[0];
	} cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 46 */;
	struct davinci_mdio_of_param {
		int autosuspend_delay_ms;
	} cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 42 */;
	const struct davinci_mdio_of_param *cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 370 */;
	const struct of_device_id *cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 361 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 346 */;
	struct resource *cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 345 */;
	struct device *cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 343 */;
	struct mdio_platform_data *cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 342 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 340 */;
	int cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 340 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 332 */[];
	const struct davinci_mdio_of_param cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 328 */;
	struct device_node *cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 312 */;
	u16 cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 270 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 226 */;
	struct davinci_mdio_regs __iomem *cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 215 */;
	unsigned long cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 180 */;
	struct davinci_mdio_data *cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 125 */;
	void cocci_id/* drivers/net/ethernet/ti/davinci_mdio.c 125 */;
}
