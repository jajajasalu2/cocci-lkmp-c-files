cocci_test_suite() {
	uint64_t *cocci_id/* drivers/net/dsa/lan9303-core.c 986 */;
	uint8_t *cocci_id/* drivers/net/dsa/lan9303-core.c 972 */;
	const struct lan9303_mib_desc cocci_id/* drivers/net/dsa/lan9303-core.c 931 */[];
	struct lan9303_mib_desc {
		unsigned int offset;
		const char *name;
	} cocci_id/* drivers/net/dsa/lan9303-core.c 926 */;
	enum dsa_tag_protocol cocci_id/* drivers/net/dsa/lan9303-core.c 885 */;
	unsigned int cocci_id/* drivers/net/dsa/lan9303-core.c 719 */;
	struct lan9303_alr_cache_entry *cocci_id/* drivers/net/dsa/lan9303-core.c 678 */;
	const u8 *cocci_id/* drivers/net/dsa/lan9303-core.c 675 */;
	u8 cocci_id/* drivers/net/dsa/lan9303-core.c 646 */;
	bool cocci_id/* drivers/net/dsa/lan9303-core.c 634 */;
	u8 cocci_id/* drivers/net/dsa/lan9303-core.c 633 */[ETH_ALEN];
	struct port_fdb_dump_ctx *cocci_id/* drivers/net/dsa/lan9303-core.c 632 */;
	struct port_fdb_dump_ctx {
		int port;
		void *data;
		dsa_fdb_dump_cb_t *cb;
	} cocci_id/* drivers/net/dsa/lan9303-core.c 623 */;
	struct del_port_learned_ctx *cocci_id/* drivers/net/dsa/lan9303-core.c 612 */;
	void *cocci_id/* drivers/net/dsa/lan9303-core.c 610 */;
	int cocci_id/* drivers/net/dsa/lan9303-core.c 610 */;
	u32 cocci_id/* drivers/net/dsa/lan9303-core.c 609 */;
	struct lan9303 *cocci_id/* drivers/net/dsa/lan9303-core.c 609 */;
	void cocci_id/* drivers/net/dsa/lan9303-core.c 609 */;
	struct del_port_learned_ctx {
		int port;
	} cocci_id/* drivers/net/dsa/lan9303-core.c 604 */;
	u8 cocci_id/* drivers/net/dsa/lan9303-core.c 594 */[6];
	alr_loop_cb_t *cocci_id/* drivers/net/dsa/lan9303-core.c 563 */;
	void cocci_id/* drivers/net/dsa/lan9303-core.c 560 */(struct lan9303 *chip,
							      u32 dat0,
							      u32 dat1,
							      int portmap,
							      void *ctx);
	struct lan9303_alr_cache_entry cocci_id/* drivers/net/dsa/lan9303-core.c 522 */;
	const int cocci_id/* drivers/net/dsa/lan9303-core.c 498 */[];
	const struct lan9303_phy_ops cocci_id/* drivers/net/dsa/lan9303-core.c 360 */;
	u16 cocci_id/* drivers/net/dsa/lan9303-core.c 332 */;
	u32 *cocci_id/* drivers/net/dsa/lan9303-core.c 222 */;
	struct regmap *cocci_id/* drivers/net/dsa/lan9303-core.c 222 */;
	const struct regmap_access_table cocci_id/* drivers/net/dsa/lan9303-core.c 214 */;
	const struct regmap_range cocci_id/* drivers/net/dsa/lan9303-core.c 201 */[];
	struct device_node *cocci_id/* drivers/net/dsa/lan9303-core.c 1329 */;
	const struct dsa_switch_ops cocci_id/* drivers/net/dsa/lan9303-core.c 1259 */;
	const struct switchdev_obj_port_mdb *cocci_id/* drivers/net/dsa/lan9303-core.c 1236 */;
	struct port_fdb_dump_ctx cocci_id/* drivers/net/dsa/lan9303-core.c 1206 */;
	dsa_fdb_dump_cb_t *cocci_id/* drivers/net/dsa/lan9303-core.c 1203 */;
	const unsigned char *cocci_id/* drivers/net/dsa/lan9303-core.c 1177 */;
	struct del_port_learned_ctx cocci_id/* drivers/net/dsa/lan9303-core.c 1168 */;
	struct net_device *cocci_id/* drivers/net/dsa/lan9303-core.c 1100 */;
	struct phy_device *cocci_id/* drivers/net/dsa/lan9303-core.c 1041 */;
	struct dsa_switch *cocci_id/* drivers/net/dsa/lan9303-core.c 1040 */;
}
