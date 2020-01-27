cocci_test_suite() {
	union jump_code_union cocci_id/* arch/x86/kernel/jump_label.c 71 */;
	void __ref cocci_id/* arch/x86/kernel/jump_label.c 67 */;
	void *cocci_id/* arch/x86/kernel/jump_label.c 60 */;
	const void *cocci_id/* arch/x86/kernel/jump_label.c 45 */;
	const unsigned char *cocci_id/* arch/x86/kernel/jump_label.c 44 */;
	const unsigned char cocci_id/* arch/x86/kernel/jump_label.c 43 */[];
	int cocci_id/* arch/x86/kernel/jump_label.c 41 */;
	union jump_code_union *cocci_id/* arch/x86/kernel/jump_label.c 40 */;
	enum jump_label_type cocci_id/* arch/x86/kernel/jump_label.c 39 */;
	struct jump_entry *cocci_id/* arch/x86/kernel/jump_label.c 38 */;
	void cocci_id/* arch/x86/kernel/jump_label.c 38 */;
	unsigned char *cocci_id/* arch/x86/kernel/jump_label.c 27 */;
	union jump_code_union {
		char code[JUMP_LABEL_NOP_SIZE];
		struct {
			char jump;
			int offset;
		}__attribute__((packed));
	} cocci_id/* arch/x86/kernel/jump_label.c 19 */;
	enum{JL_STATE_START, JL_STATE_NO_UPDATE, JL_STATE_UPDATE,} cocci_id/* arch/x86/kernel/jump_label.c 170 */;
	struct text_poke_loc *cocci_id/* arch/x86/kernel/jump_label.c 110 */;
	bool cocci_id/* arch/x86/kernel/jump_label.c 107 */;
	struct text_poke_loc cocci_id/* arch/x86/kernel/jump_label.c 104 */[TP_VEC_MAX];
	struct text_poke_loc cocci_id/* arch/x86/kernel/jump_label.c 103 */;
}
