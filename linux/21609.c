cocci_test_suite() {
	struct rv_jit_data {
		struct bpf_binary_header *header;
		u8 *image;
		struct rv_jit_context ctx;
	} cocci_id/* arch/riscv/net/bpf_jit_comp.c 86 */;
	struct rv_jit_context {
		struct bpf_prog *prog;
		u32 *insns;
		int ninsns;
		int epilogue_offset;
		int *offset;
		unsigned long flags;
		int stack_size;
	} cocci_id/* arch/riscv/net/bpf_jit_comp.c 76 */;
	s32 cocci_id/* arch/riscv/net/bpf_jit_comp.c 738 */;
	s16 cocci_id/* arch/riscv/net/bpf_jit_comp.c 737 */;
	struct bpf_prog_aux *cocci_id/* arch/riscv/net/bpf_jit_comp.c 734 */;
	u8 *cocci_id/* arch/riscv/net/bpf_jit_comp.c 723 */;
	int *cocci_id/* arch/riscv/net/bpf_jit_comp.c 690 */;
	struct bpf_prog cocci_id/* arch/riscv/net/bpf_jit_comp.c 659 */;
	enum{RV_CTX_F_SEEN_TAIL_CALL=0, RV_CTX_F_SEEN_CALL=RV_REG_RA, RV_CTX_F_SEEN_S1=RV_REG_S1, RV_CTX_F_SEEN_S2=RV_REG_S2, RV_CTX_F_SEEN_S3=RV_REG_S3, RV_CTX_F_SEEN_S4=RV_REG_S4, RV_CTX_F_SEEN_S5=RV_REG_S5, RV_CTX_F_SEEN_S6=RV_REG_S6,} cocci_id/* arch/riscv/net/bpf_jit_comp.c 65 */;
	struct bpf_array cocci_id/* arch/riscv/net/bpf_jit_comp.c 625 */;
	int cocci_id/* arch/riscv/net/bpf_jit_comp.c 564 */;
	u8 cocci_id/* arch/riscv/net/bpf_jit_comp.c 562 */;
	struct rv_jit_context *cocci_id/* arch/riscv/net/bpf_jit_comp.c 562 */;
	void cocci_id/* arch/riscv/net/bpf_jit_comp.c 562 */;
	s64 cocci_id/* arch/riscv/net/bpf_jit_comp.c 509 */;
	const int cocci_id/* arch/riscv/net/bpf_jit_comp.c 50 */[];
	u16 cocci_id/* arch/riscv/net/bpf_jit_comp.c 219 */;
	u32 *cocci_id/* arch/riscv/net/bpf_jit_comp.c 1611 */;
	u32 cocci_id/* arch/riscv/net/bpf_jit_comp.c 1580 */;
	struct rv_jit_data *cocci_id/* arch/riscv/net/bpf_jit_comp.c 1551 */;
	bool cocci_id/* arch/riscv/net/bpf_jit_comp.c 1549 */;
	struct bpf_prog *cocci_id/* arch/riscv/net/bpf_jit_comp.c 1547 */;
	const u32 cocci_id/* arch/riscv/net/bpf_jit_comp.c 154 */;
	unsigned long cocci_id/* arch/riscv/net/bpf_jit_comp.c 1539 */;
	void *cocci_id/* arch/riscv/net/bpf_jit_comp.c 1532 */;
	unsigned int cocci_id/* arch/riscv/net/bpf_jit_comp.c 1532 */;
	const struct bpf_insn *cocci_id/* arch/riscv/net/bpf_jit_comp.c 1514 */;
	const struct bpf_prog *cocci_id/* arch/riscv/net/bpf_jit_comp.c 1510 */;
	struct bpf_insn cocci_id/* arch/riscv/net/bpf_jit_comp.c 1254 */;
	u64 cocci_id/* arch/riscv/net/bpf_jit_comp.c 1211 */;
	enum{RV_REG_ZERO=0, RV_REG_RA=1, RV_REG_SP=2, RV_REG_GP=3, RV_REG_TP=4, RV_REG_T0=5, RV_REG_T1=6, RV_REG_T2=7, RV_REG_FP=8, RV_REG_S1=9, RV_REG_A0=10, RV_REG_A1=11, RV_REG_A2=12, RV_REG_A3=13, RV_REG_A4=14, RV_REG_A5=15, RV_REG_A6=16, RV_REG_A7=17, RV_REG_S2=18, RV_REG_S3=19, RV_REG_S4=20, RV_REG_S5=21, RV_REG_S6=22, RV_REG_S7=23, RV_REG_S8=24, RV_REG_S9=25, RV_REG_S10=26, RV_REG_S11=27, RV_REG_T3=28, RV_REG_T4=29, RV_REG_T5=30, RV_REG_T6=31,} cocci_id/* arch/riscv/net/bpf_jit_comp.c 12 */;
}
