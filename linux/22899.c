cocci_test_suite() {
	u32 cocci_id/* sound/firewire/bebob/bebob_proc.c 83 */;
	u32 *cocci_id/* sound/firewire/bebob/bebob_proc.c 76 */;
	const struct snd_bebob_meter_spec *cocci_id/* sound/firewire/bebob/bebob_proc.c 75 */;
	char *cocci_id/* sound/firewire/bebob/bebob_proc.c 50 */;
	struct hw_info cocci_id/* sound/firewire/bebob/bebob_proc.c 41 */;
	struct hw_info *cocci_id/* sound/firewire/bebob/bebob_proc.c 39 */;
	void (*cocci_id/* sound/firewire/bebob/bebob_proc.c 160 */)(struct snd_info_entry *e,
								    struct snd_info_buffer *b);
	const char *cocci_id/* sound/firewire/bebob/bebob_proc.c 159 */;
	struct snd_info_entry *cocci_id/* sound/firewire/bebob/bebob_proc.c 159 */;
	struct snd_bebob *cocci_id/* sound/firewire/bebob/bebob_proc.c 159 */;
	void cocci_id/* sound/firewire/bebob/bebob_proc.c 158 */;
	unsigned int cocci_id/* sound/firewire/bebob/bebob_proc.c 143 */;
	enum snd_bebob_clock_type cocci_id/* sound/firewire/bebob/bebob_proc.c 142 */;
	const struct snd_bebob_clock_spec *cocci_id/* sound/firewire/bebob/bebob_proc.c 141 */;
	const struct snd_bebob_rate_spec *cocci_id/* sound/firewire/bebob/bebob_proc.c 140 */;
	const char *const cocci_id/* sound/firewire/bebob/bebob_proc.c 134 */[];
	struct snd_info_buffer *cocci_id/* sound/firewire/bebob/bebob_proc.c 132 */;
	struct hw_info {
		u64 manufacturer;
		u32 protocol_ver;
		u32 bld_ver;
		u32 guid[2];
		u32 model_id;
		u32 model_rev;
		u64 fw_date;
		u64 fw_time;
		u32 fw_id;
		u32 fw_ver;
		u32 base_addr;
		u32 max_size;
		u64 bld_date;
		u64 bld_time;
	}__packed cocci_id/* sound/firewire/bebob/bebob_proc.c 11 */;
	struct snd_bebob_stream_formation *cocci_id/* sound/firewire/bebob/bebob_proc.c 108 */;
}
