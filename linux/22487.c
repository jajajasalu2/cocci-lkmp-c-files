cocci_test_suite() {
	struct snd_mixart_elf32_ehdr *cocci_id/* sound/pci/mixart/mixart_hwdep.c 92 */;
	char cocci_id/* sound/pci/mixart/mixart_hwdep.c 91 */[4];
	struct snd_mixart_elf32_phdr {
		__be32 p_type;
		__be32 p_offset;
		__be32 p_vaddr;
		__be32 p_paddr;
		__be32 p_filesz;
		__be32 p_memsz;
		__be32 p_flags;
		__be32 p_align;
	} cocci_id/* sound/pci/mixart/mixart_hwdep.c 78 */;
	struct snd_mixart_elf32_ehdr {
		u8 e_ident[16];
		__be16 e_type;
		__be16 e_machine;
		__be32 e_version;
		__be32 e_entry;
		__be32 e_phoff;
		__be32 e_shoff;
		__be32 e_flags;
		__be16 e_ehsize;
		__be16 e_phentsize;
		__be16 e_phnum;
		__be16 e_shentsize;
		__be16 e_shnum;
		__be16 e_shstrndx;
	} cocci_id/* sound/pci/mixart/mixart_hwdep.c 61 */;
	char cocci_id/* sound/pci/mixart/mixart_hwdep.c 554 */[32];
	char *cocci_id/* sound/pci/mixart/mixart_hwdep.c 551 */[3];
	struct snd_mixart *cocci_id/* sound/pci/mixart/mixart_hwdep.c 528 */;
	u32 *cocci_id/* sound/pci/mixart/mixart_hwdep.c 368 */;
	unsigned long cocci_id/* sound/pci/mixart/mixart_hwdep.c 35 */;
	u32 cocci_id/* sound/pci/mixart/mixart_hwdep.c 335 */;
	const struct firmware *cocci_id/* sound/pci/mixart/mixart_hwdep.c 332 */;
	struct mixart_mgr *cocci_id/* sound/pci/mixart/mixart_hwdep.c 332 */;
	int cocci_id/* sound/pci/mixart/mixart_hwdep.c 332 */;
	struct mixart_uid_enumeration cocci_id/* sound/pci/mixart/mixart_hwdep.c 253 */;
	struct mixart_return_uid cocci_id/* sound/pci/mixart/mixart_hwdep.c 252 */;
	struct mixart_pipe *cocci_id/* sound/pci/mixart/mixart_hwdep.c 163 */;
	struct mixart_uid cocci_id/* sound/pci/mixart/mixart_hwdep.c 150 */;
	struct mixart_audio_info_resp *cocci_id/* sound/pci/mixart/mixart_hwdep.c 135 */;
	struct mixart_audio_info_req *cocci_id/* sound/pci/mixart/mixart_hwdep.c 134 */;
	struct mixart_enum_connector_resp *cocci_id/* sound/pci/mixart/mixart_hwdep.c 133 */;
	struct mixart_msg cocci_id/* sound/pci/mixart/mixart_hwdep.c 132 */;
	struct snd_mixart_elf32_phdr cocci_id/* sound/pci/mixart/mixart_hwdep.c 101 */;
}
