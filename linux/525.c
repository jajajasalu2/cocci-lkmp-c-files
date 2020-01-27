cocci_test_suite() {
	struct crypto_akcipher *cocci_id/* crypto/rsa.c 95 */;
	struct akcipher_request *cocci_id/* crypto/rsa.c 93 */;
	MPI cocci_id/* crypto/rsa.c 39 */;
	const struct rsa_mpi_key *cocci_id/* crypto/rsa.c 39 */;
	int cocci_id/* crypto/rsa.c 39 */;
	void cocci_id/* crypto/rsa.c 275 */;
	struct rsa_mpi_key cocci_id/* crypto/rsa.c 254 */;
	struct akcipher_alg cocci_id/* crypto/rsa.c 242 */;
	struct rsa_mpi_key *cocci_id/* crypto/rsa.c 237 */;
	struct rsa_key cocci_id/* crypto/rsa.c 194 */;
	const void *cocci_id/* crypto/rsa.c 190 */;
	struct rsa_mpi_key {
		MPI n;
		MPI e;
		MPI d;
	} cocci_id/* crypto/rsa.c 15 */;
	unsigned int cocci_id/* crypto/rsa.c 141 */;
}
