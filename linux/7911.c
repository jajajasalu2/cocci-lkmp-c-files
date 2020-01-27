cocci_test_suite() {
	enum dsa_tag_protocol cocci_id/* drivers/net/dsa/lantiq_gswip.c 843 */;
	unsigned int cocci_id/* drivers/net/dsa/lantiq_gswip.c 602 */;
	struct gswip_pce_table_entry cocci_id/* drivers/net/dsa/lantiq_gswip.c 600 */;
	bool cocci_id/* drivers/net/dsa/lantiq_gswip.c 598 */;
	struct gswip_priv *cocci_id/* drivers/net/dsa/lantiq_gswip.c 598 */;
	int cocci_id/* drivers/net/dsa/lantiq_gswip.c 598 */;
	struct gswip_pce_table_entry *cocci_id/* drivers/net/dsa/lantiq_gswip.c 504 */;
	struct mii_bus *cocci_id/* drivers/net/dsa/lantiq_gswip.c 458 */;
	u16 cocci_id/* drivers/net/dsa/lantiq_gswip.c 438 */;
	const struct gswip_rmon_cnt_desc cocci_id/* drivers/net/dsa/lantiq_gswip.c 279 */[];
	struct gswip_rmon_cnt_desc {
		unsigned int size;
		unsigned int offset;
		const char *name;
	} cocci_id/* drivers/net/dsa/lantiq_gswip.c 271 */;
	struct gswip_pce_table_entry {
		u16 index;
		u16 table;
		u16 key[8];
		u16 val[5];
		u16 mask;
		u8 gmap;
		bool type;
		bool valid;
		bool key_mode;
	} cocci_id/* drivers/net/dsa/lantiq_gswip.c 259 */;
	struct gswip_priv {
	__iomem
		void *gswip;
	__iomem
		void *mdio;
	__iomem
		void *mii;
		const struct gswip_hw_info *hw_info;
		const struct xway_gphy_match_data *gphy_fw_name_cfg;
		struct dsa_switch *ds;
		struct device *dev;
		struct regmap *rcu_regmap;
		struct gswip_vlan vlans[64];
		int num_gphy_fw;
		struct gswip_gphy_fw *gphy_fw;
		u32 port_vlan_filter;
	} cocci_id/* drivers/net/dsa/lantiq_gswip.c 244 */;
	struct gswip_vlan {
		struct net_device *bridge;
		u16 vid;
		u8 fid;
	} cocci_id/* drivers/net/dsa/lantiq_gswip.c 238 */;
	struct gswip_gphy_fw {
		struct clk *clk_gate;
		struct reset_control *reset;
		u32 fw_addr_offset;
		char *fw_name;
	} cocci_id/* drivers/net/dsa/lantiq_gswip.c 231 */;
	struct xway_gphy_match_data {
		char *fe_firmware_name;
		char *ge_firmware_name;
	} cocci_id/* drivers/net/dsa/lantiq_gswip.c 226 */;
	struct gswip_hw_info {
		int max_ports;
		int cpu_port;
	} cocci_id/* drivers/net/dsa/lantiq_gswip.c 221 */;
	struct platform_driver cocci_id/* drivers/net/dsa/lantiq_gswip.c 1953 */;
	const struct of_device_id cocci_id/* drivers/net/dsa/lantiq_gswip.c 1947 */[];
	const struct gswip_hw_info cocci_id/* drivers/net/dsa/lantiq_gswip.c 1942 */;
	struct platform_device *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1828 */;
	const struct of_device_id *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1766 */;
	struct device *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1764 */;
	struct device_node *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1762 */;
	char cocci_id/* drivers/net/dsa/lantiq_gswip.c 1702 */[10];
	size_t cocci_id/* drivers/net/dsa/lantiq_gswip.c 1652 */;
	dma_addr_t cocci_id/* drivers/net/dsa/lantiq_gswip.c 1650 */;
	void *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1649 */;
	const struct firmware *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1648 */;
	struct gswip_gphy_fw *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1645 */;
	const struct xway_gphy_match_data cocci_id/* drivers/net/dsa/lantiq_gswip.c 1621 */;
	const struct dsa_switch_ops cocci_id/* drivers/net/dsa/lantiq_gswip.c 1596 */;
	u64 cocci_id/* drivers/net/dsa/lantiq_gswip.c 1573 */;
	const struct gswip_rmon_cnt_desc *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1571 */;
	uint64_t *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1568 */;
	struct dsa_switch *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1567 */;
	void cocci_id/* drivers/net/dsa/lantiq_gswip.c 1567 */;
	u32 cocci_id/* drivers/net/dsa/lantiq_gswip.c 1541 */;
	uint8_t *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1529 */;
	struct phy_device *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1519 */;
	phy_interface_t cocci_id/* drivers/net/dsa/lantiq_gswip.c 1509 */;
	const struct phylink_link_state *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1460 */;
	unsigned char cocci_id/* drivers/net/dsa/lantiq_gswip.c 1359 */[6];
	dsa_fdb_dump_cb_t *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1355 */;
	const unsigned char *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1300 */;
	u8 cocci_id/* drivers/net/dsa/lantiq_gswip.c 1268 */;
	const struct switchdev_obj_port_vlan *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1185 */;
	struct net_device *cocci_id/* drivers/net/dsa/lantiq_gswip.c 1103 */;
}
