cocci_test_suite() {
	const u8 *cocci_id/* arch/arm/net/bpf_jit_32.c 768 */;
	enum{BPF_R2_HI, BPF_R2_LO, BPF_R3_HI, BPF_R3_LO, BPF_R4_HI, BPF_R4_LO, BPF_R5_HI, BPF_R5_LO, BPF_R7_HI, BPF_R7_LO, BPF_R8_HI, BPF_R8_LO, BPF_R9_HI, BPF_R9_LO, BPF_FP_HI, BPF_FP_LO, BPF_TC_HI, BPF_TC_LO, BPF_AX_HI, BPF_AX_LO, BPF_JIT_SCRATCH_REGS,} cocci_id/* arch/arm/net/bpf_jit_32.c 73 */;
	const s8 cocci_id/* arch/arm/net/bpf_jit_32.c 713 */[];
	const s8 *cocci_id/* arch/arm/net/bpf_jit_32.c 533 */;
	s8 cocci_id/* arch/arm/net/bpf_jit_32.c 524 */;
	const struct jit_ctx *cocci_id/* arch/arm/net/bpf_jit_32.c 400 */;
	u8 cocci_id/* arch/arm/net/bpf_jit_32.c 299 */;
	s16 cocci_id/* arch/arm/net/bpf_jit_32.c 299 */;
	u32 cocci_id/* arch/arm/net/bpf_jit_32.c 219 */;
	struct jit_ctx *cocci_id/* arch/arm/net/bpf_jit_32.c 219 */;
	int cocci_id/* arch/arm/net/bpf_jit_32.c 219 */;
	void cocci_id/* arch/arm/net/bpf_jit_32.c 219 */;
	void *cocci_id/* arch/arm/net/bpf_jit_32.c 1990 */;
	u32 *cocci_id/* arch/arm/net/bpf_jit_32.c 1960 */;
	u8 *cocci_id/* arch/arm/net/bpf_jit_32.c 1866 */;
	unsigned int cocci_id/* arch/arm/net/bpf_jit_32.c 1864 */;
	struct jit_ctx cocci_id/* arch/arm/net/bpf_jit_32.c 1863 */;
	bool cocci_id/* arch/arm/net/bpf_jit_32.c 1862 */;
	struct bpf_binary_header *cocci_id/* arch/arm/net/bpf_jit_32.c 1861 */;
	struct bpf_prog *cocci_id/* arch/arm/net/bpf_jit_32.c 1858 */;
	const struct bpf_insn *cocci_id/* arch/arm/net/bpf_jit_32.c 1813 */;
	const struct bpf_prog *cocci_id/* arch/arm/net/bpf_jit_32.c 1809 */;
	const u32 cocci_id/* arch/arm/net/bpf_jit_32.c 1764 */;
	u64 cocci_id/* arch/arm/net/bpf_jit_32.c 1575 */;
	const s8 cocci_id/* arch/arm/net/bpf_jit_32.c 136 */[][2];
	s32 cocci_id/* arch/arm/net/bpf_jit_32.c 1342 */;
	const bool cocci_id/* arch/arm/net/bpf_jit_32.c 1339 */;
	const int cocci_id/* arch/arm/net/bpf_jit_32.c 1338 */;
	const s32 cocci_id/* arch/arm/net/bpf_jit_32.c 1337 */;
	const s16 cocci_id/* arch/arm/net/bpf_jit_32.c 1336 */;
	const u8 cocci_id/* arch/arm/net/bpf_jit_32.c 1331 */;
	u16 cocci_id/* arch/arm/net/bpf_jit_32.c 1311 */;
	const s8 cocci_id/* arch/arm/net/bpf_jit_32.c 1263 */;
	struct bpf_prog cocci_id/* arch/arm/net/bpf_jit_32.c 1190 */;
	struct bpf_array cocci_id/* arch/arm/net/bpf_jit_32.c 1150 */;
	struct jit_ctx {
		const struct bpf_prog *prog;
		unsigned int idx;
		unsigned int prologue_bytes;
		unsigned int epilogue_offset;
		unsigned int cpu_architecture;
		u32 flags;
		u32 *offsets;
		u32 *target;
		u32 stack_size;
#if __LINUX_ARM_ARCH__ < 7
		u16 epilogue_bytes;
		u16 imm_count;
		u32 *imms;
#endif
	} cocci_id/*  1 */;
}
