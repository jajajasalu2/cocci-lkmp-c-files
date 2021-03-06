cocci_test_suite() {
	struct elf64_phdr {
		uint32_t p_type;
		uint32_t p_flags;
		uint64_t p_offset;
		uint64_t p_vaddr;
		uint64_t p_paddr;
		uint64_t p_filesz;
		uint64_t p_memsz;
		uint64_t p_align;
	} cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 95 */;
	struct elf64_hdr {
		uint8_t e_ident[16];
		uint16_t e_type;
		uint16_t e_machine;
		uint32_t e_version;
		uint64_t e_entry;
		uint64_t e_phoff;
		uint64_t e_shoff;
		uint32_t e_flags;
		uint16_t e_ehsize;
		uint16_t e_phentsize;
		uint16_t e_phnum;
		uint16_t e_shentsize;
		uint16_t e_shnum;
		uint16_t e_shstrndx;
	} cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 78 */;
	void cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 71 */;
	pid_t cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 70 */;
	const char *cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 49 */;
	char **cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 49 */;
	long cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 49 */;
	char cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 427 */[64];
	char cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 391 */[1024];
	const char *cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 359 */[];
	char cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 335 */[4096];
	ssize_t cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 317 */;
	const size_t cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 315 */;
	unsigned long long cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 308 */;
	char cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 302 */[256];
	struct stat cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 296 */;
	char cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 291 */;
	int cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 258 */[2];
	int cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 256 */;
	volatile int *cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 247 */;
	struct sigaction cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 241 */;
	struct rlimit cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 237 */;
	siginfo_t *cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 218 */;
	const char cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 214 */[];
	bool cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 212 */;
	void *cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 156 */;
	struct iovec cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 153 */[3];
	struct elf64_phdr cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 151 */;
	struct elf64_hdr cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 150 */;
	const uint8_t *cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 148 */;
	size_t cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 148 */;
	const uint8_t cocci_id/* tools/testing/selftests/proc/proc-pid-vm.c 125 */[];
}
