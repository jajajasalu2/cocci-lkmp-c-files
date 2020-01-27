cocci_test_suite() {
	struct si_sm_data {
		enum bt_states state;
		unsigned char seq;
		struct si_sm_io *io;
		unsigned char write_data[IPMI_MAX_MSG_LENGTH + 2];
		int write_count;
		unsigned char read_data[IPMI_MAX_MSG_LENGTH + 2];
		int read_count;
		int truncated;
		long timeout;
		int error_retries;
		int nonzero_status;
		enum bt_states complete;
		long BT_CAP_req2rsp;
		int BT_CAP_retries;
	} cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 76 */;
	const struct si_sm_handlers cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 686 */;
	struct si_sm_data *cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 677 */;
	void cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 677 */;
	enum si_sm_result cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 619 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 618 */[8];
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 617 */[];
	enum bt_states{BT_STATE_IDLE=0, BT_STATE_XACTION_START, BT_STATE_WRITE_BYTES, BT_STATE_WRITE_CONSUME, BT_STATE_READ_WAIT, BT_STATE_CLEAR_B2H, BT_STATE_READ_BYTES, BT_STATE_RESET1, BT_STATE_RESET2, BT_STATE_RESET3, BT_STATE_RESTART, BT_STATE_PRINTME, BT_STATE_LONG_BUSY,} cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 51 */;
	enum bt_states cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 451 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 450 */;
	long cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 448 */;
	char *cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 386 */;
	int cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 29 */;
	unsigned int cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 247 */;
	unsigned char *cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 246 */;
	struct si_sm_data cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 175 */;
	struct si_sm_io *cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 173 */;
	char cocci_id/* drivers/char/ipmi/ipmi_bt_sm.c 151 */[40];
}
