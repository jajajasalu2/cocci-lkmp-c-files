cocci_test_suite() {
	void *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 969 */;
	struct notifier_block *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 968 */;
	irqreturn_t cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 906 */;
	struct usb2phy_reg {
		unsigned int offset;
		unsigned int bitend;
		unsigned int bitstart;
		unsigned int disable;
		unsigned int enable;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 79 */;
	unsigned long cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 691 */;
	const unsigned int cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 69 */[];
	struct rockchip_usb2phy_port cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 687 */;
	struct rockchip_usb2phy_port *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 686 */;
	struct work_struct *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 684 */;
	void cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 684 */;
	enum power_supply_type cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 639 */;
	const char *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 639 */;
	enum usb_chg_state{USB_CHG_STATE_UNDEFINED=0, USB_CHG_STATE_WAIT_FOR_DCD, USB_CHG_STATE_DCD_DONE, USB_CHG_STATE_PRIMARY_DONE, USB_CHG_STATE_SECONDARY_DONE, USB_CHG_STATE_DETECTED,} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 60 */;
	const struct phy_ops cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 517 */;
	struct phy *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 502 */;
	enum rockchip_usb2phy_host_state{PHY_STATE_HS_ONLINE=0, PHY_STATE_DISCONNECT=1, PHY_STATE_CONNECT=2, PHY_STATE_FS_LS_ONLINE=4,} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 41 */;
	struct extcon_dev *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 374 */;
	enum rockchip_usb2phy_port_id{USB2PHY_PORT_OTG, USB2PHY_PORT_HOST, USB2PHY_NUM_PORTS,} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 35 */;
	struct clk_init_data cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 322 */;
	struct device_node *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 321 */;
	const struct clk_ops cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 303 */;
	struct rockchip_usb2phy cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 260 */;
	struct clk_hw *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 257 */;
	unsigned int cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 233 */;
	bool cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 231 */;
	const struct usb2phy_reg *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 231 */;
	int cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 230 */;
	struct rockchip_usb2phy *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 225 */;
	struct regmap *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 225 */;
	struct rockchip_usb2phy {
		struct device *dev;
		struct regmap *grf;
		struct regmap *usbgrf;
		struct clk *clk;
		struct clk *clk480m;
		struct clk_hw clk480m_hw;
		enum usb_chg_state chg_state;
		enum power_supply_type chg_type;
		u8 dcd_retries;
		struct extcon_dev *edev;
		const struct rockchip_usb2phy_cfg *phy_cfg;
		struct rockchip_usb2phy_port ports[USB2PHY_NUM_PORTS];
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 210 */;
	struct rockchip_usb2phy_port {
		struct phy *phy;
		unsigned int port_id;
		bool suspended;
		bool vbus_attached;
		int bvalid_irq;
		int ls_irq;
		int otg_mux_irq;
		struct mutex mutex;
		struct delayed_work chg_work;
		struct delayed_work otg_sm_work;
		struct delayed_work sm_work;
		const struct rockchip_usb2phy_port_cfg *port_cfg;
		struct notifier_block event_nb;
		enum usb_otg_state state;
		enum usb_dr_mode mode;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 176 */;
	struct rockchip_usb2phy_cfg {
		unsigned int reg;
		unsigned int num_ports;
		struct usb2phy_reg clkout_ctl;
		const struct rockchip_usb2phy_port_cfg port_cfgs[USB2PHY_NUM_PORTS];
		const struct rockchip_chg_det_reg chg_det;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 149 */;
	struct platform_driver cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 1436 */;
	const struct of_device_id cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 1425 */[];
	struct rockchip_usb2phy_port_cfg {
		struct usb2phy_reg phy_sus;
		struct usb2phy_reg bvalid_det_en;
		struct usb2phy_reg bvalid_det_st;
		struct usb2phy_reg bvalid_det_clr;
		struct usb2phy_reg ls_det_en;
		struct usb2phy_reg ls_det_st;
		struct usb2phy_reg ls_det_clr;
		struct usb2phy_reg utmi_avalid;
		struct usb2phy_reg utmi_bvalid;
		struct usb2phy_reg utmi_ls;
		struct usb2phy_reg utmi_hstdet;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 127 */;
	const struct rockchip_usb2phy_cfg cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 1200 */[];
	const struct of_device_id *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 1070 */;
	const struct rockchip_usb2phy_cfg *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 1069 */;
	struct phy_provider *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 1067 */;
	struct device *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 1064 */;
	struct platform_device *cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 1062 */;
	struct rockchip_chg_det_reg {
		struct usb2phy_reg cp_det;
		struct usb2phy_reg dcp_det;
		struct usb2phy_reg dp_det;
		struct usb2phy_reg idm_sink_en;
		struct usb2phy_reg idp_sink_en;
		struct usb2phy_reg idp_src_en;
		struct usb2phy_reg rdm_pdwn_en;
		struct usb2phy_reg vdm_src_en;
		struct usb2phy_reg vdp_src_en;
		struct usb2phy_reg opmode;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-inno-usb2.c 100 */;
}
