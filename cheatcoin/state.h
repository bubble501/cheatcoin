/* состояние программы, T13.788-T13.789; $DVS:time$ */

cheatcoin_state(INIT, "Initializing.")
cheatcoin_state(REST, "The local storage is corrupted. Resetting blocks engine.")
cheatcoin_state(LOAD, "Loading blocks from the local storage.")
cheatcoin_state(WTST, "Trying to connect to the test network.")
cheatcoin_state(WAIT, "Trying to connect to the main network.")
cheatcoin_state(TTST, "Trying to connect to the testnet pool.")
cheatcoin_state(TRYP, "Trying to connect to the mainnet pool.")
cheatcoin_state(CTST, "Connected to the test network. Synchronizing.")
cheatcoin_state(CONN, "Connected to the main network. Synchronizing.")
cheatcoin_state(XFER, "Waiting for transfer to complete.")
cheatcoin_state(PTST, "Connected to the testnet pool. No mining.")
cheatcoin_state(POOL, "Connected to the mainnet pool. No mining.")
cheatcoin_state(MTST, "Connected to the testnet pool. Mining on. Normal testing.")
cheatcoin_state(MINE, "Connected to the mainnet pool. Mining on. Normal operation.")
cheatcoin_state(STST, "Synchronized with the test network. Normal testing.")
cheatcoin_state(SYNC, "Synchronized witn the main network. Normal operation.")
