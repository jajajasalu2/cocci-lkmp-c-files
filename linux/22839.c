cocci_test_suite() {
	union {
		struct {
			u32 owner_hi,owner_lo;
			u32 notification;
			char nick_name[NICK_NAME_SIZE];
			u32 clock_select;
			u32 enable;
			u32 status;
			u32 extended_status;
			u32 sample_rate;
			u32 version;
			u32 clock_caps;
			char clock_source_names[CLOCK_SOURCE_NAMES_SIZE];
		} global;
		struct {
			u32 iso;
			u32 number_audio;
			u32 number_midi;
			u32 speed;
			char names[TX_NAMES_SIZE];
			u32 ac3_caps;
			u32 ac3_enable;
		} tx;
		struct {
			u32 iso;
			u32 seq_start;
			u32 number_audio;
			u32 number_midi;
			char names[RX_NAMES_SIZE];
			u32 ac3_caps;
			u32 ac3_enable;
		} rx;
		struct {
			u32 clock_source;
			u32 locked;
			u32 rate;
			u32 adat_user_data;
		} ext_sync;
	} cocci_id/* sound/firewire/dice/dice-proc.c 76 */;
	struct {
		u32 number;
		u32 size;
	} cocci_id/* sound/firewire/dice/dice-proc.c 72 */;
	u32 cocci_id/* sound/firewire/dice/dice-proc.c 71 */[ARRAY_SIZE(section_names) * 2];
	const char *constcocci_id/* sound/firewire/dice/dice-proc.c 62 */[];
	const char *constcocci_id/* sound/firewire/dice/dice-proc.c 59 */[5];
	struct snd_info_buffer *cocci_id/* sound/firewire/dice/dice-proc.c 57 */;
	u32 *cocci_id/* sound/firewire/dice/dice-proc.c 43 */;
	char *cocci_id/* sound/firewire/dice/dice-proc.c 38 */;
	unsigned int cocci_id/* sound/firewire/dice/dice-proc.c 38 */;
	void (*cocci_id/* sound/firewire/dice/dice-proc.c 281 */)(struct snd_info_entry *entry,
								  struct snd_info_buffer *buffer);
	const char *cocci_id/* sound/firewire/dice/dice-proc.c 280 */;
	struct snd_info_entry *cocci_id/* sound/firewire/dice/dice-proc.c 279 */;
	struct snd_dice *cocci_id/* sound/firewire/dice/dice-proc.c 279 */;
	void cocci_id/* sound/firewire/dice/dice-proc.c 279 */;
	int cocci_id/* sound/firewire/dice/dice-proc.c 179 */;
	u32 cocci_id/* sound/firewire/dice/dice-proc.c 125 */;
	void *cocci_id/* sound/firewire/dice/dice-proc.c 11 */;
}
