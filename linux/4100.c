cocci_test_suite() {
	const struct rockchip_usb3phy_port_cfg *cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 948 */;
	u8 cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 812 */;
	unsigned int cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 810 */;
	union extcon_property_value cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 809 */;
	struct extcon_dev *cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 808 */;
	s32 cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 593 */;
	u16 cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 590 */;
	u32 cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 563 */;
	bool cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 561 */;
	const struct usb3phy_reg *cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 561 */;
	struct rockchip_typec_phy *cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 560 */;
	int cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 560 */;
	void cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 457 */;
	const struct rockchip_usb3phy_port_cfg cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 433 */[];
	struct phy_reg cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 411 */[];
	struct phy_reg {
		u16 value;
		u32 addr;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 389 */;
	struct rockchip_typec_phy {
		struct device *dev;
		void __iomem *base;
		struct extcon_dev *extcon;
		struct regmap *grf_regs;
		struct clk *clk_core;
		struct clk *clk_ref;
		struct reset_control *uphy_rst;
		struct reset_control *pipe_rst;
		struct reset_control *tcphy_rst;
		const struct rockchip_usb3phy_port_cfg *port_cfgs;
		struct mutex lock;
		bool flip;
		u8 mode;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 371 */;
	struct rockchip_usb3phy_port_cfg {
		unsigned int reg;
		struct usb3phy_reg typec_conn_dir;
		struct usb3phy_reg usb3tousb2_en;
		struct usb3phy_reg external_psm;
		struct usb3phy_reg pipe_status;
		struct usb3phy_reg usb3_host_disable;
		struct usb3phy_reg usb3_host_port;
		struct usb3phy_reg uphy_dp_sel;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 360 */;
	struct usb3phy_reg {
		u32 offset;
		u32 enable_bit;
		u32 write_enable;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 343 */;
	struct platform_driver cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 1216 */;
	const struct of_device_id cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 1206 */[];
	const struct of_device_id *cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 1108 */;
	struct resource *cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 1106 */;
	struct phy_provider *cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 1105 */;
	struct device_node *cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 1102 */;
	struct device *cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 1101 */;
	struct platform_device *cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 1099 */;
	const struct phy_ops cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 1035 */;
	struct phy *cocci_id/* drivers/phy/rockchip/phy-rockchip-typec.c 1014 */;
}
