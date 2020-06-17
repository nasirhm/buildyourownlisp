// No libraries included, as we haven't setup `mpc` yet

mpc_parser_t* Adjective = mpc_new("adjective");

mpc_parser_t* Noun = mpc_new("noun");

mpc_parser_t* Phrase = mpc_new("phrase");

mpc_parser_t* Doge = mpc_new("doge");

mpca_lang(MPCA_LANG_DEFAULT, "adjective: \"wow\" | \"many\" | \"so\" | \"such\";  noun: \"lisp\" | \"language\" | \"book\" | \"build\" | \"c\"; phrase: <adjective> <noun>; doge: <phrase>*",Adjective, Noun, Phrase, Doge);

// The mpca_lang uses the features of itself internally, that's why it's somewhat similar to the past example.

