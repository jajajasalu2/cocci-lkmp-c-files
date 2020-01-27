cocci_test_suite() {
	enum{UNUSED, A_8, A_12, A_24, A_28, B_16, B_32, C_8, C_12, D20_20, D_20, D_36, F_8, F_12, F_16, F_24, F_28, F_32, I8_8, I8_32, I16_16, I16_32, I32_16, J12_12, J16_16, J16_32, J24_24, J32_16, L4_8, L4_12, L8_8, R_8, R_12, R_16, R_24, R_28, U4_8, U4_12, U4_16, U4_20, U4_24, U4_28, U4_32, U4_36, U8_8, U8_16, U8_24, U8_28, U8_32, U12_16, U16_16, U16_32, U32_16, VX_12, V_8, V_12, V_16, V_32, X_12,} cocci_id/* arch/s390/kernel/dis.c 73 */;
	struct s390_opcode_offset {
		unsigned char opcode;
		unsigned char mask;
		unsigned char byte;
		unsigned short offset;
		unsigned short count;
	}__packed cocci_id/* arch/s390/kernel/dis.c 65 */;
	char cocci_id/* arch/s390/kernel/dis.c 560 */[64];
	unsigned long cocci_id/* arch/s390/kernel/dis.c 558 */;
	void cocci_id/* arch/s390/kernel/dis.c 558 */;
	struct s390_insn {
		union {
			const char name[5];
			struct {
				unsigned char zero;
				unsigned int offset;
			}__packed;
		};
		unsigned char opfrag;
		unsigned char format;
	} cocci_id/* arch/s390/kernel/dis.c 53 */;
	char __user *cocci_id/* arch/s390/kernel/dis.c 500 */;
	mm_segment_t cocci_id/* arch/s390/kernel/dis.c 490 */;
	char cocci_id/* arch/s390/kernel/dis.c 489 */[128];
	unsigned char cocci_id/* arch/s390/kernel/dis.c 488 */[64];
	struct pt_regs *cocci_id/* arch/s390/kernel/dis.c 485 */;
	struct s390_operand {
		unsigned char bits;
		unsigned char shift;
		unsigned short flags;
	} cocci_id/* arch/s390/kernel/dis.c 47 */;
	void *cocci_id/* arch/s390/kernel/dis.c 465 */;
	char cocci_id/* arch/s390/kernel/dis.c 427 */;
	const unsigned char *cocci_id/* arch/s390/kernel/dis.c 424 */;
	char *cocci_id/* arch/s390/kernel/dis.c 421 */;
	unsigned char cocci_id/* arch/s390/kernel/dis.c 396 */;
	struct s390_opcode_offset *cocci_id/* arch/s390/kernel/dis.c 394 */;
	struct s390_insn *cocci_id/* arch/s390/kernel/dis.c 392 */;
	int cocci_id/* arch/s390/kernel/dis.c 347 */;
	const struct s390_operand *cocci_id/* arch/s390/kernel/dis.c 343 */;
	unsigned char *cocci_id/* arch/s390/kernel/dis.c 342 */;
	unsigned int cocci_id/* arch/s390/kernel/dis.c 342 */;
	struct s390_opcode_offset cocci_id/* arch/s390/kernel/dis.c 339 */[];
	struct s390_insn cocci_id/* arch/s390/kernel/dis.c 338 */[];
	char cocci_id/* arch/s390/kernel/dis.c 337 */[][7];
	const unsigned char cocci_id/* arch/s390/kernel/dis.c 197 */[][6];
	const struct s390_operand cocci_id/* arch/s390/kernel/dis.c 135 */[];
}
