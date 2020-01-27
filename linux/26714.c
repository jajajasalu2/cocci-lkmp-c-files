cocci_test_suite() {
	struct mei {
		uuid_le guid;
		bool initialized;
		bool verbose;
		unsigned int buf_size;
		unsigned char prot_ver;
		int fd;
	} cocci_id/* samples/mei/mei-amt-version.c 92 */;
	struct amt_host_if cocci_id/* samples/mei/mei-amt-version.c 441 */;
	char **cocci_id/* samples/mei/mei-amt-version.c 438 */;
	int cocci_id/* samples/mei/mei-amt-version.c 438 */;
	struct amt_code_versions cocci_id/* samples/mei/mei-amt-version.c 429 */;
	uint8_t **cocci_id/* samples/mei/mei-amt-version.c 419 */;
	const unsigned char *cocci_id/* samples/mei/mei-amt-version.c 417 */;
	struct amt_host_if_resp_header *cocci_id/* samples/mei/mei-amt-version.c 413 */;
	struct amt_code_versions *cocci_id/* samples/mei/mei-amt-version.c 411 */;
	uint32_t cocci_id/* samples/mei/mei-amt-version.c 410 */;
	struct amt_host_if *cocci_id/* samples/mei/mei-amt-version.c 410 */;
	uint8_t cocci_id/* samples/mei/mei-amt-version.c 379 */;
	uint8_t *cocci_id/* samples/mei/mei-amt-version.c 379 */;
	unsigned int cocci_id/* samples/mei/mei-amt-version.c 370 */;
	ssize_t cocci_id/* samples/mei/mei-amt-version.c 368 */;
	struct amt_host_if_msg_header cocci_id/* samples/mei/mei-amt-version.c 354 */;
	struct amt_host_if_resp_header cocci_id/* samples/mei/mei-amt-version.c 351 */;
	const struct amt_host_if_msg_header *cocci_id/* samples/mei/mei-amt-version.c 348 */;
	struct amt_version_type cocci_id/* samples/mei/mei-amt-version.c 323 */;
	size_t cocci_id/* samples/mei/mei-amt-version.c 312 */;
	const struct amt_host_if_resp_header *cocci_id/* samples/mei/mei-amt-version.c 308 */;
	void cocci_id/* samples/mei/mei-amt-version.c 302 */;
	unsigned long cocci_id/* samples/mei/mei-amt-version.c 295 */;
	bool cocci_id/* samples/mei/mei-amt-version.c 294 */;
	struct amt_host_if {
		struct mei mei_cl;
		unsigned long send_timeout;
		bool initialized;
	} cocci_id/* samples/mei/mei-amt-version.c 287 */;
	const struct amt_host_if_msg_header cocci_id/* samples/mei/mei-amt-version.c 279 */;
	const uuid_le cocci_id/* samples/mei/mei-amt-version.c 273 */;
	struct amt_host_if_resp_header {
		struct amt_host_if_msg_header header;
		uint32_t status;
		unsigned char data[0];
	}__attribute__((packed)) cocci_id/* samples/mei/mei-amt-version.c 267 */;
	struct amt_host_if_msg_header {
		struct amt_version version;
		uint16_t _reserved;
		uint32_t command;
		uint32_t length;
	}__attribute__((packed)) cocci_id/* samples/mei/mei-amt-version.c 260 */;
	struct amt_code_versions {
		uint8_t bios[AMT_BIOS_VERSION_LEN];
		uint32_t count;
		struct amt_version_type versions[AMT_VERSIONS_NUMBER];
	}__attribute__((packed)) cocci_id/* samples/mei/mei-amt-version.c 250 */;
	struct amt_version {
		uint8_t major;
		uint8_t minor;
	}__attribute__((packed)) cocci_id/* samples/mei/mei-amt-version.c 245 */;
	struct amt_version_type {
		struct amt_unicode_string description;
		struct amt_unicode_string version;
	}__attribute__((packed)) cocci_id/* samples/mei/mei-amt-version.c 240 */;
	struct amt_unicode_string {
		uint16_t length;
		char string[AMT_UNICODE_STRING_LEN];
	}__attribute__((packed)) cocci_id/* samples/mei/mei-amt-version.c 235 */;
	fd_set cocci_id/* samples/mei/mei-amt-version.c 178 */;
	struct timeval cocci_id/* samples/mei/mei-amt-version.c 175 */;
	unsigned char *cocci_id/* samples/mei/mei-amt-version.c 154 */;
	struct mei_connect_client_data cocci_id/* samples/mei/mei-amt-version.c 116 */;
	struct mei_client *cocci_id/* samples/mei/mei-amt-version.c 115 */;
	unsigned char cocci_id/* samples/mei/mei-amt-version.c 112 */;
	const uuid_le *cocci_id/* samples/mei/mei-amt-version.c 111 */;
	struct mei *cocci_id/* samples/mei/mei-amt-version.c 101 */;
}
