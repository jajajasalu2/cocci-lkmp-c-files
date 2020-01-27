cocci_test_suite() {
	struct si_sm_data {
		enum smic_states state;
		struct si_sm_io *io;
		unsigned char write_data[MAX_SMIC_WRITE_SIZE];
		int write_pos;
		int write_count;
		int orig_write_count;
		unsigned char read_data[MAX_SMIC_READ_SIZE];
		int read_pos;
		int truncated;
		unsigned int error_retries;
		long smic_timeout;
	} cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 88 */;
	const struct si_sm_handlers cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 568 */;
	struct si_sm_data cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 565 */;
	enum smic_states{SMIC_IDLE, SMIC_START_OP, SMIC_OP_OK, SMIC_WRITE_START, SMIC_WRITE_NEXT, SMIC_WRITE_END, SMIC_WRITE2READ, SMIC_READ_START, SMIC_READ_NEXT, SMIC_READ_END, SMIC_HOSED,} cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 44 */;
	int cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 40 */;
	enum si_sm_result cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 315 */;
	long cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 315 */;
	void cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 233 */;
	char *cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 210 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 187 */;
	unsigned char *cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 150 */;
	struct si_sm_io *cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 103 */;
	struct si_sm_data *cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 102 */;
	unsigned int cocci_id/* drivers/char/ipmi/ipmi_smic_sm.c 102 */;
}
