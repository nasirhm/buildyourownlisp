mpc_parser_t* Noun = mpc_new("noun");
moc_parser_t* Verb = mpc_new("verb");
mpc_parser_t* HelpingVerb = mpc_new("helpingverb");
mpc_parser_t* Preposition = mpc_new("preposition");
mpc_parser_t* Sentence = mpc_new("sentence");

mpca_lang(MPCA_LANG_DEFAULT,"
        noun: \"cat\" | \"mat\"; \
        verb: \"sat\"; \
        helpingverb:  \"the\"; \
        preposition: \"on\"; \
        sentence: <helpingverb>* <noun> <preposition>* <helpingverb>* <verb>;
        ",Noun, Verb, HelpingVerb, Preposition, Sentence);

mpc_cleanup(4, Noun, Verb, HelpingVerb, Preposition, Sentence);
