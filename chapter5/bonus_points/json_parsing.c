mpc_parser_t* Key = mpc_new("key");
mpc_parser_t* Value = mpc_new("value");
mpc_parser_t* Words = mpc_new("words");
mpc_parser_t* Pair = mpc_new("pair");
mpc_parser_t* Json = mpc_new("json");

mpca_lang(MPCA_LANG_DEFAULT, "
        words: \"a\" | \"b\" | \"c\" | \"d\" | \"e\" | \"f\" | \"g\" | \"h\" | \
        | \"i\" | \"j\" | \"k\" | \"l\" | \"m\"| \"n\" | \"o\" | \"p\" | \"q\" \
        | \"r\" | \"s\" | \"t\" | \"u\" | \"v\ | \"w\" | \"x\" | \"y\" | \"z\";\
        key: <words>* ':';                                                     \
        value: <words>*;
        pair: '{' <key> <value> '}';
        json: <pair>*;
        ",Key, Value, Words, Pair, Json);

mpc_cleanup(5, Key, Value, Words, Pair, Json);
