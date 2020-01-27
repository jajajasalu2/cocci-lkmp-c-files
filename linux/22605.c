cocci_test_suite() {
	enum pcxhr_async_err_src{PCXHR_ERR_PIPE, PCXHR_ERR_STREAM, PCXHR_ERR_AUDIO,} cocci_id/* sound/pci/pcxhr/pcxhr_core.c 999 */;
	long cocci_id/* sound/pci/pcxhr/pcxhr_core.c 954 */;
	ktime_t cocci_id/* sound/pci/pcxhr/pcxhr_core.c 900 */;
	struct pcxhr_rmh cocci_id/* sound/pci/pcxhr/pcxhr_core.c 784 */;
	int *cocci_id/* sound/pci/pcxhr/pcxhr_core.c 782 */;
	struct pcxhr_rmh *cocci_id/* sound/pci/pcxhr/pcxhr_core.c 717 */;
	char *cocci_id/* sound/pci/pcxhr/pcxhr_core.c 500 */[];
	struct pcxhr_cmd_info cocci_id/* sound/pci/pcxhr/pcxhr_core.c 469 */[];
	enum{RMH_SSIZE_FIXED=0, RMH_SSIZE_ARG=1, RMH_SSIZE_MASK=2,} cocci_id/* sound/pci/pcxhr/pcxhr_core.c 460 */;
	struct pcxhr_cmd_info {
		u32 opcode;
		u16 st_length;
		u16 st_type;
	} cocci_id/* sound/pci/pcxhr/pcxhr_core.c 453 */;
	const unsigned char *cocci_id/* sound/pci/pcxhr/pcxhr_core.c 325 */;
	const struct firmware *cocci_id/* sound/pci/pcxhr/pcxhr_core.c 320 */;
	void cocci_id/* sound/pci/pcxhr/pcxhr_core.c 259 */;
	struct snd_pcxhr *cocci_id/* sound/pci/pcxhr/pcxhr_core.c 1270 */;
	bool cocci_id/* sound/pci/pcxhr/pcxhr_core.c 1221 */;
	irqreturn_t cocci_id/* sound/pci/pcxhr/pcxhr_core.c 1217 */;
	void *cocci_id/* sound/pci/pcxhr/pcxhr_core.c 1217 */;
	long unsigned int cocci_id/* sound/pci/pcxhr/pcxhr_core.c 1206 */;
	u_int32_t cocci_id/* sound/pci/pcxhr/pcxhr_core.c 1201 */;
	unsigned long cocci_id/* sound/pci/pcxhr/pcxhr_core.c 118 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/pcxhr/pcxhr_core.c 1156 */;
	unsigned char *cocci_id/* sound/pci/pcxhr/pcxhr_core.c 115 */;
	unsigned char cocci_id/* sound/pci/pcxhr/pcxhr_core.c 114 */;
	struct pcxhr_mgr *cocci_id/* sound/pci/pcxhr/pcxhr_core.c 113 */;
	unsigned int cocci_id/* sound/pci/pcxhr/pcxhr_core.c 113 */;
	int cocci_id/* sound/pci/pcxhr/pcxhr_core.c 113 */;
	struct pcxhr_stream *cocci_id/* sound/pci/pcxhr/pcxhr_core.c 1116 */;
	u_int64_t cocci_id/* sound/pci/pcxhr/pcxhr_core.c 1115 */;
	enum pcxhr_async_err_src cocci_id/* sound/pci/pcxhr/pcxhr_core.c 1006 */;
	u32 cocci_id/* sound/pci/pcxhr/pcxhr_core.c 1005 */;
}
