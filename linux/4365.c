cocci_test_suite() {
	const struct si_sm_handlers cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 523 */;
	struct si_sm_data cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 502 */;
	enum kcs_states{KCS_IDLE, KCS_START_OP, KCS_WAIT_WRITE_START, KCS_WAIT_WRITE, KCS_WAIT_WRITE_END, KCS_WAIT_READ, KCS_ERROR0, KCS_ERROR1, KCS_ERROR2, KCS_ERROR3, KCS_HOSED,} cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 42 */;
	enum si_sm_result cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 326 */;
	unsigned int cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 293 */;
	unsigned char *cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 292 */;
	void cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 244 */;
	long cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 213 */;
	struct si_sm_data *cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 212 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 212 */;
	int cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 212 */;
	char *cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 185 */;
	struct si_sm_io *cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 124 */;
	struct si_sm_data {
		enum kcs_states state;
		struct si_sm_io *io;
		unsigned char write_data[MAX_KCS_WRITE_SIZE];
		int write_pos;
		int write_count;
		int orig_write_count;
		unsigned char read_data[MAX_KCS_READ_SIZE];
		int read_pos;
		int truncated;
		unsigned int error_retries;
		long ibf_timeout;
		long obf_timeout;
		unsigned long error0_timeout;
	} cocci_id/* drivers/char/ipmi/ipmi_kcs_sm.c 106 */;
}
