cocci_test_suite() {
	u32 cocci_id/* arch/mips/kernel/binfmt_elfo32.c 98 */;
	u64 cocci_id/* arch/mips/kernel/binfmt_elfo32.c 97 */;
	struct old_timeval32 *cocci_id/* arch/mips/kernel/binfmt_elfo32.c 91 */;
	unsigned long cocci_id/* arch/mips/kernel/binfmt_elfo32.c 91 */;
	void cocci_id/* arch/mips/kernel/binfmt_elfo32.c 90 */;
	struct elf_prpsinfo32 {
		char pr_state;
		char pr_sname;
		char pr_zomb;
		char pr_nice;
		unsigned int pr_flag;
		__kernel_uid_t pr_uid;
		__kernel_gid_t pr_gid;
		pid_t pr_pid,pr_ppid,pr_pgrp,pr_sid;
		char pr_fname[16];
		char pr_psargs[ELF_PRARGSZ];
	} cocci_id/* arch/mips/kernel/binfmt_elfo32.c 71 */;
	struct elf_prstatus32 {
		struct elf_siginfo pr_info;
		short pr_cursig;
		unsigned int pr_sigpend;
		unsigned int pr_sighold;
		pid_t pr_pid;
		pid_t pr_ppid;
		pid_t pr_pgrp;
		pid_t pr_sid;
		struct old_timeval32 pr_utime;
		struct old_timeval32 pr_stime;
		struct old_timeval32 pr_cutime;
		struct old_timeval32 pr_cstime;
		elf_gregset_t pr_reg;
		int pr_fpvalid;
	} cocci_id/* arch/mips/kernel/binfmt_elfo32.c 52 */;
	elf_fpreg_t cocci_id/* arch/mips/kernel/binfmt_elfo32.c 30 */[ELF_NFPREG];
	double cocci_id/* arch/mips/kernel/binfmt_elfo32.c 29 */;
	elf_greg_t cocci_id/* arch/mips/kernel/binfmt_elfo32.c 27 */[ELF_NGREG];
	unsigned int cocci_id/* arch/mips/kernel/binfmt_elfo32.c 26 */;
}
