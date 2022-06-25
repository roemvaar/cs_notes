# Design

* If you have tools that interact between them, connect them with a human-readable format, in this case, people can build
a parser to use the data. Instead, if you choose to have a dump of the memory (object file), it will be harder to interact
with your system as time passes by. Nowadays, storage is not longer a concern, so take advantage of that and use something
like a JSON file.
