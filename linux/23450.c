cocci_test_suite() {
	uint8_t cocci_id/* sound/soc/codecs/sigmadsp.c 99 */[];
	const uint8_t cocci_id/* sound/soc/codecs/sigmadsp.c 93 */[];
	struct sigma_action {
		u8 instr;
		u8 len_hi;
		__le16 len;
		__be16 addr;
		unsigned char payload[];
	}__packed cocci_id/* sound/soc/codecs/sigmadsp.c 84 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/sigmadsp.c 802 */;
	enum{SIGMA_ACTION_WRITEXBYTES=0, SIGMA_ACTION_WRITESINGLE, SIGMA_ACTION_WRITESAFELOAD, SIGMA_ACTION_END,} cocci_id/* sound/soc/codecs/sigmadsp.c 77 */;
	struct sigma_firmware_header {
		unsigned char magic[7];
		u8 version;
		__le32 crc;
	}__packed cocci_id/* sound/soc/codecs/sigmadsp.c 71 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/sigmadsp.c 704 */;
	struct snd_ctl_elem_id cocci_id/* sound/soc/codecs/sigmadsp.c 661 */;
	struct snd_kcontrol_volatile *cocci_id/* sound/soc/codecs/sigmadsp.c 660 */;
	struct sigma_fw_chunk_samplerate {
		struct sigma_fw_chunk chunk;
		__le32 samplerates[];
	}__packed cocci_id/* sound/soc/codecs/sigmadsp.c 66 */;
	struct snd_card *cocci_id/* sound/soc/codecs/sigmadsp.c 659 */;
	unsigned long cocci_id/* sound/soc/codecs/sigmadsp.c 641 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/sigmadsp.c 633 */;
	struct snd_kcontrol_new cocci_id/* sound/soc/codecs/sigmadsp.c 632 */;
	struct sigma_fw_chunk_control {
		struct sigma_fw_chunk chunk;
		__le16 type;
		__le16 addr;
		__le16 num_bytes;
		const char name[];
	}__packed cocci_id/* sound/soc/codecs/sigmadsp.c 58 */;
	int cocci_id/* sound/soc/codecs/sigmadsp.c 569 */;
	const struct sigmadsp_ops *cocci_id/* sound/soc/codecs/sigmadsp.c 566 */;
	const char *cocci_id/* sound/soc/codecs/sigmadsp.c 566 */;
	struct sigmadsp *cocci_id/* sound/soc/codecs/sigmadsp.c 565 */;
	struct device *cocci_id/* sound/soc/codecs/sigmadsp.c 565 */;
	struct sigma_fw_chunk_data {
		struct sigma_fw_chunk chunk;
		__le16 addr;
		uint8_t data[];
	}__packed cocci_id/* sound/soc/codecs/sigmadsp.c 52 */;
	const struct firmware *cocci_id/* sound/soc/codecs/sigmadsp.c 478 */;
	const struct sigma_firmware_header *cocci_id/* sound/soc/codecs/sigmadsp.c 477 */;
	void *cocci_id/* sound/soc/codecs/sigmadsp.c 470 */;
	void cocci_id/* sound/soc/codecs/sigmadsp.c 470 */;
	struct sigma_fw_chunk {
		__le32 length;
		__le32 tag;
		__le32 samplerates;
	}__packed cocci_id/* sound/soc/codecs/sigmadsp.c 46 */;
	struct sigma_firmware_header cocci_id/* sound/soc/codecs/sigmadsp.c 429 */;
	struct sigmadsp_data *cocci_id/* sound/soc/codecs/sigmadsp.c 392 */;
	size_t cocci_id/* sound/soc/codecs/sigmadsp.c 391 */;
	struct sigma_action *cocci_id/* sound/soc/codecs/sigmadsp.c 389 */;
	struct sigma_action cocci_id/* sound/soc/codecs/sigmadsp.c 381 */;
	struct sigmadsp_data {
		struct list_head head;
		uint32_t samplerates;
		unsigned int addr;
		unsigned int length;
		uint8_t data[];
	} cocci_id/* sound/soc/codecs/sigmadsp.c 38 */;
	u32 cocci_id/* sound/soc/codecs/sigmadsp.c 360 */;
	struct sigma_fw_chunk *cocci_id/* sound/soc/codecs/sigmadsp.c 309 */;
	__le32 cocci_id/* sound/soc/codecs/sigmadsp.c 284 */;
	unsigned int *cocci_id/* sound/soc/codecs/sigmadsp.c 279 */;
	const struct sigma_fw_chunk_samplerate *cocci_id/* sound/soc/codecs/sigmadsp.c 277 */;
	struct sigmadsp_control {
		struct list_head head;
		uint32_t samplerates;
		unsigned int addr;
		unsigned int num_bytes;
		const char *name;
		struct snd_kcontrol *kcontrol;
		bool cached;
		uint8_t cache[];
	} cocci_id/* sound/soc/codecs/sigmadsp.c 27 */;
	struct sigma_fw_chunk_data *cocci_id/* sound/soc/codecs/sigmadsp.c 257 */;
	const struct sigma_fw_chunk_data *cocci_id/* sound/soc/codecs/sigmadsp.c 251 */;
	char *cocci_id/* sound/soc/codecs/sigmadsp.c 204 */;
	struct sigmadsp_control *cocci_id/* sound/soc/codecs/sigmadsp.c 201 */;
	const struct sigma_fw_chunk_control *cocci_id/* sound/soc/codecs/sigmadsp.c 200 */;
	const struct sigma_fw_chunk *cocci_id/* sound/soc/codecs/sigmadsp.c 198 */;
	unsigned int cocci_id/* sound/soc/codecs/sigmadsp.c 198 */;
	bool cocci_id/* sound/soc/codecs/sigmadsp.c 184 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/sigmadsp.c 153 */;
	uint8_t *cocci_id/* sound/soc/codecs/sigmadsp.c 132 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/codecs/sigmadsp.c 105 */;
}
