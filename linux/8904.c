cocci_test_suite() {
	struct vcap_data {
		u32 entry[VCAP_ENTRY_WIDTH];
		u32 mask[VCAP_ENTRY_WIDTH];
		u32 action[VCAP_ENTRY_WIDTH];
		u32 counter[VCAP_COUNTER_WIDTH];
		u32 tg;
		u32 type;
		u32 tg_sw;
		u32 cnt;
		u32 key_offset;
		u32 action_offset;
		u32 counter_offset;
		u32 tg_value;
		u32 tg_mask;
	} cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 82 */;
	enum vcap_cmd{VCAP_CMD_WRITE=0, VCAP_CMD_READ=1, VCAP_CMD_MOVE_UP=2, VCAP_CMD_MOVE_DOWN=3, VCAP_CMD_INITIALIZE=4,} cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 71 */;
	enum vcap_sel{VCAP_SEL_ENTRY=0x1, VCAP_SEL_ACTION=0x2, VCAP_SEL_COUNTER=0x4, VCAP_SEL_ALL=0x7,} cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 64 */;
	struct ocelot_ace_rule cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 608 */;
	struct list_head *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 598 */;
	struct vcap_data cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 580 */;
	struct ocelot *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 579 */;
	struct ocelot_ace_rule *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 577 */;
	struct ocelot_vcap_u48 *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 441 */;
	struct ocelot_vcap_u8 cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 440 */;
	struct ocelot_vcap_ipv4 cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 439 */;
	struct ocelot_vcap_udp_tcp *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 438 */;
	struct ocelot_ace_frame_ipv6 *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 437 */;
	struct ocelot_ace_frame_ipv4 *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 436 */;
	enum ocelot_vcap_bit cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 433 */;
	struct ocelot_ace_frame_arp *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 406 */;
	struct ocelot_ace_frame_snap *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 395 */;
	const struct vcap_props cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 39 */;
	struct ocelot_ace_frame_llc *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 382 */;
	struct ocelot_ace_frame_etype *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 367 */;
	struct ocelot_vcap_u64 cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 334 */;
	struct ocelot_ace_vlan *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 333 */;
	enum ocelot_ace_action cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 307 */;
	struct vcap_data *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 306 */;
	void cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 306 */;
	u8 *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 252 */;
	u32 *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 232 */;
	u32 cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 192 */;
	int cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 190 */;
	struct vcap_props {
		const char *name;
		u16 tg_width;
		u16 sw_count;
		u16 entry_count;
		u16 entry_words;
		u16 entry_width;
		u16 action_count;
		u16 action_words;
		u16 action_width;
		u16 action_type_width;
		struct {
			u16 width;
			u16 count;
		} action_table[2];
		u16 counter_words;
		u16 counter_width;
	} cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 17 */;
	struct ocelot_acl_block *cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 15 */;
	u16 cocci_id/* drivers/net/ethernet/mscc/ocelot_ace.c 103 */;
}