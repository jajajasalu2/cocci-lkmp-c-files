cocci_test_suite() {
	u32 cocci_id/* drivers/net/dsa/dsa_loop.c 94 */;
	uint8_t *cocci_id/* drivers/net/dsa/dsa_loop.c 94 */;
	enum dsa_tag_protocol cocci_id/* drivers/net/dsa/dsa_loop.c 63 */;
	struct phy_device *cocci_id/* drivers/net/dsa/dsa_loop.c 61 */[PHY_MAX_ADDR];
	struct dsa_loop_priv {
		struct mii_bus *bus;
		unsigned int port_base;
		struct dsa_loop_vlan vlans[DSA_LOOP_VLANS];
		struct net_device *netdev;
		struct dsa_loop_port ports[DSA_MAX_PORTS];
		u16 pvid;
	} cocci_id/* drivers/net/dsa/dsa_loop.c 52 */;
	struct dsa_loop_port {
		struct dsa_loop_mib_entry mib[__DSA_LOOP_CNT_MAX];
	} cocci_id/* drivers/net/dsa/dsa_loop.c 46 */;
	struct dsa_loop_mib_entry cocci_id/* drivers/net/dsa/dsa_loop.c 39 */[];
	unsigned int cocci_id/* drivers/net/dsa/dsa_loop.c 353 */;
	void __exit cocci_id/* drivers/net/dsa/dsa_loop.c 351 */;
	struct fixed_phy_status cocci_id/* drivers/net/dsa/dsa_loop.c 337 */;
	int __init cocci_id/* drivers/net/dsa/dsa_loop.c 335 */;
	struct mdio_driver cocci_id/* drivers/net/dsa/dsa_loop.c 325 */;
	void cocci_id/* drivers/net/dsa/dsa_loop.c 316 */;
	enum dsa_loop_mib_counters{DSA_LOOP_PHY_READ_OK, DSA_LOOP_PHY_READ_ERR, DSA_LOOP_PHY_WRITE_OK, DSA_LOOP_PHY_WRITE_ERR, __DSA_LOOP_CNT_MAX,} cocci_id/* drivers/net/dsa/dsa_loop.c 31 */;
	struct dsa_switch *cocci_id/* drivers/net/dsa/dsa_loop.c 281 */;
	struct dsa_loop_priv *cocci_id/* drivers/net/dsa/dsa_loop.c 280 */;
	struct dsa_loop_pdata *cocci_id/* drivers/net/dsa/dsa_loop.c 279 */;
	struct mdio_device *cocci_id/* drivers/net/dsa/dsa_loop.c 277 */;
	int cocci_id/* drivers/net/dsa/dsa_loop.c 277 */;
	struct dsa_loop_mib_entry {
		char name[ETH_GSTRING_LEN];
		unsigned long val;
	} cocci_id/* drivers/net/dsa/dsa_loop.c 26 */;
	const struct dsa_switch_ops cocci_id/* drivers/net/dsa/dsa_loop.c 259 */;
	struct dsa_loop_vlan {
		u16 members;
		u16 untagged;
	} cocci_id/* drivers/net/dsa/dsa_loop.c 21 */;
	struct dsa_loop_vlan *cocci_id/* drivers/net/dsa/dsa_loop.c 206 */;
	bool cocci_id/* drivers/net/dsa/dsa_loop.c 202 */;
	const struct switchdev_obj_port_vlan *cocci_id/* drivers/net/dsa/dsa_loop.c 200 */;
	u8 cocci_id/* drivers/net/dsa/dsa_loop.c 165 */;
	struct net_device *cocci_id/* drivers/net/dsa/dsa_loop.c 149 */;
	u16 cocci_id/* drivers/net/dsa/dsa_loop.c 133 */;
	struct mii_bus *cocci_id/* drivers/net/dsa/dsa_loop.c 120 */;
	uint64_t *cocci_id/* drivers/net/dsa/dsa_loop.c 108 */;
}
