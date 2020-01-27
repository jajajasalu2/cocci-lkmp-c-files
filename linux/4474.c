cocci_test_suite() {
	struct tee_param cocci_id/* drivers/char/hw_random/optee-rng.c 80 */[4];
	struct tee_ioctl_invoke_arg cocci_id/* drivers/char/hw_random/optee-rng.c 79 */;
	u8 *cocci_id/* drivers/char/hw_random/optee-rng.c 77 */;
	int cocci_id/* drivers/char/hw_random/optee-rng.c 76 */;
	void *cocci_id/* drivers/char/hw_random/optee-rng.c 74 */;
	struct optee_rng_private *cocci_id/* drivers/char/hw_random/optee-rng.c 73 */;
	size_t cocci_id/* drivers/char/hw_random/optee-rng.c 73 */;
	struct optee_rng_private {
		struct device *dev;
		struct tee_context *ctx;
		u32 session_id;
		u32 data_rate;
		struct tee_shm *entropy_shm_pool;
		struct hwrng optee_rng;
	} cocci_id/* drivers/char/hw_random/optee-rng.c 61 */;
	void __exit cocci_id/* drivers/char/hw_random/optee-rng.c 296 */;
	int __init cocci_id/* drivers/char/hw_random/optee-rng.c 291 */;
	struct tee_client_driver cocci_id/* drivers/char/hw_random/optee-rng.c 281 */;
	const struct tee_client_device_id cocci_id/* drivers/char/hw_random/optee-rng.c 273 */[];
	struct tee_ioctl_open_session_arg cocci_id/* drivers/char/hw_random/optee-rng.c 218 */;
	struct tee_client_device *cocci_id/* drivers/char/hw_random/optee-rng.c 216 */;
	const void *cocci_id/* drivers/char/hw_random/optee-rng.c 206 */;
	struct tee_ioctl_version_data *cocci_id/* drivers/char/hw_random/optee-rng.c 206 */;
	struct device *cocci_id/* drivers/char/hw_random/optee-rng.c 176 */;
	struct optee_rng_private cocci_id/* drivers/char/hw_random/optee-rng.c 167 */;
	struct hwrng *cocci_id/* drivers/char/hw_random/optee-rng.c 160 */;
	void cocci_id/* drivers/char/hw_random/optee-rng.c 160 */;
	struct tee_shm *cocci_id/* drivers/char/hw_random/optee-rng.c 146 */;
	bool cocci_id/* drivers/char/hw_random/optee-rng.c 115 */;
}
