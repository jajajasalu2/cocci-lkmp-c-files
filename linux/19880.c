cocci_test_suite() {
	struct insn {
		u32 match;
		enum fields fields;
	} cocci_id/* arch/mips/mm/uasm.c 72 */;
	struct uasm_reloc **cocci_id/* arch/mips/mm/uasm.c 566 */;
	struct uasm_reloc *cocci_id/* arch/mips/mm/uasm.c 532 */;
	struct uasm_label *cocci_id/* arch/mips/mm/uasm.c 532 */;
	void cocci_id/* arch/mips/mm/uasm.c 499 */(struct uasm_reloc *rel,
						   struct uasm_label *lab);
	enum opcode{insn_addiu, insn_addu, insn_and, insn_andi, insn_bbit0, insn_bbit1, insn_beq, insn_beql, insn_bgez, insn_bgezl, insn_bgtz, insn_blez, insn_bltz, insn_bltzl, insn_bne, insn_break, insn_cache, insn_cfc1, insn_cfcmsa, insn_ctc1, insn_ctcmsa, insn_daddiu, insn_daddu, insn_ddivu, insn_ddivu_r6, insn_di, insn_dins, insn_dinsm, insn_dinsu, insn_divu, insn_divu_r6, insn_dmfc0, insn_dmodu, insn_dmtc0, insn_dmultu, insn_dmulu, insn_drotr, insn_drotr32, insn_dsbh, insn_dshd, insn_dsll, insn_dsll32, insn_dsllv, insn_dsra, insn_dsra32, insn_dsrav, insn_dsrl, insn_dsrl32, insn_dsrlv, insn_dsubu, insn_eret, insn_ext, insn_ins, insn_j, insn_jal, insn_jalr, insn_jr, insn_lb, insn_lbu, insn_ld, insn_lddir, insn_ldpte, insn_ldx, insn_lh, insn_lhu, insn_ll, insn_lld, insn_lui, insn_lw, insn_lwu, insn_lwx, insn_mfc0, insn_mfhc0, insn_mfhi, insn_mflo, insn_modu, insn_movn, insn_movz, insn_mtc0, insn_mthc0, insn_mthi, insn_mtlo, insn_mul, insn_multu, insn_mulu, insn_nor, insn_or, insn_ori, insn_pref, insn_rfe, insn_rotr, insn_sb, insn_sc, insn_scd, insn_seleqz, insn_selnez, insn_sd, insn_sh, insn_sll, insn_sllv, insn_slt, insn_slti, insn_sltiu, insn_sltu, insn_sra, insn_srav, insn_srl, insn_srlv, insn_subu, insn_sw, insn_sync, insn_syscall, insn_tlbp, insn_tlbr, insn_tlbwi, insn_tlbwr, insn_wait, insn_wsbh, insn_xor, insn_xori, insn_yield, insn_invalid,} cocci_id/* arch/mips/mm/uasm.c 48 */;
	u32 **cocci_id/* arch/mips/mm/uasm.c 475 */;
	unsigned int cocci_id/* arch/mips/mm/uasm.c 475 */;
	long cocci_id/* arch/mips/mm/uasm.c 475 */;
	void cocci_id/* arch/mips/mm/uasm.c 475 */;
	u32 *cocci_id/* arch/mips/mm/uasm.c 412 */;
	struct uasm_label **cocci_id/* arch/mips/mm/uasm.c 412 */;
	int cocci_id/* arch/mips/mm/uasm.c 412 */;
	signed int cocci_id/* arch/mips/mm/uasm.c 394 */;
	enum fields{RS=0x001, RT=0x002, RD=0x004, RE=0x008, SIMM=0x010, UIMM=0x020, BIMM=0x040, JIMM=0x080, FUNC=0x100, SET=0x200, SCIMM=0x400, SIMM9=0x800,} cocci_id/* arch/mips/mm/uasm.c 16 */;
	void cocci_id/* arch/mips/mm/uasm.c 150 */(u32 **buf, enum opcode opc,
						   ...);
	u32 cocci_id/* arch/mips/mm/uasm.c 136 */;
	s32 cocci_id/* arch/mips/mm/uasm.c 128 */;
}
