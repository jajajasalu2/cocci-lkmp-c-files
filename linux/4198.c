cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 529 */;
	const struct of_device_id cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 523 */[];
	struct phy_provider *cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 495 */;
	struct platform_device *cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 493 */;
	struct serdes_macro *cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 474 */;
	struct serdes_ctrl *cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 472 */;
	struct phy **cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 472 */;
	struct of_phandle_args *cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 444 */;
	struct device *cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 443 */;
	const struct phy_ops cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 438 */;
	enum phy_mode cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 398 */;
	struct phy *cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 398 */;
	const struct serdes_mux cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 359 */[];
	struct serdes_mux {
		u8 idx;
		u8 port;
		enum phy_mode mode;
		int submode;
		u32 mask;
		u32 mux;
	} cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 336 */;
	unsigned int cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 270 */;
	struct serdes_macro {
		u8 idx;
		int port;
		struct serdes_ctrl *ctrl;
	} cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 27 */;
	u8 cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 268 */;
	u32 cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 268 */;
	struct regmap *cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 268 */;
	int cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 268 */;
	struct serdes_ctrl {
		struct regmap *regs;
		struct device *dev;
		struct phy *phys[SERDES_MAX];
	} cocci_id/* drivers/phy/mscc/phy-ocelot-serdes.c 21 */;
}
