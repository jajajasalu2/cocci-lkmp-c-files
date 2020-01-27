cocci_test_suite() {
	char cocci_id/* drivers/misc/altera-stapl/altera.c 861 */;
	enum altera_fpga_opcode{OP_NOP=0, OP_DUP, OP_SWP, OP_ADD, OP_SUB, OP_MULT, OP_DIV, OP_MOD, OP_SHL, OP_SHR, OP_NOT, OP_AND, OP_OR, OP_XOR, OP_INV, OP_GT, OP_LT, OP_RET, OP_CMPS, OP_PINT, OP_PRNT, OP_DSS, OP_DSSC, OP_ISS, OP_ISSC, OP_DPR=0x1c, OP_DPRL, OP_DPO, OP_DPOL, OP_IPR, OP_IPRL, OP_IPO, OP_IPOL, OP_PCHR, OP_EXIT, OP_EQU, OP_POPT, OP_ABS=0x2c, OP_BCH0, OP_PSH0=0x2f, OP_PSHL=0x40, OP_PSHV, OP_JMP, OP_CALL, OP_NEXT, OP_PSTR, OP_SINT=0x47, OP_ST, OP_ISTP, OP_DSTP, OP_SWPN, OP_DUPN, OP_POPV, OP_POPE, OP_POPA, OP_JMPZ, OP_DS, OP_IS, OP_DPRA, OP_DPOA, OP_IPRA, OP_IPOA, OP_EXPT, OP_PSHE, OP_PSHA, OP_DYNA, OP_EXPV=0x5c, OP_COPY=0x80, OP_REVA, OP_DSC, OP_ISC, OP_WAIT, OP_VS, OP_CMPA=0xc0, OP_VSC,} cocci_id/* drivers/misc/altera-stapl/altera.c 35 */;
	struct altera_state cocci_id/* drivers/misc/altera-stapl/altera.c 2431 */;
	const struct firmware *cocci_id/* drivers/misc/altera-stapl/altera.c 2402 */;
	struct altera_procinfo cocci_id/* drivers/misc/altera-stapl/altera.c 2374 */;
	long cocci_id/* drivers/misc/altera-stapl/altera.c 236 */;
	u8 cocci_id/* drivers/misc/altera-stapl/altera.c 235 */[4];
	struct altera_procinfo *cocci_id/* drivers/misc/altera-stapl/altera.c 2325 */;
	struct altera_procinfo **cocci_id/* drivers/misc/altera-stapl/altera.c 2322 */;
	char **cocci_id/* drivers/misc/altera-stapl/altera.c 2320 */;
	u32 cocci_id/* drivers/misc/altera-stapl/altera.c 232 */[3];
	u32 cocci_id/* drivers/misc/altera-stapl/altera.c 2215 */;
	u8 cocci_id/* drivers/misc/altera-stapl/altera.c 2214 */;
	u16 cocci_id/* drivers/misc/altera-stapl/altera.c 2210 */;
	s32 cocci_id/* drivers/misc/altera-stapl/altera.c 2207 */;
	u8 *cocci_id/* drivers/misc/altera-stapl/altera.c 2207 */;
	int cocci_id/* drivers/misc/altera-stapl/altera.c 2207 */;
	long *cocci_id/* drivers/misc/altera-stapl/altera.c 213 */;
	char *cocci_id/* drivers/misc/altera-stapl/altera.c 212 */;
	struct altera_config *cocci_id/* drivers/misc/altera-stapl/altera.c 211 */;
	s32 *cocci_id/* drivers/misc/altera-stapl/altera.c 207 */;
	struct altera_state *cocci_id/* drivers/misc/altera-stapl/altera.c 204 */;
	void *cocci_id/* drivers/misc/altera-stapl/altera.c 1582 */;
	char cocci_id/* drivers/misc/altera-stapl/altera.c 140 */[HEX_LINE_CHARS + 1];
	void cocci_id/* drivers/misc/altera-stapl/altera.c 138 */;
	int *cocci_id/* drivers/misc/altera-stapl/altera.c 120 */;
	struct altera_procinfo {
		char *name;
		u8 attrs;
		struct altera_procinfo *next;
	} cocci_id/* drivers/misc/altera-stapl/altera.c 113 */;
}
