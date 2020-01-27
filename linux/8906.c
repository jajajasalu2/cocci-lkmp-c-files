cocci_test_suite() {
	enum mscc_qos_rate_mode{MSCC_QOS_RATE_MODE_DISABLED, MSCC_QOS_RATE_MODE_LINE, MSCC_QOS_RATE_MODE_DATA, MSCC_QOS_RATE_MODE_FRAME, __MSCC_QOS_RATE_MODE_END, NUM_MSCC_QOS_RATE_MODE=__MSCC_QOS_RATE_MODE_END, MSCC_QOS_RATE_MODE_MAX=__MSCC_QOS_RATE_MODE_END - 1,} cocci_id/* drivers/net/ethernet/mscc/ocelot_police.c 9 */;
	u8 cocci_id/* drivers/net/ethernet/mscc/ocelot_police.c 50 */;
	bool cocci_id/* drivers/net/ethernet/mscc/ocelot_police.c 48 */;
	struct qos_policer_conf *cocci_id/* drivers/net/ethernet/mscc/ocelot_police.c 44 */;
	u32 cocci_id/* drivers/net/ethernet/mscc/ocelot_police.c 43 */;
	struct qos_policer_conf {
		enum mscc_qos_rate_mode mode;
		bool dlb;
		bool cf;
		u32 cir;
		u32 cbs;
		u32 pir;
		u32 pbs;
		u8 ipg;
	} cocci_id/* drivers/net/ethernet/mscc/ocelot_police.c 32 */;
	struct qos_policer_conf cocci_id/* drivers/net/ethernet/mscc/ocelot_police.c 180 */;
	struct ocelot_policer *cocci_id/* drivers/net/ethernet/mscc/ocelot_police.c 178 */;
	struct ocelot *cocci_id/* drivers/net/ethernet/mscc/ocelot_police.c 177 */;
	int cocci_id/* drivers/net/ethernet/mscc/ocelot_police.c 177 */;
}
