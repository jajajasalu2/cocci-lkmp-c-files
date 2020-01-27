cocci_test_suite() {
	struct tb_cap_any cocci_id/* drivers/thunderbolt/cap.c 75 */;
	u32 cocci_id/* drivers/thunderbolt/cap.c 72 */;
	enum tb_port_cap cocci_id/* drivers/thunderbolt/cap.c 70 */;
	struct tb_port *cocci_id/* drivers/thunderbolt/cap.c 70 */;
	int cocci_id/* drivers/thunderbolt/cap.c 70 */;
	void cocci_id/* drivers/thunderbolt/cap.c 55 */;
	struct tb_switch *cocci_id/* drivers/thunderbolt/cap.c 28 */;
	bool cocci_id/* drivers/thunderbolt/cap.c 26 */;
	struct tb_cap_any {
		union {
			struct tb_cap_basic basic;
			struct tb_cap_extended_short extended_short;
			struct tb_cap_extended_long extended_long;
		};
	}__packed cocci_id/* drivers/thunderbolt/cap.c 18 */;
	enum tb_switch_vse_cap cocci_id/* drivers/thunderbolt/cap.c 147 */;
	enum tb_switch_cap cocci_id/* drivers/thunderbolt/cap.c 116 */;
}
