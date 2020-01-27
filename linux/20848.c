cocci_test_suite() {
	unsigned char *cocci_id/* arch/x86/kvm/emulate.c 966 */;
	void *cocci_id/* arch/x86/kvm/emulate.c 959 */;
	_type cocci_id/* arch/x86/kvm/emulate.c 933 */;
	struct segmented_address cocci_id/* arch/x86/kvm/emulate.c 882 */;
	unsigned long cocci_id/* arch/x86/kvm/emulate.c 880 */;
	unsigned cocci_id/* arch/x86/kvm/emulate.c 879 */;
	struct x86_emulate_ctxt *cocci_id/* arch/x86/kvm/emulate.c 876 */;
	int cocci_id/* arch/x86/kvm/emulate.c 876 */;
	unsigned int cocci_id/* arch/x86/kvm/emulate.c 839 */;
	const struct desc_struct *cocci_id/* arch/x86/kvm/emulate.c 801 */;
	u64 cocci_id/* arch/x86/kvm/emulate.c 723 */;
	u8 cocci_id/* arch/x86/kvm/emulate.c 712 */;
	u32 cocci_id/* arch/x86/kvm/emulate.c 710 */;
	ulong cocci_id/* arch/x86/kvm/emulate.c 709 */;
	struct desc_struct cocci_id/* arch/x86/kvm/emulate.c 707 */;
	enum x86emul_mode cocci_id/* arch/x86/kvm/emulate.c 705 */;
	ulong *cocci_id/* arch/x86/kvm/emulate.c 705 */;
	bool cocci_id/* arch/x86/kvm/emulate.c 704 */;
	unsigned *cocci_id/* arch/x86/kvm/emulate.c 703 */;
	s8 cocci_id/* arch/x86/kvm/emulate.c 5678 */;
	void (*cocci_id/* arch/x86/kvm/emulate.c 5466 */)(struct fastop *);
	u16 *cocci_id/* arch/x86/kvm/emulate.c 527 */;
	u8 *cocci_id/* arch/x86/kvm/emulate.c 524 */;
	unsigned long *cocci_id/* arch/x86/kvm/emulate.c 519 */;
	struct opcode cocci_id/* arch/x86/kvm/emulate.c 5151 */;
	struct x86_instruction_info cocci_id/* arch/x86/kvm/emulate.c 497 */;
	s64 cocci_id/* arch/x86/kvm/emulate.c 4958 */;
	s32 cocci_id/* arch/x86/kvm/emulate.c 4955 */;
	s16 cocci_id/* arch/x86/kvm/emulate.c 4952 */;
	enum x86_intercept_stage cocci_id/* arch/x86/kvm/emulate.c 495 */;
	enum x86_intercept cocci_id/* arch/x86/kvm/emulate.c 494 */;
	const struct opcode cocci_id/* arch/x86/kvm/emulate.c 4900 */[256];
	const struct mode_dual cocci_id/* arch/x86/kvm/emulate.c 4658 */;
	const struct escape cocci_id/* arch/x86/kvm/emulate.c 4591 */;
	const struct gprefix cocci_id/* arch/x86/kvm/emulate.c 4579 */;
	const struct instr_dual cocci_id/* arch/x86/kvm/emulate.c 4571 */;
	const struct group_dual cocci_id/* arch/x86/kvm/emulate.c 4559 */;
	const struct opcode cocci_id/* arch/x86/kvm/emulate.c 4447 */[];
	u64 cocci_id/* arch/x86/kvm/emulate.c 4197 */[];
	const size_t cocci_id/* arch/x86/kvm/emulate.c 4112 */;
	struct fxregs_state *cocci_id/* arch/x86/kvm/emulate.c 4111 */;
	struct fxregs_state cocci_id/* arch/x86/kvm/emulate.c 4055 */;
	size_t cocci_id/* arch/x86/kvm/emulate.c 4053 */;
	u32 *cocci_id/* arch/x86/kvm/emulate.c 4010 */;
	void (*cocci_id/* arch/x86/kvm/emulate.c 3815 */)(struct x86_emulate_ctxt *ctxt,
							  struct desc_ptr *ptr);
	long cocci_id/* arch/x86/kvm/emulate.c 3488 */;
	struct tss_segment_32 cocci_id/* arch/x86/kvm/emulate.c 3240 */;
	struct tss_segment_32 *cocci_id/* arch/x86/kvm/emulate.c 3156 */;
	int cocci_id/* arch/x86/kvm/emulate.c 313 */(struct x86_emulate_ctxt *ctxt,
						     void (*fop)(struct fastop *));
	struct tss_segment_16 cocci_id/* arch/x86/kvm/emulate.c 3101 */;
	struct tss_segment_16 *cocci_id/* arch/x86/kvm/emulate.c 3041 */;
	char cocci_id/* arch/x86/kvm/emulate.c 2585 */[512];
	enum x86_transfer_type{X86_TRANSFER_NONE, X86_TRANSFER_CALL_JMP, X86_TRANSFER_RET, X86_TRANSFER_TASK_SWITCH,} cocci_id/* arch/x86/kvm/emulate.c 257 */;
	struct mode_dual {
		struct opcode mode32;
		struct opcode mode64;
	} cocci_id/* arch/x86/kvm/emulate.c 250 */;
	struct instr_dual {
		struct opcode mod012;
		struct opcode mod3;
	} cocci_id/* arch/x86/kvm/emulate.c 245 */;
	struct escape {
		struct opcode op[8];
		struct opcode high[64];
	} cocci_id/* arch/x86/kvm/emulate.c 240 */;
	const char *cocci_id/* arch/x86/kvm/emulate.c 2374 */;
	struct gprefix {
		struct opcode pfx_no;
		struct opcode pfx_66;
		struct opcode pfx_f2;
		struct opcode pfx_f3;
	} cocci_id/* arch/x86/kvm/emulate.c 233 */;
	struct group_dual {
		struct opcode mod012[8];
		struct opcode mod3[8];
	} cocci_id/* arch/x86/kvm/emulate.c 228 */;
	long int cocci_id/* arch/x86/kvm/emulate.c 2224 */;
	unsigned short cocci_id/* arch/x86/kvm/emulate.c 2196 */;
	struct opcode {
		u64 flags:56;
		u64 intercept:8;
		union {
			int (*execute)(struct x86_emulate_ctxt *ctxt);
			const struct opcode *group;
			const struct group_dual *gdual;
			const struct gprefix *gprefix;
			const struct escape *esc;
			const struct instr_dual *idual;
			const struct mode_dual *mdual;
			void (*fastop)(struct fastop *fake);
		} u;
		int (*check_perm)(struct x86_emulate_ctxt *ctxt);
	} cocci_id/* arch/x86/kvm/emulate.c 212 */;
	struct fastop cocci_id/* arch/x86/kvm/emulate.c 210 */;
	u16 cocci_id/* arch/x86/kvm/emulate.c 2054 */;
	gva_t cocci_id/* arch/x86/kvm/emulate.c 2052 */;
	struct desc_ptr cocci_id/* arch/x86/kvm/emulate.c 2051 */;
	const struct x86_emulate_ops *cocci_id/* arch/x86/kvm/emulate.c 2049 */;
	struct desc_struct *cocci_id/* arch/x86/kvm/emulate.c 1611 */;
	enum x86_transfer_type cocci_id/* arch/x86/kvm/emulate.c 1610 */;
	struct desc_ptr *cocci_id/* arch/x86/kvm/emulate.c 1532 */;
	struct read_cache *cocci_id/* arch/x86/kvm/emulate.c 1485 */;
	const void *cocci_id/* arch/x86/kvm/emulate.c 1468 */;
	struct operand *cocci_id/* arch/x86/kvm/emulate.c 1371 */;
	void cocci_id/* arch/x86/kvm/emulate.c 1227 */;
	sse128_t *cocci_id/* arch/x86/kvm/emulate.c 1078 */;
	u64 *cocci_id/* arch/x86/kvm/emulate.c 1073 */;
	void (*cocci_id/* arch/x86/kvm/emulate.c 1052 */)(void);
}
