cocci_test_suite() {
	uint32_t cocci_id/* arch/mips/netlogic/xlr/fmn.c 75 */;
	struct nlm_fmn_msg cocci_id/* arch/mips/netlogic/xlr/fmn.c 74 */;
	struct fmn_message_handler *cocci_id/* arch/mips/netlogic/xlr/fmn.c 71 */;
	irqreturn_t cocci_id/* arch/mips/netlogic/xlr/fmn.c 69 */;
	void *cocci_id/* arch/mips/netlogic/xlr/fmn.c 69 */;
	int cocci_id/* arch/mips/netlogic/xlr/fmn.c 69 */;
	struct fmn_message_handler {
		void (*action)(int, int, int, int, struct nlm_fmn_msg *,
			       void *);
		void *arg;
	} cocci_id/* arch/mips/netlogic/xlr/fmn.c 57 */[128];
	void cocci_id/* arch/mips/netlogic/xlr/fmn.c 194 */;
	void (*cocci_id/* arch/mips/netlogic/xlr/fmn.c 179 */)(int, int, int,
							       int,
							       struct nlm_fmn_msg *,
							       void *);
	int *cocci_id/* arch/mips/netlogic/xlr/fmn.c 122 */;
	struct xlr_fmn_info *cocci_id/* arch/mips/netlogic/xlr/fmn.c 121 */;
	struct irqaction cocci_id/* arch/mips/netlogic/xlr/fmn.c 113 */;
}
